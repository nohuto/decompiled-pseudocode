/*
 * XREFs of MmDetachSession @ 0x14011A5A0
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1400ECD44 (MiUnlockStealVm.c)
 *     ExpHpCompactSessionPools @ 0x1401B7608 (ExpHpCompactSessionPools.c)
 *     PopWatchdogWorker @ 0x1402E4E30 (PopWatchdogWorker.c)
 *     EtwpSendDataBlock @ 0x1405C039C (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x1406035AC (PspChangeProcessExecutionState.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     MmPrefetchVirtualMemory @ 0x14066BDC8 (MmPrefetchVirtualMemory.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919E0 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x14069E4D4 (ExGetSessionPoolTagInformation.c)
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
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KeSignalGate @ 0x140127690 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1024);
  KeAcquireInStackQueuedSpinLock(&qword_14043AE80, &LockHandle);
  --*(_DWORD *)(v2 + 116);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 116) )
    v2 = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  KiUnstackDetachProcess(a2, 0LL);
  if ( v2 )
    KeSignalGate(v2 + 120, 1LL);
  return 0LL;
}
