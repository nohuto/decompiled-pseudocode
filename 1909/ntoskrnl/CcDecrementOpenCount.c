/*
 * XREFs of CcDecrementOpenCount @ 0x14007A66C
 * Callers:
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14007BABC (CcNotifyOfMappedWrite.c)
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     CcCompleteAsyncRead @ 0x140080CAC (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     CcPurgeCacheSection @ 0x1400BF3E0 (CcPurgeCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x1400FE680 (CcMdlWriteComplete2.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140124764 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x140124870 (CcGetFlushedValidData.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E314 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x14027E890 (CcMdlWriteAbort.c)
 * Callees:
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14011CD88 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 */

__int64 __fastcall CcDecrementOpenCount(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // r11

  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 536);
  result = CcGetPartition(a1);
  v4 = result;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 528) + 593LL) = 1;
    v5 = *(unsigned int *)(a1 + 152);
    v6 = *(_DWORD *)(a1 + 112);
    if ( (v5 & 0x10000) != 0 )
    {
      if ( !v6 )
        CcInsertIntoDirtySharedCacheMapList(a1, v3);
      LOBYTE(v5) = 1;
      LOBYTE(v3) = 1;
    }
    else
    {
      if ( v6 || (v5 & 0x20) != 0 )
        return result;
      CcInsertIntoDirtySharedCacheMapList(a1, v3);
      LOBYTE(v3) = v7 != 0;
      v5 = 0LL;
    }
    return CcScheduleLazyWriteScan(v4, v3, v5);
  }
  return result;
}
