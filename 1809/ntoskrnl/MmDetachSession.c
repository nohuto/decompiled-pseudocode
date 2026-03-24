/*
 * XREFs of MmDetachSession @ 0x14011A5C0
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1400ECD64 (MiUnlockStealVm.c)
 *     ExpHpCompactSessionPools @ 0x1401B7628 (ExpHpCompactSessionPools.c)
 *     PopWatchdogWorker @ 0x1402E4F30 (PopWatchdogWorker.c)
 *     EtwpSendDataBlock @ 0x1405C039C (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x1406035AC (PspChangeProcessExecutionState.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     MmPrefetchVirtualMemory @ 0x14066BDA8 (MmPrefetchVirtualMemory.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919C0 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x14069E4B4 (ExGetSessionPoolTagInformation.c)
 *     ExCallSessionCallBack @ 0x14069E824 (ExCallSessionCallBack.c)
 *     PnpNotifyDriverCallback @ 0x140703754 (PnpNotifyDriverCallback.c)
 *     MmEnumerateSystemImages @ 0x140726B6C (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x14084C4A0 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x140878F20 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408810C0 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1408BF034 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CB33C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x140936A5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140936B30 (VfThunkApplyThunks.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     KeSignalGate @ 0x1401276B0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
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
