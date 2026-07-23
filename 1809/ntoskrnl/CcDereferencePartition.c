/*
 * XREFs of CcDereferencePartition @ 0x14007C988
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDE0 (CcFreeWorkQueueEntry.c)
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 *     CcZeroData @ 0x1400E0CA0 (CcZeroData.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1E20 (CcCompleteAsyncReadWorker.c)
 *     CcForEachPartition @ 0x1401200F0 (CcForEachPartition.c)
 *     CcAsyncReadWorkerThread @ 0x14013FBD0 (CcAsyncReadWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x140183980 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x14018AC58 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x140269970 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x14026AB50 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x14026B390 (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
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
