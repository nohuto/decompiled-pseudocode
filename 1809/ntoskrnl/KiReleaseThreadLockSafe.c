/*
 * XREFs of KiReleaseThreadLockSafe @ 0x14010C490
 * Callers:
 *     KiAttachProcess @ 0x140016BD0 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KiSetPriorityFloor @ 0x14002509C (KiSetPriorityFloor.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     KiRundownMutants @ 0x1400898AC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x140089E68 (KiFlushQueueApc.c)
 *     KiBeginThreadWait @ 0x14008B1B0 (KiBeginThreadWait.c)
 *     KeTestAlertThread @ 0x1400A2610 (KeTestAlertThread.c)
 *     KiFastReadyThread @ 0x1400A2B98 (KiFastReadyThread.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 *     KiDetachProcess @ 0x1400B9BE0 (KiDetachProcess.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KeAlertThreadByThreadId @ 0x1400CCE2C (KeAlertThreadByThreadId.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD3F0 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1E00 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x1400D22F0 (KeQueryBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KeYieldExecution @ 0x1400D6650 (KeYieldExecution.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D7D30 (KiProcessPendingForegroundBoosts.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     KeBoostPriorityThread @ 0x1400E3400 (KeBoostPriorityThread.c)
 *     KeRequestTerminationThread @ 0x1400F13C8 (KeRequestTerminationThread.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KeAlertThread @ 0x1400F22B0 (KeAlertThread.c)
 *     KiSuspendThread @ 0x1400F2428 (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400F2868 (KiInsertDeferredPreemptionApc.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3B18 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F4738 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiFastExitThreadWait @ 0x1400F9E2C (KiFastExitThreadWait.c)
 *     KiWaitForAllObjects @ 0x1400FA4A8 (KiWaitForAllObjects.c)
 *     KeRundownQueueCommon @ 0x1400FAB20 (KeRundownQueueCommon.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1401123A0 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1401124F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114E14 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x1401154EC (KiSetAffinityThread.c)
 *     KiClearPriorityFloor @ 0x14011F7AC (KiClearPriorityFloor.c)
 *     KiAcquireReleaseThreadLock @ 0x140121740 (KiAcquireReleaseThreadLock.c)
 *     KiAbThreadInsertList @ 0x140128EA8 (KiAbThreadInsertList.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x140129D50 (KiTryToUpdateVPBackingThreadPriority.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     KeRemoveQueueApc @ 0x14012F428 (KeRemoveQueueApc.c)
 *     KiSwitchPriQueue @ 0x140136044 (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x14013B1E0 (KeQueryAffinityThread.c)
 *     KeUpdateThreadTag @ 0x14013E8F0 (KeUpdateThreadTag.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CF4C (KeSetIdealProcessorThreadEx.c)
 *     KeTryToFreezeThreadStack @ 0x140160F24 (KeTryToFreezeThreadStack.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14018CB74 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x14028DFC0 (KeQueryActualAffinityThread.c)
 *     KeEnumerateQueueApc @ 0x140294C70 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x140294E10 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x1402968B8 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296C70 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140297F34 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x140298350 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298EE0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 *     KiMonitorCacheErrata @ 0x14029A680 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x14029AE58 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x14029D6F4 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiReleaseThreadLockSafe(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
  {
    result = (unsigned int)(SchedulerAssist[5] - 1);
    SchedulerAssist[5] = result;
    if ( !(_DWORD)result )
      return KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  return result;
}
