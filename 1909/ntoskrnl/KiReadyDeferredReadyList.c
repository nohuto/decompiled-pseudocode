/*
 * XREFs of KiReadyDeferredReadyList @ 0x140012840
 * Callers:
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KiAbDeferredProcessingWorker @ 0x1400C5D70 (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x1400C678C (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400E97B0 (KiProcessPendingForegroundBoosts.c)
 *     KeSetLegacyAffinityThread @ 0x1400FB6D0 (KeSetLegacyAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14011531C (KeSetSchedulingGroupRankBias.c)
 *     KeBoostPriorityThread @ 0x140118790 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x1401194B0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011EED0 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140122E1C (KiAbThreadUnboostCpuPriority.c)
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
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 */

__int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdx
  __int64 result; // rax

  v2 = *a2;
  while ( v2 )
  {
    v4 = v2 - 27;
    v2 = (_QWORD *)*v2;
    result = KiDeferredReadyThread(a1, v4);
  }
  return result;
}
