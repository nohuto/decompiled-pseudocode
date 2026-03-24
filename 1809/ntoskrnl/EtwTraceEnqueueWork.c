/*
 * XREFs of EtwTraceEnqueueWork @ 0x14030FD8C
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
 *     AlpcpSignalAndWait @ 0x1400ABCD0 (AlpcpSignalAndWait.c)
 *     KeReleaseMutant @ 0x1400BFA10 (KeReleaseMutant.c)
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1400C5EC0 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400C6330 (IoSetIoCompletionEx.c)
 *     KiTimerWaitTest @ 0x1400C7B70 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDDB0 (NtReleaseWorkerFactoryWorker.c)
 *     KeReleaseSemaphoreEx @ 0x1400D2970 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueue @ 0x1400DD000 (KeInsertQueue.c)
 *     KePulseEvent @ 0x1400F0BC0 (KePulseEvent.c)
 *     KiResumeThread @ 0x1400F1C60 (KiResumeThread.c)
 *     KeRundownQueueCommon @ 0x1400FAAA0 (KeRundownQueueCommon.c)
 *     KiInsertQueueInternal @ 0x1400FACEC (KiInsertQueueInternal.c)
 *     KiExpireTimer2 @ 0x1400FB900 (KiExpireTimer2.c)
 *     KeRegisterObjectNotification @ 0x1400FD2C0 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x1400FD6A0 (KeInsertQueueEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1401034C8 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x140125BD8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1401276B0 (KeSignalGate.c)
 *     KeInsertHeadQueue @ 0x140295280 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3710 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

void __fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1600);
  v4 = a2;
  v5 = v3;
  v6 = &v4;
  v8 = 0;
  v7 = 12;
  EtwTraceKernelEvent((__int64)&v6, 1u, 0x21000000u, 0x53Eu, a3 != 0 ? 5250562 : 5244418);
}
