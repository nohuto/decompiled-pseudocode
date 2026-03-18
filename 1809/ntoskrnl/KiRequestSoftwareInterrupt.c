/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x140005AC0
 * Callers:
 *     KiRequestTimer2Expiration @ 0x140003A70 (KiRequestTimer2Expiration.c)
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x14005B570 (KeClearSystemPriority.c)
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 *     KiBeginThreadWait @ 0x14008B1C0 (KiBeginThreadWait.c)
 *     KiFastReadyThread @ 0x1400A2C58 (KiFastReadyThread.c)
 *     KeRemovePriQueue @ 0x1400B6180 (KeRemovePriQueue.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400C2F50 (KiExitDispatcher.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF20 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD350 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD850 (KeSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400CEEC0 (KeSetPriorityBoost.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6964 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D81F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8670 (KeGenericProcessorCallback.c)
 *     KeBoostPriorityThread @ 0x1400E3360 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x1400F9E70 (KiExitThreadWait.c)
 *     KiReadyOutSwappedThreads @ 0x14010B660 (KiReadyOutSwappedThreads.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114A84 (KeCpuSetReportParkedProcessors.c)
 *     KeSetLegacyAffinityThread @ 0x1401151D0 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116408 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F538 (KiAbThreadUnboostCpuPriority.c)
 *     KiFlushQueuedDpcsWorker @ 0x140134240 (KiFlushQueuedDpcsWorker.c)
 *     KiAbForceProcessLockEntry @ 0x140166160 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14016B290 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C634 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14018C82C (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x140190494 (KeSetAffinityProcess.c)
 *     KeRemovePriorityBoost @ 0x14028DE44 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14029673C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296980 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14029CC9C (KeTransitionProcessorParkState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
    goto LABEL_5;
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel )
  {
    CurrentPrcb->InterruptRequest = 1;
  }
  else
  {
LABEL_5:
    LOBYTE(CurrentPrcb) = a2;
    return HalRequestSoftwareInterrupt(CurrentPrcb);
  }
  return result;
}
