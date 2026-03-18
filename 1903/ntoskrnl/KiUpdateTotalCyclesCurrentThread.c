/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x140012B6C
 * Callers:
 *     KeUpdateTotalCyclesCurrentThread @ 0x140001878 (KeUpdateTotalCyclesCurrentThread.c)
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140012110 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x1400143EC (KiCompleteDirectSwitchThread.c)
 *     PspRevertContainerImpersonation @ 0x140036810 (PspRevertContainerImpersonation.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400E9570 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeBoostPriorityThread @ 0x1401064BC (KeBoostPriorityThread.c)
 *     KeYieldExecution @ 0x140109BD0 (KeYieldExecution.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140121EE0 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiStartDebugAccumulation @ 0x1402AEB10 (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140012CB0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 */

__int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
