/*
 * XREFs of KiReleaseThreadLockSafe @ 0x14010C410
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
 *     KeRemovePriQueue @ 0x1400B61A0 (KeRemovePriQueue.c)
 *     KiDetachProcess @ 0x1400B9CA0 (KiDetachProcess.c)
 *     KiDeferredReadyThread @ 0x1400C3390 (KiDeferredReadyThread.c)
 *     KeAlertThreadByThreadId @ 0x1400CCDAC (KeAlertThreadByThreadId.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF40 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD370 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD870 (KeSetPriorityThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDC60 (KiWakeOtherQueueWaiters.c)
 *     KiQuantumEnd @ 0x1400D0020 (KiQuantumEnd.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1D80 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x1400D2270 (KeQueryBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1400D2370 (KiQueueReadyThread.c)
 *     KeYieldExecution @ 0x1400D65D0 (KeYieldExecution.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6984 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E90 (KeSetSystemGroupAffinityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D7CB0 (KiProcessPendingForegroundBoosts.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8210 (KeRevertToUserGroupAffinityThread.c)
 *     KiInitializeMutant @ 0x1400DD378 (KiInitializeMutant.c)
 *     KeBoostPriorityThread @ 0x1400E3380 (KeBoostPriorityThread.c)
 *     KeRequestTerminationThread @ 0x1400F1348 (KeRequestTerminationThread.c)
 *     KeInsertQueueApc @ 0x1400F1480 (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x1400F17D0 (KiSchedulerApc.c)
 *     KiResumeThread @ 0x1400F1C60 (KiResumeThread.c)
 *     KeAlertThread @ 0x1400F2230 (KeAlertThread.c)
 *     KiSuspendThread @ 0x1400F23A8 (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400F27E8 (KiInsertDeferredPreemptionApc.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3A98 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F46B8 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiFastExitThreadWait @ 0x1400F9DAC (KiFastExitThreadWait.c)
 *     KiWaitForAllObjects @ 0x1400FA428 (KiWaitForAllObjects.c)
 *     KeRundownQueueCommon @ 0x1400FAAA0 (KeRundownQueueCommon.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140112330 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140112488 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114DA4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14011547C (KiSetAffinityThread.c)
 *     KiClearPriorityFloor @ 0x14011F73C (KiClearPriorityFloor.c)
 *     KiAcquireReleaseThreadLock @ 0x140121670 (KiAcquireReleaseThreadLock.c)
 *     KiAbThreadInsertList @ 0x140128DD8 (KiAbThreadInsertList.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x140129C80 (KiTryToUpdateVPBackingThreadPriority.c)
 *     MiSwapStackPage @ 0x14012D180 (MiSwapStackPage.c)
 *     KeRemoveQueueApc @ 0x14012F358 (KeRemoveQueueApc.c)
 *     KiSwitchPriQueue @ 0x140135F74 (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x14013B0E0 (KeQueryAffinityThread.c)
 *     KeUpdateThreadTag @ 0x14013E7F0 (KeUpdateThreadTag.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CE4C (KeSetIdealProcessorThreadEx.c)
 *     KeTryToFreezeThreadStack @ 0x140160E24 (KeTryToFreezeThreadStack.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14018CA34 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x14028DDD0 (KeQueryActualAffinityThread.c)
 *     KeEnumerateQueueApc @ 0x140294A80 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x140294C20 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x1402966C8 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296A80 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140297D44 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x140298160 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298CF0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14029905C (KiSetHeteroPolicyThread.c)
 *     KiMonitorCacheErrata @ 0x14029A490 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x14029AC68 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x14029D504 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
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
