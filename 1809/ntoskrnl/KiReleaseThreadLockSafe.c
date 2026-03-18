/*
 * XREFs of KiReleaseThreadLockSafe @ 0x14010C3F0
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
 *     KiRundownMutants @ 0x1400898BC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140089A20 (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x140089E78 (KiFlushQueueApc.c)
 *     KiBeginThreadWait @ 0x14008B1C0 (KiBeginThreadWait.c)
 *     KeTestAlertThread @ 0x1400A26D0 (KeTestAlertThread.c)
 *     KiFastReadyThread @ 0x1400A2C58 (KiFastReadyThread.c)
 *     KeRemovePriQueue @ 0x1400B6180 (KeRemovePriQueue.c)
 *     KiDetachProcess @ 0x1400B9C80 (KiDetachProcess.c)
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KeAlertThreadByThreadId @ 0x1400CCD8C (KeAlertThreadByThreadId.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF20 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD350 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD850 (KeSetPriorityThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDC40 (KiWakeOtherQueueWaiters.c)
 *     KiQuantumEnd @ 0x1400D0000 (KiQuantumEnd.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1D60 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x1400D2250 (KeQueryBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KeYieldExecution @ 0x1400D65B0 (KeYieldExecution.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6964 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E70 (KeSetSystemGroupAffinityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D7C90 (KiProcessPendingForegroundBoosts.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D81F0 (KeRevertToUserGroupAffinityThread.c)
 *     KiInitializeMutant @ 0x1400DD358 (KiInitializeMutant.c)
 *     KeBoostPriorityThread @ 0x1400E3360 (KeBoostPriorityThread.c)
 *     KeRequestTerminationThread @ 0x1400F1328 (KeRequestTerminationThread.c)
 *     KeInsertQueueApc @ 0x1400F1460 (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x1400F17B0 (KiSchedulerApc.c)
 *     KiResumeThread @ 0x1400F1C40 (KiResumeThread.c)
 *     KeAlertThread @ 0x1400F2210 (KeAlertThread.c)
 *     KiSuspendThread @ 0x1400F2388 (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400F27C8 (KiInsertDeferredPreemptionApc.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3A78 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F4698 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiFastExitThreadWait @ 0x1400F9D8C (KiFastExitThreadWait.c)
 *     KiWaitForAllObjects @ 0x1400FA408 (KiWaitForAllObjects.c)
 *     KeRundownQueueCommon @ 0x1400FAA80 (KeRundownQueueCommon.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140112310 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140112468 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114D84 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14011545C (KiSetAffinityThread.c)
 *     KiClearPriorityFloor @ 0x14011F71C (KiClearPriorityFloor.c)
 *     KiAcquireReleaseThreadLock @ 0x140121650 (KiAcquireReleaseThreadLock.c)
 *     KiAbThreadInsertList @ 0x140128DB8 (KiAbThreadInsertList.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x140129C60 (KiTryToUpdateVPBackingThreadPriority.c)
 *     MiSwapStackPage @ 0x14012D160 (MiSwapStackPage.c)
 *     KeRemoveQueueApc @ 0x14012F338 (KeRemoveQueueApc.c)
 *     KiSwitchPriQueue @ 0x140135F54 (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x14013B0C0 (KeQueryAffinityThread.c)
 *     KeUpdateThreadTag @ 0x14013E7D0 (KeUpdateThreadTag.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CE2C (KeSetIdealProcessorThreadEx.c)
 *     KeTryToFreezeThreadStack @ 0x140160E04 (KeTryToFreezeThreadStack.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14018CA14 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x14028DCD0 (KeQueryActualAffinityThread.c)
 *     KeEnumerateQueueApc @ 0x140294980 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x140294B20 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x1402965C8 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296980 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140297C44 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x140298060 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298BF0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 *     KiMonitorCacheErrata @ 0x14029A390 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x14029AB68 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x14029D404 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
