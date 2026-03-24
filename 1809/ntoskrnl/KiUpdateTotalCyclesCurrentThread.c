/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1400D1D3C
 * Callers:
 *     KeUpdateTotalCyclesCurrentThread @ 0x140001858 (KeUpdateTotalCyclesCurrentThread.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     KeRemovePriQueue @ 0x1400B61A0 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF40 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD370 (KeSetBasePriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x1400D2C1C (KiCompleteDirectSwitchThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D2F78 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeYieldExecution @ 0x1400D65D0 (KeYieldExecution.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6984 (KeSetPriorityAndQuantumProcess.c)
 *     KeBoostPriorityThread @ 0x1400E3380 (KeBoostPriorityThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F46B8 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140120610 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiStartDebugAccumulation @ 0x140297C58 (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x1400D1E70 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D1FA0 (KiEndThreadCycleAccumulation.c)
 */

__int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
