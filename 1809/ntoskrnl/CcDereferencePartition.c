/*
 * XREFs of CcDereferencePartition @ 0x14007C998
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14007C270 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDF0 (CcFreeWorkQueueEntry.c)
 *     CcWorkerThread @ 0x14007F2E0 (CcWorkerThread.c)
 *     CcZeroData @ 0x1400E0C20 (CcZeroData.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1DA0 (CcCompleteAsyncReadWorker.c)
 *     CcForEachPartition @ 0x140120080 (CcForEachPartition.c)
 *     CcAsyncReadWorkerThread @ 0x14013FAD0 (CcAsyncReadWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1401403B0 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x140183840 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x14018AB18 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x140269780 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x1402699B0 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x14026A960 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x14026B1A0 (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
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
