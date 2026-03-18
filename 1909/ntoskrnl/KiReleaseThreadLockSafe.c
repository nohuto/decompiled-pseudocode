/*
 * XREFs of KiReleaseThreadLockSafe @ 0x1400E32E0
 * Callers:
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140012DE0 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x140013AAC (KeQueryBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x140015B60 (KiFastReadyThread.c)
 *     KeTestAlertThread @ 0x14001BF90 (KeTestAlertThread.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiAttachProcess @ 0x140043560 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x14005A030 (KeRemovePriQueue.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KiRundownMutants @ 0x140080F0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400810BC (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x140081504 (KiFlushQueueApc.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x140081AF0 (KiSchedulerApc.c)
 *     KiAcquireReleaseThreadLock @ 0x140081F38 (KiAcquireReleaseThreadLock.c)
 *     KiBeginThreadWait @ 0x14009A470 (KiBeginThreadWait.c)
 *     KiSetPriorityFloor @ 0x1400C6CFC (KiSetPriorityFloor.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     KeRundownQueueCommon @ 0x1400E35B0 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1400E3824 (KeDeleteMutant.c)
 *     KeRequestTerminationThread @ 0x1400E4DEC (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1400E4F50 (KeAlertThread.c)
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400E55A4 (KiInsertDeferredPreemptionApc.c)
 *     KiSuspendThread @ 0x1400E5914 (KiSuspendThread.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400E8EEC (KiTryUnwaitThreadWithPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400E97B0 (KiProcessPendingForegroundBoosts.c)
 *     KiSetAffinityThread @ 0x1400FB8E0 (KiSetAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     KiInitializeMutant @ 0x1400FD068 (KiInitializeMutant.c)
 *     KeYieldExecution @ 0x140108D60 (KeYieldExecution.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14010C990 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14010CAE8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiSetThreadSchedulingGroup @ 0x140114330 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1401143F8 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeAlertThreadByThreadId @ 0x14011794C (KeAlertThreadByThreadId.c)
 *     KeBoostPriorityThread @ 0x140118790 (KeBoostPriorityThread.c)
 *     KiWaitSatisfyAny @ 0x1401192C0 (KiWaitSatisfyAny.c)
 *     KiFastExitThreadWait @ 0x1401193C4 (KiFastExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F1E0 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiClearPriorityFloor @ 0x140123008 (KiClearPriorityFloor.c)
 *     KeSetIdealProcessorThreadEx @ 0x1401275D0 (KeSetIdealProcessorThreadEx.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14012C1A8 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KeRemoveQueueApc @ 0x140131FF4 (KeRemoveQueueApc.c)
 *     KiAbThreadInsertList @ 0x140133E38 (KiAbThreadInsertList.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     KiSwitchPriQueue @ 0x14013A1E8 (KiSwitchPriQueue.c)
 *     KeUpdateThreadTag @ 0x140142DA0 (KeUpdateThreadTag.c)
 *     KeQueryAffinityThread @ 0x14015C720 (KeQueryAffinityThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x140196E94 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x1402A46C4 (KeQueryActualAffinityThread.c)
 *     KeTryToFreezeThreadStack @ 0x1402A4998 (KeTryToFreezeThreadStack.c)
 *     KeEnumerateQueueApc @ 0x1402AB0C0 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x1402AB260 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x1402ACC00 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402ACFE0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1402AE954 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x1402AED70 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402AFA34 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 *     KiMonitorCacheErrata @ 0x1402B14F0 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x1402B1C2C (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x1402B5CD0 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
