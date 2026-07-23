/*
 * XREFs of KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x14005B570 (KeClearSystemPriority.c)
 *     KiBeginThreadWait @ 0x14008B1B0 (KiBeginThreadWait.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5170 (KiDirectSwitchThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD3F0 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x1400CFE60 (KiRemoveBoostThread.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0FC4 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D312C (KiGroupSchedulingGenerationEnd.c)
 *     KeYieldExecution @ 0x1400D6650 (KeYieldExecution.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7EEC (KiApplyForegroundBoostThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     KeBoostPriorityThread @ 0x1400E3400 (KeBoostPriorityThread.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     KiExitThreadWait @ 0x1400F9F10 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114B14 (KeCpuSetReportParkedProcessors.c)
 *     KeSetLegacyAffinityThread @ 0x140115260 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116498 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F5C8 (KiAbThreadUnboostCpuPriority.c)
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
 *     KiQueryEffectivePriorityThread @ 0x1400D14D0 (KiQueryEffectivePriorityThread.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiUpdatePriorityMatrixThreadState(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v4; // esi
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax

  v4 = a4;
  if ( (a3 & 2) != 0 )
  {
    v8 = (*(_BYTE *)(a2 + 2) & 4) != 0 ? KiQueryEffectivePriorityThread(a2, a1) : *(_BYTE *)(a2 + 195);
    **(_BYTE **)(a1 + 56) = v8;
    v9 = *(_QWORD *)(a1 + 25016);
    if ( v9 )
    {
      v10 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( a2 != *(_QWORD *)(a1 + 24) )
        v10 = (unsigned int)v8;
      KiSetSchedulerAssistPriority(v9, v10, 0LL, a4);
    }
  }
  if ( v4 == 2 )
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  else if ( v4 == 3 )
  {
    v11 = *(_QWORD *)(a1 + 25016);
    v12 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 16) = a2;
    if ( v11 )
      *(_BYTE *)(v11 + 16) = a2 == v12;
  }
  LOBYTE(v13) = *(_BYTE *)(a2 + 388);
  if ( (_BYTE)v13 == 1 || (a3 & 4) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a2 + 132) = v13;
  }
  *(_BYTE *)(a2 + 388) = v4;
  return v13;
}
