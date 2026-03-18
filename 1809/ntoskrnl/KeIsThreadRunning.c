/*
 * XREFs of KeIsThreadRunning @ 0x14028DCA8
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x140062B00 (NtAssociateWaitCompletionPacket.c)
 *     KiRundownMutants @ 0x1400898BC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140089A20 (KeTerminateThread.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     KeSetProcess @ 0x14008F710 (KeSetProcess.c)
 *     AlpcpSignalAndWait @ 0x1400ABCB0 (AlpcpSignalAndWait.c)
 *     KeReleaseMutant @ 0x1400BF9F0 (KeReleaseMutant.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1400C5EA0 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400C6310 (IoSetIoCompletionEx.c)
 *     KiTimerWaitTest @ 0x1400C7B50 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDD90 (NtReleaseWorkerFactoryWorker.c)
 *     KeReleaseSemaphoreEx @ 0x1400D2950 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueue @ 0x1400DCFE0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x1400F0BA0 (KePulseEvent.c)
 *     KiResumeThread @ 0x1400F1C40 (KiResumeThread.c)
 *     KeRundownQueueCommon @ 0x1400FAA80 (KeRundownQueueCommon.c)
 *     KiInsertQueueInternal @ 0x1400FACCC (KiInsertQueueInternal.c)
 *     KiExpireTimer2 @ 0x1400FB8E0 (KiExpireTimer2.c)
 *     KeRegisterObjectNotification @ 0x1400FD2A0 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x1400FD680 (KeInsertQueueEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1401034A8 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x140125BB8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140127690 (KeSignalGate.c)
 *     KeTryToInsertQueueApc @ 0x140294B20 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x140295180 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140316A2C (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
