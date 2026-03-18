/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1400D1D1C
 * Callers:
 *     KeUpdateTotalCyclesCurrentThread @ 0x140001858 (KeUpdateTotalCyclesCurrentThread.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     KeRemovePriQueue @ 0x1400B6180 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF20 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD350 (KeSetBasePriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x1400D2BFC (KiCompleteDirectSwitchThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D2F58 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeYieldExecution @ 0x1400D65B0 (KeYieldExecution.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6964 (KeSetPriorityAndQuantumProcess.c)
 *     KeBoostPriorityThread @ 0x1400E3360 (KeBoostPriorityThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F4698 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1401205F0 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiStartDebugAccumulation @ 0x140297B58 (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x1400D1E50 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D1F80 (KiEndThreadCycleAccumulation.c)
 */

__int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
