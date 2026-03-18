/*
 * XREFs of SdbInitDatabaseInMemory @ 0x140708DFC
 * Callers:
 *     KsepShimDbMapToMemory @ 0x140708904 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x140709E9C (PiLookupInDDB.c)
 *     PpInitializeBootDDB @ 0x1409F92F8 (PpInitializeBootDDB.c)
 *     KseShimDatabaseBootInitialize @ 0x140A02380 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpInitializeMatchers @ 0x140708E80 (SdbpInitializeMatchers.c)
 *     SdbCloseDatabaseRead @ 0x140708EE0 (SdbCloseDatabaseRead.c)
 *     SdbpOpenDatabaseInMemory @ 0x140708F28 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
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
