/*
 * XREFs of KeReleaseSemaphore @ 0x1400C5EC0
 * Callers:
 *     PopSystemIrpCompletion @ 0x14056C720 (PopSystemIrpCompletion.c)
 *     AlpcpDoPortCleanup @ 0x140619108 (AlpcpDoPortCleanup.c)
 *     NtReleaseSemaphore @ 0x140698C30 (NtReleaseSemaphore.c)
 *     NtWaitForKeyedEvent @ 0x1406C37B0 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406C3AF0 (NtReleaseKeyedEvent.c)
 *     IopUncacheInterfaceInformation @ 0x1406EBD64 (IopUncacheInterfaceInformation.c)
 *     PnpAllocateResources @ 0x1406FADBC (PnpAllocateResources.c)
 *     IopLegacyResourceAllocation @ 0x14072CE94 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x14072E530 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14075829C (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x140758E74 (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x140815000 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408327C4 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14083284C (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1408328F4 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x14083B354 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x140841FBC (IopQueryConflictList.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400ACA10 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2F70 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4DD0 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDC60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE10 (KiAcquireKobjectLockSafe.c)
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14028DDA8 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FD8C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  LONG SignalState; // edi
  LONG v10; // eax
  __int64 v11; // rdx
  struct _KSEMAPHORE *Flink; // r13
  struct _KSEMAPHORE *v14; // rax
  __int64 v15; // rdx
  struct _LIST_ENTRY *v16; // rcx
  char v17; // al
  bool v18; // zf
  unsigned __int8 v19; // cl
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  int v22; // r10d
  struct _KSEMAPHORE **v23; // r9
  char v24; // al
  BOOL v25; // r14d
  unsigned __int8 IsThreadRunning; // al
  __int64 v27; // rdx
  __int64 v28; // r9
  struct _KPRCB *v29; // rcx
  struct _KSEMAPHORE *v30; // [rsp+38h] [rbp-40h]
  struct _KPRCB *v31; // [rsp+40h] [rbp-38h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-30h]
  __int64 v33; // [rsp+80h] [rbp+8h]

  v25 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(Semaphore);
  SignalState = Semaphore->Header.SignalState;
  v10 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v10 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v29 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v29);
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v10;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    while ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      v14 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v15 = (__int64)Flink;
      v30 = Flink;
      Flink = v14;
      v16 = v30->Header.WaitListHead.Flink;
      if ( (struct _KSEMAPHORE *)v14->Header.WaitListHead.Flink != v30 || v16->Flink != (struct _LIST_ENTRY *)v15 )
LABEL_42:
        __fastfail(3u);
      v16->Flink = (struct _LIST_ENTRY *)v14;
      v14->Header.WaitListHead.Flink = v16;
      v17 = *(_BYTE *)(v15 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
        {
          v18 = Semaphore->Header.SignalState-- == 1;
          if ( v18 )
            break;
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v33 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          v19 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v31 = KeGetCurrentPrcb();
          CurrentThread = v31->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v31->CurrentThread);
            EtwTraceEnqueueWork(v28, v27, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v33);
          v20 = (_QWORD *)(v33 + 8);
          v21 = v33;
          if ( (_QWORD *)*v20 == v20
            || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v33 && CurrentThread->WaitReason == 15 )
          {
LABEL_22:
            v22 = *(_DWORD *)(v21 + 4);
            *(_DWORD *)(v21 + 4) = v22 + 1;
            v23 = *(struct _KSEMAPHORE ***)(v21 + 32);
            if ( *v23 != (struct _KSEMAPHORE *)(v21 + 24) )
              goto LABEL_42;
            *(_QWORD *)&v30->Header.Lock = v21 + 24;
            v30->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v23;
            *v23 = v30;
            *(_QWORD *)(v21 + 32) = v30;
            if ( !v22 && (_QWORD *)*v20 != v20 )
            {
              KiWakeOtherQueueWaiters(v31, v21);
              v21 = v33;
            }
          }
          else
          {
            v24 = KiWakeQueueWaiter((__int64)v31, v33, (__int64)v30);
            v21 = v33;
            if ( !v24 )
            {
              v20 = (_QWORD *)(v33 + 8);
              goto LABEL_22;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v18 = Semaphore->Header.SignalState-- == 1;
          if ( v18 )
            break;
          continue;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v15, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  v11 = 3LL;
  if ( !v25 )
    v11 = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, v11, 1LL, Increment, CurrentIrql);
  return SignalState;
}
