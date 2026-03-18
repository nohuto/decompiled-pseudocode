/*
 * XREFs of KiSetThreadState @ 0x14013AC0C
 * Callers:
 *     KeSetBasePriorityThread @ 0x140012110 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013D60 (KeSetPriorityBoost.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     KiAbApplyWakeupBoost @ 0x14009E94C (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400E86A4 (KeSetSchedulingGroupRankBias.c)
 *     KeSetLegacyAffinityThread @ 0x1400F7C30 (KeSetLegacyAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400F9898 (KeCpuSetReportParkedProcessors.c)
 *     KeBoostPriorityThread @ 0x1401064BC (KeBoostPriorityThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140121FCC (KiAbThreadUnboostCpuPriority.c)
 *     KeSetAffinityThread @ 0x14015A184 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14016B534 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401962BC (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1401964C4 (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402AD014 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiSetThreadState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 388) = a2;
}
