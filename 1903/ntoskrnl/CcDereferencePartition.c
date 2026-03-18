/*
 * XREFs of CcDereferencePartition @ 0x14007E0D4
 * Callers:
 *     CcUninitializeCacheMap @ 0x14000E330 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x14007D940 (CcWorkerThread.c)
 *     CcFreeWorkQueueEntry @ 0x14007E068 (CcFreeWorkQueueEntry.c)
 *     CcDeleteSharedCacheMap @ 0x14007F890 (CcDeleteSharedCacheMap.c)
 *     CcForEachPartition @ 0x1400F96E0 (CcForEachPartition.c)
 *     CcZeroData @ 0x1400FC620 (CcZeroData.c)
 *     CcCompleteAsyncReadWorker @ 0x140136150 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x14018C320 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x14018D280 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x1401908A4 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x14027D1C0 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x14027D3F0 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x14027E468 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x14027EC20 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x14027F4E0 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartition(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 904), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 936), 0, 0);
  }
  return v2;
}
