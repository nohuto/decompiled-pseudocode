/*
 * XREFs of CcDecrementOpenCount @ 0x1400ACEE0
 * Callers:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x14007CFB0 (CcSetFileSizesEx.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWrite @ 0x14007D950 (CcNotifyOfMappedWrite.c)
 *     CcPerformReadAhead @ 0x1400DE044 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1400DF3B4 (CcCompleteAsyncRead.c)
 *     CcMdlWriteComplete2 @ 0x1400E19A8 (CcMdlWriteComplete2.c)
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1400E8840 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140138DF8 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AC9C (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x14026B2B0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14007EF40 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1)
{
  __int64 Partition; // rax
  __int64 v3; // rdi
  int v4; // r8d
  int v5; // ecx
  __int64 v6; // r11
  char v7; // dl
  char v8; // r8

  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 536);
  Partition = CcGetPartition(a1);
  v3 = Partition;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 528) + 593LL) = 1;
    v4 = *(_DWORD *)(a1 + 152);
    v5 = *(_DWORD *)(a1 + 112);
    if ( (v4 & 0x10000) != 0 )
    {
      if ( !v5 )
        CcInsertIntoDirtySharedCacheMapList(a1);
      v8 = 1;
      v7 = 1;
    }
    else
    {
      if ( v5 || (v4 & 0x20) != 0 )
        return Partition;
      CcInsertIntoDirtySharedCacheMapList(a1);
      v7 = v6 != 0;
      v8 = 0;
    }
    LOBYTE(Partition) = CcScheduleLazyWriteScan(v3, v7, v8);
  }
  return Partition;
}
