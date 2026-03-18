/*
 * XREFs of EtwTraceEnqueueWork @ 0x14032DA48
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
 *     KeInsertHeadQueue @ 0x1402ABBB0 (KeInsertHeadQueue.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1FCC (KiSignalSynchronizationObjectEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1616);
  v6 = 0;
  v4 = a2;
  v5 = v3;
  v7 = &v4;
  v9 = 0;
  v8 = 12;
  EtwTraceKernelEvent((__int64)&v7, 1u, 0x21000000u, 0x53Eu, a3 != 0 ? 5250562 : 5244418);
}
