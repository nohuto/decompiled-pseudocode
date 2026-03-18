/*
 * XREFs of KeRegisterObjectNotification @ 0x1400082F0
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x140008090 (NtAssociateWaitCompletionPacket.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140045990 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryManagerThread @ 0x14018C1D0 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140A2066C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiWaitSatisfyOther @ 0x14011AF2C (KiWaitSatisfyOther.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rcx
  _QWORD *v9; // r14
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r13
  int v13; // edx
  _QWORD *v14; // rcx
  unsigned __int8 IsThreadRunning; // al
  struct _KPRCB *v16; // rcx
  int v17; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v17 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  if ( *(int *)(a1 + 4) > 0 )
  {
    KiWaitSatisfyOther(a1);
    *(_BYTE *)(a3 + 17) = 5;
    *(_QWORD *)a3 = 0LL;
    v9 = (_QWORD *)(a2 + 8);
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a3, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(a2);
    if ( (_QWORD *)*v9 == v9
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a2 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a2, a3) )
    {
      v13 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v13 + 1;
      v14 = *(_QWORD **)(a2 + 32);
      if ( *v14 != a2 + 24 )
LABEL_23:
        __fastfail(3u);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v14;
      *v14 = a3;
      *(_QWORD *)(a2 + 32) = a3;
      if ( !v13 && (_QWORD *)*v9 != v9 )
        KiWakeOtherQueueWaiters(CurrentPrcb, a2);
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
    return 1;
  }
  v7 = *(_QWORD **)(a1 + 16);
  if ( *v7 != a1 + 8 )
    goto LABEL_23;
  *(_QWORD *)a3 = a1 + 8;
  *(_QWORD *)(a3 + 8) = v7;
  *v7 = a3;
  *(_QWORD *)(a1 + 16) = a3;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16, a2);
  }
  __writecr8(CurrentIrql);
  return 0;
}
