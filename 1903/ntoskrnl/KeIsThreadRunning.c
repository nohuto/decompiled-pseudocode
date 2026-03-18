/*
 * XREFs of KeIsThreadRunning @ 0x1402A493C
 * Callers:
 *     KeRegisterObjectNotification @ 0x1400082F0 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x14000CE90 (KeInsertQueueEx.c)
 *     AlpcpSignal @ 0x14000D460 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B670 (NtReleaseWorkerFactoryWorker.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeReleaseMutant @ 0x14006B690 (KeReleaseMutant.c)
 *     KiRundownMutants @ 0x140080B0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     KiResumeThread @ 0x1400813C8 (KiResumeThread.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 *     KiInsertQueueInternal @ 0x1400AA238 (KiInsertQueueInternal.c)
 *     KeRundownQueueCommon @ 0x1400AA5B0 (KeRundownQueueCommon.c)
 *     KiExpireTimer2 @ 0x1400BF760 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1400C3730 (KiTimerWaitTest.c)
 *     KeSetProcess @ 0x1400E57A0 (KeSetProcess.c)
 *     KePulseEvent @ 0x1400F3050 (KePulseEvent.c)
 *     IoSetIoCompletionEx @ 0x140100320 (IoSetIoCompletionEx.c)
 *     PpmCheckRun @ 0x140108FC0 (PpmCheckRun.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 *     KeInsertQueue @ 0x14012D860 (KeInsertQueue.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     KeTryToInsertQueueApc @ 0x1402AB500 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x1402ABBB0 (KeInsertHeadQueue.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1FCC (KiSignalSynchronizationObjectEx.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140335558 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
