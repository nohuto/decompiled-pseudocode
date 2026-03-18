/*
 * XREFs of MmAttachSession @ 0x14008BBD0
 * Callers:
 *     ExpHpCompactSessionPools @ 0x14008B714 (ExpHpCompactSessionPools.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MiAttachToOwningSession @ 0x14012C5BC (MiAttachToOwningSession.c)
 *     MiEmptyAccessLogs @ 0x14017CE80 (MiEmptyAccessLogs.c)
 *     PopPowerButtonWorkCallback @ 0x1403015D0 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140301B60 (PopWatchdogWorker.c)
 *     ExCallSessionCallBack @ 0x1406361E8 (ExCallSessionCallBack.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140666224 (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x140694A24 (PspChangeProcessExecutionState.c)
 *     MmPrefetchVirtualMemory @ 0x1406A58F8 (MmPrefetchVirtualMemory.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406BAD50 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BF68C (ExGetSessionPoolTagInformation.c)
 *     PspAttachSession @ 0x1406EAFC4 (PspAttachSession.c)
 *     MmEnumerateSystemImages @ 0x140708430 (MmEnumerateSystemImages.c)
 *     PnpNotifyDriverCallback @ 0x140735C38 (PnpNotifyDriverCallback.c)
 *     MmGetSessionMappedViewInformation @ 0x1408879CC (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x1408B6104 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408BEE70 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1408FBDFC (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140908CDC (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14097613C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140976220 (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmAttachSession(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // rbx
  _KPROCESS *Process; // rdi
  unsigned __int64 v4; // r14
  unsigned __int8 v5; // bp
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 1024);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process[1].ActiveProcessors.Bitmap[1];
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( (*(_DWORD *)(v1 + 4) & 2) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v1 + 100);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v5 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v9 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v9);
    }
    __writecr8(v5);
    if ( v4 && (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 && v4 == v1 )
      v2 = (ULONG_PTR)Process;
    KiStackAttachProcess(v2);
    return 0LL;
  }
}
