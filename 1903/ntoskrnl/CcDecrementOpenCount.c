/*
 * XREFs of CcDecrementOpenCount @ 0x14007A2AC
 * Callers:
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14007B6BC (CcNotifyOfMappedWrite.c)
 *     CcSetFileSizesEx @ 0x14007D170 (CcSetFileSizesEx.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 *     CcCompleteAsyncRead @ 0x1400808AC (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x1400A1A38 (CcPerformReadAhead.c)
 *     CcPurgeCacheSection @ 0x1400DF560 (CcPurgeCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x1400FC4F0 (CcMdlWriteComplete2.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140123ADC (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x140123BF0 (CcGetFlushedValidData.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x14027EB30 (CcMdlWriteAbort.c)
 * Callees:
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14011C868 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14011F3EC (CcScheduleLazyWriteScan.c)
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
