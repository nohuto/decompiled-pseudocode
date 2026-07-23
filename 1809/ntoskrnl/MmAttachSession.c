/*
 * XREFs of MmAttachSession @ 0x14011A6C0
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiAttachToOwningSession @ 0x14011A53C (MiAttachToOwningSession.c)
 *     ExpHpCompactSessionPools @ 0x1401B7788 (ExpHpCompactSessionPools.c)
 *     PopPowerButtonWorkCallback @ 0x1402E4990 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x1402E5120 (PopWatchdogWorker.c)
 *     EtwpSendDataBlock @ 0x1405C139C (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     MmPrefetchVirtualMemory @ 0x14066CF68 (MmPrefetchVirtualMemory.c)
 *     ObpProcessRemoveObjectQueue @ 0x140692B80 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x14069F774 (ExGetSessionPoolTagInformation.c)
 *     PspAttachSession @ 0x14069FA88 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x14069FAE4 (ExCallSessionCallBack.c)
 *     PnpNotifyDriverCallback @ 0x1407049F4 (PnpNotifyDriverCallback.c)
 *     MmEnumerateSystemImages @ 0x140727E0C (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x14084D700 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x14087A180 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140882320 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1408C02F4 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CC5FC (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x140937A5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140937B30 (VfThunkApplyThunks.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, v12);
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
