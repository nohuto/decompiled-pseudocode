/*
 * XREFs of KiReadyDeferredReadyList @ 0x140012610
 * Callers:
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140012110 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013D60 (KeSetPriorityBoost.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiAbDeferredProcessingWorker @ 0x14009DF30 (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x14009E94C (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400E4810 (KiProcessPendingForegroundBoosts.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400E86A4 (KeSetSchedulingGroupRankBias.c)
 *     KeSetLegacyAffinityThread @ 0x1400F7C30 (KeSetLegacyAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400F9898 (KeCpuSetReportParkedProcessors.c)
 *     KeBoostPriorityThread @ 0x1401064BC (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x14011B080 (KiExitThreadWait.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140121FCC (KiAbThreadUnboostCpuPriority.c)
 *     KeSetAffinityThread @ 0x14015A184 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14016B534 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401962BC (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1401964C4 (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402AD014 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
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
