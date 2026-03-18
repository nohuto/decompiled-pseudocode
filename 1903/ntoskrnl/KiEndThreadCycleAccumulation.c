/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x140012DD0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140012110 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KiIdleSchedule @ 0x140012A80 (KiIdleSchedule.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012B6C (KiUpdateTotalCyclesCurrentThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140013C10 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetPriorityBoost @ 0x140013D60 (KeSetPriorityBoost.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140014610 (KiGroupSchedulingGenerationEnd.c)
 *     KiFastReadyThread @ 0x14001577C (KiFastReadyThread.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x1400478B0 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiReadyOutSwappedThreads @ 0x1400746F0 (KiReadyOutSwappedThreads.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     KiAbApplyWakeupBoost @ 0x14009E94C (KiAbApplyWakeupBoost.c)
 *     KiBeginThreadWait @ 0x1400BA600 (KiBeginThreadWait.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400E86A4 (KeSetSchedulingGroupRankBias.c)
 *     KeSetLegacyAffinityThread @ 0x1400F7C30 (KeSetLegacyAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400F9898 (KeCpuSetReportParkedProcessors.c)
 *     KeBoostPriorityThread @ 0x1401064BC (KeBoostPriorityThread.c)
 *     KeYieldExecution @ 0x140109BD0 (KeYieldExecution.c)
 *     KiExitThreadWait @ 0x14011B080 (KiExitThreadWait.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140121FCC (KiAbThreadUnboostCpuPriority.c)
 *     KeUpdateThreadTag @ 0x140142860 (KeUpdateThreadTag.c)
 *     KeSetAffinityThread @ 0x14015A184 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14016B534 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401962BC (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1401964C4 (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402AD014 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140013010 (PpmPerfGetCurrentFrequency.c)
 *     RtlTimelineBitmapUpdate @ 0x140013050 (RtlTimelineBitmapUpdate.c)
 *     KiEndCounterAccumulation @ 0x1402AC740 (KiEndCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x1402B0770 (KiSetVpThreadSystemWork.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  char v12; // di
  unsigned int CurrentFrequency; // edx
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int64 result; // rax
  __int64 v21; // rcx
  _QWORD *i; // rcx
  __int64 v23; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v6 = __rdtsc();
  v7 = (unsigned __int64)HIDWORD(v6) << 32;
  v8 = v6;
  v9 = v6 - *(_QWORD *)(a1 + 23488);
  v10 = v9 + *(_QWORD *)(a2 + 72);
  v11 = v9 + *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v10;
  *(_QWORD *)(a1 + 23488) = v6;
  v12 = *(_BYTE *)(a2 + 2);
  if ( v11 > 0xFFFFFFFF )
    LODWORD(v11) = -1;
  *(_DWORD *)(a2 + 80) = v11;
  if ( (v12 & 0x3E) != 0 )
  {
    if ( (v12 & 0x10) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 23488) - *(_QWORD *)(a1 + 23496);
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 124) + 23504) += v7;
      v12 &= ~0x10u;
      *(_QWORD *)(a1 + 23496) = 0LL;
    }
    if ( (v12 & 0x20) != 0 )
    {
      if ( *(_QWORD *)(a2 + 1984) )
      {
        CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL);
        if ( CurrentFrequency < 0x4B )
          v15 = CurrentFrequency / 0x19;
        else
          v15 = 3;
        v16 = *(unsigned __int8 *)(a1 + 24224) + 2LL * v15;
        *(_QWORD *)(v14 + 8 * v16) += v9;
        RtlTimelineBitmapUpdate(v14 + 192, (unsigned int)KiTimelineBitmapTime);
        if ( !KiEfficiencyClassSystem && (*(_DWORD *)(a2 + 120) & 3) == 2 )
        {
          v7 = 2 * v18;
          *(_QWORD *)(v17 + 16 * v18 + 8) += v9;
        }
        if ( *(_QWORD *)(a2 + 1928) )
        {
          *(_QWORD *)(v17 + 8 * (v19 + 16 + 2 * v18)) += v9;
          v7 = *(_QWORD *)(*(_QWORD *)(a2 + 1928) + 1984LL) + 8 * (v19 + 8 + 2 * v18);
          _InterlockedExchangeAdd64((volatile signed __int64 *)v7, v9);
        }
      }
      v12 &= ~0x20u;
    }
    if ( (v12 & 0x40) != 0 )
    {
      if ( *(_QWORD *)(a1 + 25016) )
      {
        LOBYTE(v7) = 1;
        KiSetVpThreadSystemWork(a1, v7);
      }
      v23 = *(_QWORD *)(a2 + 1520);
      if ( v23 )
        *(_BYTE *)(v23 + 64) = 0;
      v12 &= ~0x40u;
    }
    if ( (v12 & 0x3E) != 0 )
    {
      v21 = *(_QWORD *)(a2 + 104);
      if ( v21 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v21); i; i = (_QWORD *)i[51] )
          *i += v9;
      }
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0
        && (*(_QWORD *)(a2 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                             + 136LL) )
      {
        *(_QWORD *)(a1 + 23528) += v9;
      }
      if ( *(_BYTE *)(a2 + 125) )
      {
        if ( (*(_DWORD *)(a2 + 120) & 3) == 2 )
          *(_QWORD *)(a1 + 23544) += v9;
        else
          *(_QWORD *)(a1 + 23536) += v9;
      }
      if ( *(_QWORD *)(a2 + 360) )
        KiEndCounterAccumulation(a2);
    }
  }
  result = v10;
  if ( a3 )
    *a3 = v8;
  return result;
}
