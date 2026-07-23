/*
 * XREFs of MmDetachSession @ 0x14011A630
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1400ECDE4 (MiUnlockStealVm.c)
 *     ExpHpCompactSessionPools @ 0x1401B7788 (ExpHpCompactSessionPools.c)
 *     PopWatchdogWorker @ 0x1402E5120 (PopWatchdogWorker.c)
 *     EtwpSendDataBlock @ 0x1405C139C (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     MmPrefetchVirtualMemory @ 0x14066CF68 (MmPrefetchVirtualMemory.c)
 *     ObpProcessRemoveObjectQueue @ 0x140692B80 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x14069F774 (ExGetSessionPoolTagInformation.c)
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
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1024);
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
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
