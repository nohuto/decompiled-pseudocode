/*
 * XREFs of KiUpdatePriorityMatrixThreadState @ 0x1401B4B7C
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
 *     KiBeginThreadWait @ 0x14008B1C0 (KiBeginThreadWait.c)
 *     KeRemovePriQueue @ 0x1400B6180 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x1400C2F50 (KiExitDispatcher.c)
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5210 (KiDirectSwitchThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF20 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD350 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD850 (KeSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400CEEC0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF620 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x1400CFDC0 (KiRemoveBoostThread.c)
 *     KiQuantumEnd @ 0x1400D0000 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D308C (KiGroupSchedulingGenerationEnd.c)
 *     KeYieldExecution @ 0x1400D65B0 (KeYieldExecution.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6964 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E70 (KeSetSystemGroupAffinityThread.c)
 *     KiSelectNextThread @ 0x1400D7148 (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E4C (KiApplyForegroundBoostThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D81F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8670 (KeGenericProcessorCallback.c)
 *     KeBoostPriorityThread @ 0x1400E3360 (KeBoostPriorityThread.c)
 *     KiSchedulerApc @ 0x1400F17B0 (KiSchedulerApc.c)
 *     KiExitThreadWait @ 0x1400F9E70 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114A84 (KeCpuSetReportParkedProcessors.c)
 *     KeSetLegacyAffinityThread @ 0x1401151D0 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116408 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F538 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbForceProcessLockEntry @ 0x140166160 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14016B290 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C634 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14018C82C (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x140190494 (KeSetAffinityProcess.c)
 *     KeRemovePriorityBoost @ 0x14028DE44 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14029673C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296980 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x1400D1430 (KiQueryEffectivePriorityThread.c)
 *     KiSetSchedulerAssistPriority @ 0x14029952C (KiSetSchedulerAssistPriority.c)
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
