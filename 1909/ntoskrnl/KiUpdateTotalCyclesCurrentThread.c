/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x140012D9C
 * Callers:
 *     KeUpdateTotalCyclesCurrentThread @ 0x140001878 (KeUpdateTotalCyclesCurrentThread.c)
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x14001461C (KiCompleteDirectSwitchThread.c)
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 *     KeRemovePriQueue @ 0x14005A030 (KeRemovePriQueue.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     KeYieldExecution @ 0x140108D60 (KeYieldExecution.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1401143F8 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeBoostPriorityThread @ 0x140118790 (KeBoostPriorityThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140122D30 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiStartDebugAccumulation @ 0x1402AE870 (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140012EE0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 */

__int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
