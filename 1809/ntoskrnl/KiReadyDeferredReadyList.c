/*
 * XREFs of KiReadyDeferredReadyList @ 0x1400CDC04
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140023AE0 (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF20 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD350 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD850 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1400D0000 (KiQuantumEnd.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6964 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E70 (KeSetSystemGroupAffinityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D7C90 (KiProcessPendingForegroundBoosts.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D81F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1400E3360 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x1400F9E70 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114A84 (KeCpuSetReportParkedProcessors.c)
 *     KeSetLegacyAffinityThread @ 0x1401151D0 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116408 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F538 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbForceProcessLockEntry @ 0x140166160 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14016B290 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C634 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14018C82C (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x140190494 (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14029673C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296980 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14029CC9C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 */

__int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rdx
  __int64 result; // rax

  v4 = *a2;
  while ( v4 )
  {
    v6 = (__int64)(v4 - 27);
    v4 = (_QWORD *)*v4;
    result = KiDeferredReadyThread(a1, v6, a3, a4);
  }
  return result;
}
