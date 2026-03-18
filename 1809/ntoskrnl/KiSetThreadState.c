/*
 * XREFs of KiSetThreadState @ 0x1401B4B6C
 * Callers:
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     KiFastReadyThread @ 0x1400A2C58 (KiFastReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x1400ACBA8 (KiInsertDeferredReadyList.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KiTryUnwaitThread @ 0x1400C4DB0 (KiTryUnwaitThread.c)
 *     KiTimerWaitTest @ 0x1400C7B50 (KiTimerWaitTest.c)
 *     KiSignalThread @ 0x1400CE7E0 (KiSignalThread.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2C80 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D308C (KiGroupSchedulingGenerationEnd.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3A78 (KiSetThreadSchedulingGroup.c)
 *     KiReadyOutSwappedThreads @ 0x14010B660 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     <none>
 */

void __fastcall KiSetThreadState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 388) = a2;
}
