/*
 * XREFs of KeInsertQueueEx @ 0x1400FD720
 * Callers:
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IoSetIoCompletionEx @ 0x1400C6270 (IoSetIoCompletionEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDE30 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1400FD668 (IoSetIoCompletionEx2.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  _QWORD *v5; // r15
  unsigned int v6; // r14d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rdi
  _KTHREAD *Thread; // rcx
  bool v13; // r12
  __int64 v14; // r8
  int v16; // edx
  _QWORD *v17; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v19; // rdx
  unsigned __int8 v20; // [rsp+70h] [rbp+8h]
  unsigned int v21; // [rsp+88h] [rbp+20h]

  v5 = (_QWORD *)(a1 + 8);
  v6 = a3;
  CurrentIrql = KeGetCurrentIrql();
  v20 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v19, IsThreadRunning);
  }
  if ( v6 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    v6 = 0;
  Thread = CurrentThread;
  if ( CurrentThread[1].WaitBlock[1].Thread )
    Thread = CurrentThread[1].WaitBlock[1].Thread;
  v13 = a4 && BYTE2(Thread->Process[2].Header.WaitListHead.Flink) == 2;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, (__int64)a2, a3);
  v21 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 == v5
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44) && !v13
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2) )
  {
    v16 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v16 + 1;
    v17 = *(_QWORD **)(a1 + 32);
    if ( *v17 != a1 + 24 )
      __fastfail(3u);
    *a2 = a1 + 24;
    a2[1] = v17;
    *v17 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v16 && (_QWORD *)*v5 != v5 )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1, v14);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, a4 != 0 ? 3 : 0, 1LL, v6, v20);
  return v21;
}
