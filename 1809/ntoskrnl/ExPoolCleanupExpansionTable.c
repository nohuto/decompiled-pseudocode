/*
 * XREFs of ExPoolCleanupExpansionTable @ 0x140142060
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     MiCheckSessionPoolAllocations @ 0x1406E1AA4 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     ExpRemovePoolTrackerExpansion @ 0x140107700 (ExpRemovePoolTrackerExpansion.c)
 *     ExFreeHeapPages @ 0x14015B374 (ExFreeHeapPages.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 */

__int64 __fastcall ExPoolCleanupExpansionTable(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // r10d
  unsigned int v6; // r8d
  __int64 v7; // rdx
  int v8; // r11d
  __int64 v9; // rcx
  int v10; // eax
  int v12; // r9d

  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v4 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v4 = EtwTracePool(3618, 512, 1819242320, a1, a2);
  LODWORD(v4) = KeGetPcr()->Prcb.Number;
  v5 = PoolTrackTableMask;
  v6 = PoolTrackTableMask & 0x40DEDA5;
  v7 = (__int64)*(&ExPoolTagTables + v4);
  v8 = PoolTrackTableMask & 0x40DEDA5;
  do
  {
    while ( 1 )
    {
      v9 = 56LL * v6;
      v10 = *(_DWORD *)(v9 + v7);
      if ( v10 == 1819242320 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v9 + v7 + 24));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + v7 + 8), -a2);
        return ExFreeHeapPages(a1, a2, 1819242320LL, 512LL);
      }
      if ( v10 )
        break;
      v12 = *(_DWORD *)(v9 + PoolTrackTable);
      if ( !v12 )
        break;
      *(_DWORD *)(v9 + v7) = v12;
    }
    v6 = v5 & (v6 + 1);
  }
  while ( v6 != v8 );
  ExpRemovePoolTrackerExpansion(1819242320, a2, 0);
  return ExFreeHeapPages(a1, a2, 1819242320LL, 512LL);
}
