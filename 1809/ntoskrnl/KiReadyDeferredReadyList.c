/*
 * XREFs of KiReadyDeferredReadyList @ 0x1400CDC24
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140023AE0 (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF40 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD370 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD870 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1400D0020 (KiQuantumEnd.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6984 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E90 (KeSetSystemGroupAffinityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D7CB0 (KiProcessPendingForegroundBoosts.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8210 (KeRevertToUserGroupAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1400E3380 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x1400F9E90 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114AA4 (KeCpuSetReportParkedProcessors.c)
 *     KeSetLegacyAffinityThread @ 0x1401151F0 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116428 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F558 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbForceProcessLockEntry @ 0x140166180 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14016B2B0 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C654 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14018C84C (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x1401904B4 (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14029683C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296A80 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14029905C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14029CD9C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x1400C3390 (KiDeferredReadyThread.c)
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
