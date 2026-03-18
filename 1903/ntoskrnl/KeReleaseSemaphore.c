/*
 * XREFs of KeReleaseSemaphore @ 0x1401091E0
 * Callers:
 *     PopIrpWorker @ 0x14017AEC0 (PopIrpWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402ED370 (NtSignalAndWaitForSingleObject.c)
 *     PopSystemIrpCompletion @ 0x14059C460 (PopSystemIrpCompletion.c)
 *     AlpcpDoPortCleanup @ 0x14064A2F0 (AlpcpDoPortCleanup.c)
 *     NtWaitForKeyedEvent @ 0x1406BA540 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406BA7B0 (NtReleaseKeyedEvent.c)
 *     NtReleaseSemaphore @ 0x1406BAA20 (NtReleaseSemaphore.c)
 *     IopUncacheInterfaceInformation @ 0x14071829C (IopUncacheInterfaceInformation.c)
 *     PnpAllocateResources @ 0x140721A50 (PnpAllocateResources.c)
 *     IopLegacyResourceAllocation @ 0x140750B1C (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140752330 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14077DBE0 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x14077E5E4 (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x14084EB20 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14086D1F0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14086D268 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14086D2F0 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x140876480 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x14087DA00 (IopQueryConflictList.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  LONG SignalState; // edi
  LONG v9; // eax
  struct _KSEMAPHORE *Flink; // r14
  struct _KSEMAPHORE *v11; // rax
  __int64 v12; // rsi
  struct _KSEMAPHORE **v13; // rcx
  char v14; // al
  bool v15; // zf
  __int64 v16; // rdx
  char v18; // al
  __int64 v19; // rcx
  unsigned __int8 v20; // cl
  _QWORD *v21; // rdx
  int v22; // r9d
  __int64 *v23; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v25; // r9
  BOOL v26; // r13d
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  __int64 v30; // [rsp+90h] [rbp+8h]

  v26 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Semaphore->Header.Lock);
  SignalState = Semaphore->Header.SignalState;
  v9 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v9 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v27 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v27);
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v9;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    while ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      v11 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v12 = (__int64)Flink;
      Flink = v11;
      v13 = *(struct _KSEMAPHORE ***)(v12 + 8);
      if ( v11->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v12 || *v13 != (struct _KSEMAPHORE *)v12 )
LABEL_7:
        __fastfail(3u);
      *v13 = v11;
      v11->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v13;
      v14 = *(_BYTE *)(v12 + 16);
      if ( v14 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
        {
          v15 = Semaphore->Header.SignalState-- == 1;
          if ( v15 )
            break;
        }
      }
      else
      {
        if ( v14 == 2 )
        {
          *(_BYTE *)(v12 + 17) = 5;
          v30 = *(_QWORD *)(v12 + 24);
          *(_QWORD *)v12 = 0LL;
          v20 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v28 = KeGetCurrentPrcb();
          CurrentThread = v28->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v28->CurrentThread);
            EtwTraceEnqueueWork(v25, v12, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v30);
          v21 = (_QWORD *)(v30 + 8);
          v19 = v30;
          if ( (_QWORD *)*v21 == v21
            || *(_DWORD *)(v30 + 40) >= *(_DWORD *)(v30 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v30 && CurrentThread->WaitReason == 15 )
          {
LABEL_31:
            v22 = *(_DWORD *)(v19 + 4);
            *(_DWORD *)(v19 + 4) = v22 + 1;
            v23 = *(__int64 **)(v19 + 32);
            if ( *v23 != v19 + 24 )
              goto LABEL_7;
            *(_QWORD *)v12 = v19 + 24;
            *(_QWORD *)(v12 + 8) = v23;
            *v23 = v12;
            *(_QWORD *)(v19 + 32) = v12;
            if ( !v22 && (_QWORD *)*v21 != v21 )
            {
              KiWakeOtherQueueWaiters((__int64)v28, v19);
              v19 = v30;
            }
          }
          else
          {
            v18 = KiWakeQueueWaiter((__int64)v28, (_QWORD *)v30, v12);
            v19 = v30;
            if ( !v18 )
            {
              v21 = (_QWORD *)(v30 + 8);
              goto LABEL_31;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
          v15 = Semaphore->Header.SignalState-- == 1;
          if ( v15 )
            break;
          continue;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  v16 = 3LL;
  if ( !v26 )
    v16 = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, v16, 1u, Increment, CurrentIrql);
  return SignalState;
}
