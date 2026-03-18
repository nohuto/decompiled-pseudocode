/*
 * XREFs of CcDereferencePartition @ 0x14007C998
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14007C270 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDF0 (CcFreeWorkQueueEntry.c)
 *     CcWorkerThread @ 0x14007F2E0 (CcWorkerThread.c)
 *     CcZeroData @ 0x1400E0C00 (CcZeroData.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1D80 (CcCompleteAsyncReadWorker.c)
 *     CcForEachPartition @ 0x140120060 (CcForEachPartition.c)
 *     CcAsyncReadWorkerThread @ 0x14013FAB0 (CcAsyncReadWorkerThread.c)
 *     CcAsyncReadWorker @ 0x140140390 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x140183820 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x14018AAF8 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x140269680 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x1402698B0 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x14026A860 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x14026B0A0 (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
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
