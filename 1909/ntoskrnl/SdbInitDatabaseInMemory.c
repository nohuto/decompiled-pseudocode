/*
 * XREFs of SdbInitDatabaseInMemory @ 0x14070ABDC
 * Callers:
 *     KsepShimDbMapToMemory @ 0x14070A6E4 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x14070BC7C (PiLookupInDDB.c)
 *     PpInitializeBootDDB @ 0x1409F9208 (PpInitializeBootDDB.c)
 *     KseShimDatabaseBootInitialize @ 0x140A0289C (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpInitializeMatchers @ 0x14070AC60 (SdbpInitializeMatchers.c)
 *     SdbCloseDatabaseRead @ 0x14070ACC0 (SdbCloseDatabaseRead.c)
 *     SdbpOpenDatabaseInMemory @ 0x14070AD08 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x14070EABC (AslAlloc.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v7; // rcx

  v4 = AslAlloc(a1, 1008LL);
  if ( v4 )
  {
    v5 = SdbpOpenDatabaseInMemory(a1, a2);
    *(_QWORD *)(v4 + 8) = v5;
    if ( v5 )
    {
      *(_DWORD *)(v4 + 24) = 1;
      *(_DWORD *)(v4 + 28) = 1;
      *(_DWORD *)(v4 + 56) = 2;
      *(_QWORD *)(v4 + 48) = v5;
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1LL);
    v7 = *(void **)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    ExFreePoolWithTag((PVOID)v4, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
