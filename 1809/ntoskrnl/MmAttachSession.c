/*
 * XREFs of MmAttachSession @ 0x14011A630
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     MiAttachToOwningSession @ 0x14011A4AC (MiAttachToOwningSession.c)
 *     ExpHpCompactSessionPools @ 0x1401B7608 (ExpHpCompactSessionPools.c)
 *     PopPowerButtonWorkCallback @ 0x1402E46A0 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x1402E4E30 (PopWatchdogWorker.c)
 *     EtwpSendDataBlock @ 0x1405C039C (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x1406035AC (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     MmPrefetchVirtualMemory @ 0x14066BDC8 (MmPrefetchVirtualMemory.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919E0 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x14069E4D4 (ExGetSessionPoolTagInformation.c)
 *     PspAttachSession @ 0x14069E7E8 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x14069E844 (ExCallSessionCallBack.c)
 *     PnpNotifyDriverCallback @ 0x140703774 (PnpNotifyDriverCallback.c)
 *     MmEnumerateSystemImages @ 0x140726B8C (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x14084C4C0 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x140878F40 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408810E0 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1408BF054 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CB35C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x140936A5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140936B30 (VfThunkApplyThunks.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmAttachSession(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  _KPROCESS *v4; // rbx
  _KPROCESS *Process; // rdi
  unsigned __int64 v6; // r14
  unsigned __int8 v7; // bp
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE v12[2]; // [rsp+20h] [rbp-38h] BYREF

  v3 = BugCheckParameter1[1].ActiveProcessors.Bitmap[2];
  v4 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = Process[1].ActiveProcessors.Bitmap[2];
  KeAcquireInStackQueuedSpinLock(&qword_14043AE80, v12);
  if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)v12);
    OldIrql = v12[0].OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12[0].OldIrql < 2u )
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
    ++*(_DWORD *)(v3 + 116);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)v12);
    v7 = v12[0].OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12[0].OldIrql < 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v11);
    }
    __writecr8(v7);
    if ( v6 && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 && v6 == v3 )
      v4 = Process;
    KiStackAttachProcess(v4, 0LL, a2);
    return 0LL;
  }
}
