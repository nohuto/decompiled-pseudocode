/*
 * XREFs of KiReleaseThreadLockSafe @ 0x140109920
 * Callers:
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140012110 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140012BB0 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x14001387C (KeQueryBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013D60 (KeSetPriorityBoost.c)
 *     KeDeleteMutant @ 0x140014474 (KeDeleteMutant.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x14001577C (KiFastReadyThread.c)
 *     KeTestAlertThread @ 0x14001BBA0 (KeTestAlertThread.c)
 *     KiAttachProcess @ 0x14003A440 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14003A6F0 (KiDetachProcess.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiRundownMutants @ 0x140080B0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x140081104 (KiFlushQueueApc.c)
 *     KiResumeThread @ 0x1400813C8 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     KiAcquireReleaseThreadLock @ 0x140081B38 (KiAcquireReleaseThreadLock.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     KiSetPriorityFloor @ 0x14009EEC0 (KiSetPriorityFloor.c)
 *     KeRundownQueueCommon @ 0x1400AA5B0 (KeRundownQueueCommon.c)
 *     KeRequestTerminationThread @ 0x1400AE89C (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1400AEA00 (KeAlertThread.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400AF054 (KiInsertDeferredPreemptionApc.c)
 *     KiSuspendThread @ 0x1400AF3C4 (KiSuspendThread.c)
 *     KiBeginThreadWait @ 0x1400BA600 (KiBeginThreadWait.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400E4810 (KiProcessPendingForegroundBoosts.c)
 *     KiSetThreadSchedulingGroup @ 0x1400E94A8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400E9570 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x1400F7E40 (KiSetAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeBoostPriorityThread @ 0x1401064BC (KeBoostPriorityThread.c)
 *     KiInitializeMutant @ 0x140108C48 (KiInitializeMutant.c)
 *     KeYieldExecution @ 0x140109BD0 (KeYieldExecution.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14010D0E0 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14010D238 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14010D5E8 (KiTryUnwaitThreadWithPriority.c)
 *     KeAlertThreadByThreadId @ 0x1401198BC (KeAlertThreadByThreadId.c)
 *     KiWaitSatisfyAny @ 0x14011AE90 (KiWaitSatisfyAny.c)
 *     KiFastExitThreadWait @ 0x14011AF94 (KiFastExitThreadWait.c)
 *     KiClearPriorityFloor @ 0x1401221B8 (KiClearPriorityFloor.c)
 *     KeSetIdealProcessorThreadEx @ 0x140126AD0 (KeSetIdealProcessorThreadEx.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14012B6D8 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KeRemoveQueueApc @ 0x1401317E4 (KeRemoveQueueApc.c)
 *     KiAbThreadInsertList @ 0x140133348 (KiAbThreadInsertList.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     KiSwitchPriQueue @ 0x140139B10 (KiSwitchPriQueue.c)
 *     KeUpdateThreadTag @ 0x140142860 (KeUpdateThreadTag.c)
 *     KeQueryAffinityThread @ 0x14015C080 (KeQueryAffinityThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1401966B4 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x1402A4964 (KeQueryActualAffinityThread.c)
 *     KeTryToFreezeThreadStack @ 0x1402A4C38 (KeTryToFreezeThreadStack.c)
 *     KeEnumerateQueueApc @ 0x1402AB360 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x1402AB500 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x1402ACEA0 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1402AEBF4 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x1402AF010 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402AFCD4 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 *     KiMonitorCacheErrata @ 0x1402B1790 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x1402B1ECC (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x1402B5F70 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
