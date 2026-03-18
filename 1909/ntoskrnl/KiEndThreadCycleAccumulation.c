/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x140013000
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KiIdleSchedule @ 0x140012CB0 (KiIdleSchedule.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012D9C (KiUpdateTotalCyclesCurrentThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140013E40 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140015500 (KiGroupSchedulingGenerationEnd.c)
 *     KiFastReadyThread @ 0x140015B60 (KiFastReadyThread.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x140047240 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x140047950 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x14005A030 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiReadyOutSwappedThreads @ 0x140074960 (KiReadyOutSwappedThreads.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KiSchedulerApc @ 0x140081AF0 (KiSchedulerApc.c)
 *     KiBeginThreadWait @ 0x14009A470 (KiBeginThreadWait.c)
 *     KiAbApplyWakeupBoost @ 0x1400C678C (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetLegacyAffinityThread @ 0x1400FB6D0 (KeSetLegacyAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     KeYieldExecution @ 0x140108D60 (KeYieldExecution.c)
 *     KeSetSchedulingGroupRankBias @ 0x14011531C (KeSetSchedulingGroupRankBias.c)
 *     KeBoostPriorityThread @ 0x140118790 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x1401194B0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011EED0 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140122E1C (KiAbThreadUnboostCpuPriority.c)
 *     KeUpdateThreadTag @ 0x140142DA0 (KeUpdateThreadTag.c)
 *     KeSetAffinityThread @ 0x14015A824 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14016BC24 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x140196A9C (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x140196CA4 (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x14019AD38 (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402ACD74 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402ACFE0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140013240 (PpmPerfGetCurrentFrequency.c)
 *     RtlTimelineBitmapUpdate @ 0x140013280 (RtlTimelineBitmapUpdate.c)
 *     KiEndCounterAccumulation @ 0x1402AC4A0 (KiEndCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x1402B04D0 (KiSetVpThreadSystemWork.c)
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
