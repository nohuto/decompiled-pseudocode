/*
 * XREFs of KiQueueReadyThread @ 0x140014CD0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
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
 *     KeSetAffinityThread @ 0x14015A824 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14016BC24 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x140196A9C (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x140196CA4 (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x14019AD38 (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x1401CB4E0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402ACD74 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402ACFE0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140011DC0 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140011E08 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x140011E50 (KiComputeNewPriority.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140014C20 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140015294 (KiCheckForMaxOverQuotaScb.c)
 *     KiEnterDeferredReadyState @ 0x1400152B8 (KiEnterDeferredReadyState.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400154E0 (KiShouldPreemptionBeDeferred.c)
 *     KiPrcbInGroupAffinity @ 0x140015A88 (KiPrcbInGroupAffinity.c)
 *     KiComputeGroupSchedulingRank @ 0x140015AB0 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140015B38 (KiCheckMaxOverQuotaTransition.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiComputeThreadAffinity @ 0x1400FC790 (KiComputeThreadAffinity.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140115090 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140115A2C (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x140115AB4 (KiAddThreadToScbQueue.c)
 *     KiCheckThreadAffinity @ 0x14011F330 (KiCheckThreadAffinity.c)
 *     KiTryToAcquireThreadLock @ 0x14011F358 (KiTryToAcquireThreadLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14032D52C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  int v4; // r12d
  unsigned int v7; // r13d
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r14
  _QWORD *v18; // rsi
  struct _KPRCB *v19; // r15
  _DWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 result; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rsi
  int v30; // r14d
  __int16 v31; // dx
  __int64 v32; // rcx
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r10
  unsigned int v37; // r14d
  char v38; // bp
  unsigned __int64 v39; // rdx
  unsigned int v40; // esi
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  int v46; // eax
  _QWORD *v47; // rdx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  bool v53; // [rsp+78h] [rbp+10h] BYREF
  int v54; // [rsp+80h] [rbp+18h] BYREF
  __int64 v55; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 72);
  v4 = 0;
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a2 + 32) )
  {
    if ( (unsigned __int8)KiTryToAcquireThreadLock(a2, 0LL) )
    {
      v37 = *(_DWORD *)(a2 + 588);
      if ( v3 >= *(_QWORD *)(a2 + 32) )
      {
        v38 = KiComputeNewPriority(a2, 1);
        if ( !KiUpdateVPBackingThreadPriority(a2, 0LL, 0LL) )
          KiUpdateThreadPriority(0LL, a2, (_SINGLE_LIST_ENTRY *)(unsigned int)v38, 0);
        v39 = v3 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v39;
        KiTryScheduleNextForegroundBoost(a2);
        v7 = 0;
      }
      if ( !(unsigned int)KiCheckThreadAffinity(a2) )
      {
        if ( (unsigned int)KiComputeThreadAffinity() )
        {
          if ( !(unsigned int)KiPrcbInGroupAffinity(a1, a2 + 576) )
            _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
        }
      }
      v40 = *(_DWORD *)(a2 + 588);
      KiReleaseThreadLockSafe(a2);
      if ( (xmmword_140572410 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v37, v40);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v8 = *(_QWORD *)(a2 + 104);
  v55 = v8;
  v9 = v8;
  if ( v8 )
  {
    v29 = *(unsigned int *)(a1 + 216) + v8;
    if ( v29 )
    {
      v30 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v29 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v29, v9) )
          {
            if ( (*(_BYTE *)(v29 + 112) & 1) != 0 )
            {
              LOBYTE(a3) = 1;
              KiRemoveSchedulingGroupQueue(a1, v29, a3);
            }
          }
          else if ( *(_QWORD *)v29 >= *(_QWORD *)(v29 + 24) && (*(_BYTE *)(v29 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v9, v29, a1);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v9, a1, v29);
        }
        v30 += *(_DWORD *)(v29 + 116);
        v29 = *(_QWORD *)(v29 + 408);
        if ( !v29 )
          break;
        v9 = v29 - *(unsigned int *)(a1 + 216);
        v55 = v9;
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && *(char *)(a2 + 195) < 16
        && (unsigned __int8)KiShouldPreemptionBeDeferred(a2)
        && v30
        && (v31 & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
    }
  }
  v10 = 0LL;
  if ( *(char *)(a2 + 195) >= KiRebalanceMinPriority || (*(_BYTE *)(a1 + 35) & 2) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 104);
    if ( !v11 || (v32 = *(unsigned int *)(a1 + 216) + v11) == 0 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v32) )
      v10 = *(_QWORD *)(a2 + 576) & **(_QWORD **)(a1 + 192);
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) == 0 && !v10 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v12 = *(_QWORD *)(a2 + 104);
    if ( v12 )
      v12 += *(unsigned int *)(a1 + 216);
    v13 = *(_QWORD *)(a1 + 25016);
    if ( v13 )
      *(_BYTE *)(v13 + 16) = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v53 = 0;
    if ( v12
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v12, a3, 0, &v53) )
    {
      result = KiAddThreadToScbQueue(a1, v36, a2, v7);
LABEL_26:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(SchedulerAssist[5] - 1);
        SchedulerAssist[5] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
      }
      return result;
    }
    v14 = *(_DWORD *)(a2 + 120);
    v15 = *(char *)(a2 + 195);
    if ( (v14 & 0x400000) != 0 )
    {
      _InterlockedOr(*(volatile signed __int32 **)(a2 + 1520), 0x40000u);
      v14 = *(_DWORD *)(a2 + 120);
    }
    v16 = *(_QWORD *)(a1 + 24896);
    if ( (v14 & 0x2000) != 0 && v16 && !v53 && (v16 & *(_QWORD *)(a2 + 576)) == v16 )
    {
      v17 = *(_QWORD *)(a1 + 24904);
      v18 = (_QWORD *)(v17 + 16 * (v15 + 1));
      v19 = KeGetCurrentPrcb();
      v54 = 0;
      v20 = v19->SchedulerAssist;
      if ( v20 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v49 = v20[5];
          v20[5] = v49 + 1;
          if ( v49 == -1 )
LABEL_92:
            KiRemoveSystemWorkPriorityKick(v19, v10);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
      {
        v41 = v19->SchedulerAssist;
        if ( v41 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v50 = v41[5] - 1;
            v41[5] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick(v19, v10);
          }
        }
        do
          KeYieldProcessorEx(&v54);
        while ( *(_QWORD *)v17 );
        v42 = v19->SchedulerAssist;
        if ( v42 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v51 = v42[5];
            v42[5] = v51 + 1;
            if ( v51 == -1 )
              goto LABEL_92;
          }
        }
      }
      v21 = (_QWORD *)(a2 + 216);
      if ( v7 )
      {
        v22 = *v18;
        if ( *(_QWORD **)(*v18 + 8LL) == v18 )
        {
          *v21 = v22;
          *(_QWORD *)(a2 + 224) = v18;
          *(_QWORD *)(v22 + 8) = v21;
          *v18 = v21;
          _bittestandreset((signed __int32 *)(a1 + 22812), v15);
LABEL_25:
          *(_DWORD *)(v17 + 8) |= 1 << v15;
          *(_DWORD *)(a2 + 536) |= 0x80000000;
          ++*(_DWORD *)(v17 + 608);
          result = *(unsigned int *)(a2 + 84);
          *(_DWORD *)(a2 + 2032) = result;
          *(_QWORD *)(v17 + 616) += result;
          _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          if ( v25 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              result = (unsigned int)(v25[5] - 1);
              v25[5] = result;
              if ( !(_DWORD)result )
                result = KiRemoveSystemWorkPriorityKick(v24, v25);
            }
          }
          goto LABEL_26;
        }
      }
      else
      {
        v28 = (_QWORD *)v18[1];
        if ( (_QWORD *)*v28 == v18 )
        {
          *v21 = v18;
          *(_QWORD *)(a2 + 224) = v28;
          *v28 = v21;
          v18[1] = v21;
          goto LABEL_25;
        }
      }
LABEL_102:
      __fastfail(3u);
    }
    v43 = (_QWORD *)(a2 + 216);
    v44 = (_QWORD *)(a1 + 16 * (v15 + 1432));
    if ( v7 )
    {
      v45 = *v44;
      if ( *(_QWORD **)(*v44 + 8LL) != v44 )
        goto LABEL_102;
      *v43 = v45;
      *(_QWORD *)(a2 + 224) = v44;
      *(_QWORD *)(v45 + 8) = v43;
      *v44 = v43;
      _bittestandset((signed __int32 *)(a1 + 22812), v15);
    }
    else
    {
      v47 = (_QWORD *)v44[1];
      if ( (_QWORD *)*v47 != v44 )
        goto LABEL_102;
      *v43 = v44;
      *(_QWORD *)(a2 + 224) = v47;
      *v47 = v43;
      v44[1] = v43;
    }
    v46 = *(_DWORD *)(a1 + 22808);
    ++*(_DWORD *)(a1 + 23476);
    *(_DWORD *)(a1 + 22808) = v46 | (1 << v15);
    result = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 2032) = result;
    *(_QWORD *)(a1 + 23480) += result;
    goto LABEL_26;
  }
  if ( *(_QWORD *)(a1 + 16) )
    v4 = 1;
  KiEnterDeferredReadyState(a2, v10);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v52 = v34[5] - 1;
      v34[5] = v52;
      if ( !v52 )
        KiRemoveSystemWorkPriorityKick(v33, v34);
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v7;
  result = KiDeferredReadyThread(a1, a2);
  if ( !v4 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) != result )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v35) = 2;
        return KiRequestSoftwareInterrupt(a1, v35);
      }
    }
  }
  return result;
}
