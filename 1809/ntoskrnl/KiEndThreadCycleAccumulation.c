/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x1400D2020
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x14005B570 (KeClearSystemPriority.c)
 *     KiBeginThreadWait @ 0x14008B1B0 (KiBeginThreadWait.c)
 *     KiFastReadyThread @ 0x1400A2B98 (KiFastReadyThread.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD3F0 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiIdleSchedule @ 0x1400D1CD0 (KiIdleSchedule.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D312C (KiGroupSchedulingGenerationEnd.c)
 *     KeYieldExecution @ 0x1400D6650 (KeYieldExecution.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     KeBoostPriorityThread @ 0x1400E3400 (KeBoostPriorityThread.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     KiExitThreadWait @ 0x1400F9F10 (KiExitThreadWait.c)
 *     KiReadyOutSwappedThreads @ 0x14010B700 (KiReadyOutSwappedThreads.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114B14 (KeCpuSetReportParkedProcessors.c)
 *     KeSetLegacyAffinityThread @ 0x140115260 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116498 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F5C8 (KiAbThreadUnboostCpuPriority.c)
 *     KeUpdateThreadTag @ 0x14013E8F0 (KeUpdateThreadTag.c)
 *     KiAbForceProcessLockEntry @ 0x140166280 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14016B3B0 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C794 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14018C98C (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x1401905F4 (KeSetAffinityProcess.c)
 *     KeRemovePriorityBoost @ 0x14028E134 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140296A2C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296C70 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D20B0 (KiEndThreadAccountingPeriod.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v5 = __rdtsc();
  v6 = v5 - *(_QWORD *)(a1 + 23488);
  v7 = v6 + *(_QWORD *)(a2 + 72);
  v8 = v6 + *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v7;
  *(_QWORD *)(a1 + 23488) = v5;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  v9 = (*(_BYTE *)(a2 + 2) & 0x3E) == 0;
  *(_DWORD *)(a2 + 80) = v8;
  if ( !v9 )
    KiEndThreadAccountingPeriod(a1, a2);
  result = v7;
  if ( a3 )
    *a3 = v5;
  return result;
}
