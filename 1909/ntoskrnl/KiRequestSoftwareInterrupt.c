/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1400EF410
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x140015B60 (KiFastReadyThread.c)
 *     KeAccumulateTicks @ 0x140033750 (KeAccumulateTicks.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x140047240 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x140047950 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x14005A030 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiReadyOutSwappedThreads @ 0x140074960 (KiReadyOutSwappedThreads.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KiBeginThreadWait @ 0x14009A470 (KiBeginThreadWait.c)
 *     KiAbApplyWakeupBoost @ 0x1400C678C (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetLegacyAffinityThread @ 0x1400FB6D0 (KeSetLegacyAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14011531C (KeSetSchedulingGroupRankBias.c)
 *     KeBoostPriorityThread @ 0x140118790 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x1401194B0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011EED0 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140122E1C (KiAbThreadUnboostCpuPriority.c)
 *     KiRequestTimer2Expiration @ 0x14012D1A0 (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x140135E40 (KiFlushQueuedDpcsWorker.c)
 *     KeSetAffinityThread @ 0x14015A824 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14016BC24 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x140196A9C (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x140196CA4 (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x14019AD38 (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402ACD74 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402ACFE0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1402B54CC (KeTransitionProcessorParkState.c)
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
