/*
 * XREFs of KiSetThreadState @ 0x1401B4B8C
 * Callers:
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     KiFastReadyThread @ 0x1400A2C58 (KiFastReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x1400ACBC8 (KiInsertDeferredReadyList.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     KiDeferredReadyThread @ 0x1400C3390 (KiDeferredReadyThread.c)
 *     KiTryUnwaitThread @ 0x1400C4DD0 (KiTryUnwaitThread.c)
 *     KiTimerWaitTest @ 0x1400C7B70 (KiTimerWaitTest.c)
 *     KiSignalThread @ 0x1400CE800 (KiSignalThread.c)
 *     KiQueueReadyThread @ 0x1400D2370 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2CA0 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D30AC (KiGroupSchedulingGenerationEnd.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3A98 (KiSetThreadSchedulingGroup.c)
 *     KiReadyOutSwappedThreads @ 0x14010B680 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     <none>
 */

void __fastcall KiSetThreadState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 388) = a2;
}
