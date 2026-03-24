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
 *     KeRemovePriQueue @ 0x1400B61A0 (KeRemovePriQueue.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400C2F70 (KiExitDispatcher.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF40 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD370 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD870 (KeSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400CEEE0 (KeSetPriorityBoost.c)
 *     KiQueueReadyThread @ 0x1400D2370 (KiQueueReadyThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6984 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E90 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8210 (KeRevertToUserGroupAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8690 (KeGenericProcessorCallback.c)
 *     KeBoostPriorityThread @ 0x1400E3380 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x1400F9E90 (KiExitThreadWait.c)
 *     KiReadyOutSwappedThreads @ 0x14010B680 (KiReadyOutSwappedThreads.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114AA4 (KeCpuSetReportParkedProcessors.c)
 *     KeSetLegacyAffinityThread @ 0x1401151F0 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116428 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F558 (KiAbThreadUnboostCpuPriority.c)
 *     KiFlushQueuedDpcsWorker @ 0x140134260 (KiFlushQueuedDpcsWorker.c)
 *     KiAbForceProcessLockEntry @ 0x140166180 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14016B2B0 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C654 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14018C84C (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x1401904B4 (KeSetAffinityProcess.c)
 *     KeRemovePriorityBoost @ 0x14028DF44 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14029683C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296A80 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14029905C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14029CD9C (KeTransitionProcessorParkState.c)
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
