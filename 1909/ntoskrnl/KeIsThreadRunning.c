/*
 * XREFs of KeIsThreadRunning @ 0x1402A469C
 * Callers:
 *     KeRegisterObjectNotification @ 0x140008380 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x14000D0C0 (KeInsertQueueEx.c)
 *     AlpcpSignal @ 0x14000D690 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BAD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D720 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B710 (NtReleaseWorkerFactoryWorker.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeReleaseMutant @ 0x14006B900 (KeReleaseMutant.c)
 *     KiRundownMutants @ 0x140080F0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400810BC (KeTerminateThread.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KiExpireTimer2 @ 0x14009F5E0 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     KeSetEventBoostPriorityEx @ 0x1400C659C (KeSetEventBoostPriorityEx.c)
 *     KePulseEvent @ 0x1400DB590 (KePulseEvent.c)
 *     KiInsertQueueInternal @ 0x1400E31B4 (KiInsertQueueInternal.c)
 *     KeRundownQueueCommon @ 0x1400E35B0 (KeRundownQueueCommon.c)
 *     KeSetProcess @ 0x1400EA740 (KeSetProcess.c)
 *     KeInsertQueue @ 0x1400FD170 (KeInsertQueue.c)
 *     IoSetIoCompletionEx @ 0x140104F40 (IoSetIoCompletionEx.c)
 *     PpmCheckRun @ 0x140107FC0 (PpmCheckRun.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 *     KeWakeWaitChain @ 0x140125CEC (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     KeTryToInsertQueueApc @ 0x1402AB260 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x1402AB910 (KeInsertHeadQueue.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1D2C (KiSignalSynchronizationObjectEx.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140334FB8 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
