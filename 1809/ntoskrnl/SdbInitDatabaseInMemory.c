/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1405A21DC
 * Callers:
 *     KsepShimDbMapToMemory @ 0x1405A2050 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x14067EE2C (PiLookupInDDB.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AEFF4 (KseShimDatabaseBootInitialize.c)
 *     PpInitializeBootDDB @ 0x1409C842C (PpInitializeBootDDB.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SdbpInitializeMatchers @ 0x1405A2260 (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405A22C0 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x14067C7A0 (AslAlloc.c)
 *     SdbCloseDatabaseRead @ 0x140680AB4 (SdbCloseDatabaseRead.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
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
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 1017, (unsigned int)"Unable to open main database");
    v7 = *(void **)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    ExFreePoolWithTag((PVOID)v4, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 1008, (unsigned int)"Failed to allocate sdbcontext");
  }
  return 0LL;
}
