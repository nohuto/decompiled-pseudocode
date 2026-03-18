/*
 * XREFs of CcDereferencePartition @ 0x14007E4D4
 * Callers:
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x14007DD40 (CcWorkerThread.c)
 *     CcFreeWorkQueueEntry @ 0x14007E468 (CcFreeWorkQueueEntry.c)
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 *     CcZeroData @ 0x1400FE7B0 (CcZeroData.c)
 *     CcForEachPartition @ 0x140123270 (CcForEachPartition.c)
 *     CcCompleteAsyncReadWorker @ 0x140136AF0 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x14018CBA0 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x14018DB90 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x140190F14 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x14027CF20 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x14027D150 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x14027E1C8 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x14027E980 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x14027F240 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
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
