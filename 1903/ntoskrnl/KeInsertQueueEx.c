/*
 * XREFs of KeInsertQueueEx @ 0x14000CE90
 * Callers:
 *     AlpcpSignalAndWait @ 0x14000CB90 (AlpcpSignalAndWait.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B670 (NtReleaseWorkerFactoryWorker.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x1400E3FB8 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140100320 (IoSetIoCompletionEx.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, int a3, char a4)
{
  _QWORD *v5; // r12
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rsi
  _KTHREAD *Thread; // rcx
  bool v12; // r15
  _QWORD *v13; // rsi
  int v15; // edx
  _QWORD *v16; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v18; // rdx
  unsigned int v20; // [rsp+88h] [rbp+20h]

  v5 = (_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v18, IsThreadRunning);
  }
  if ( a3 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    a3 = 0;
  Thread = CurrentThread;
  if ( CurrentThread[1].WaitBlock[1].Thread )
    Thread = CurrentThread[1].WaitBlock[1].Thread;
  v12 = a4 && *((_BYTE *)&Thread->Process[1].SecureState.Flags + 2) == 2;
  KiAcquireKobjectLockSafe(a1);
  v20 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 == v5
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44) && !v12
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15 )
  {
    v13 = a2;
  }
  else
  {
    v13 = a2;
    if ( (unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a1, a2) )
      goto LABEL_14;
  }
  v15 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v15 + 1;
  v16 = *(_QWORD **)(a1 + 32);
  if ( *v16 != a1 + 24 )
    __fastfail(3u);
  *v13 = a1 + 24;
  v13[1] = v16;
  *v16 = v13;
  *(_QWORD *)(a1 + 32) = v13;
  if ( !v15 && (_QWORD *)*v5 != v5 )
    KiWakeOtherQueueWaiters(CurrentPrcb, a1);
LABEL_14:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, a4 != 0 ? 3 : 0, 1, a3, CurrentIrql);
  return v20;
}
