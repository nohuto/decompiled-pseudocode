/*
 * XREFs of KiQueueReadyThread @ 0x1400D23F0
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
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
 *     KiAbForceProcessLockEntry @ 0x140166280 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14016B3B0 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C794 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14018C98C (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x1401905F4 (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x1401C4240 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x14028E134 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140296A2C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296C70 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400D0D74 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400D0EC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1400D0F10 (KiComputeNewPriority.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400D2FD4 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeGroupSchedulingRank @ 0x1400D3720 (KiComputeGroupSchedulingRank.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400D3850 (KiShouldPreemptionBeDeferred.c)
 *     KiPrcbInGroupAffinity @ 0x1400D57B4 (KiPrcbInGroupAffinity.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiCheckThreadAffinity @ 0x1401151C8 (KiCheckThreadAffinity.c)
 *     KiTryToAcquireThreadLock @ 0x1401151F0 (KiTryToAcquireThreadLock.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140116A70 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140116F58 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x140117004 (KiAddThreadToScbQueue.c)
 *     KiCheckMaxOverQuotaTransition @ 0x14012AF0C (KiCheckMaxOverQuotaTransition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  char v8; // bp
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rbx
  int v15; // r14d
  __int16 v16; // dx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r10
  _BYTE *SchedulerAssist; // rax
  __int64 v22; // r10
  __int64 result; // rax
  int v24; // eax
  __int64 v25; // rbp
  unsigned __int64 SharedReadyQueueMask; // rcx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r14
  struct _KPRCB *v28; // rbx
  _LIST_ENTRY *v29; // r15
  _DWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  struct _LIST_ENTRY *v34; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  struct _LIST_ENTRY *v39; // rcx
  _LIST_ENTRY *v40; // rax
  struct _LIST_ENTRY *v41; // rdx
  struct _LIST_ENTRY *v42; // rdx
  unsigned int ReadySummary; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v45; // rdx
  _KTHREAD *NextThread; // rbx
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r9
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  int v51; // eax
  bool v52; // [rsp+78h] [rbp+10h] BYREF
  int v53; // [rsp+80h] [rbp+18h] BYREF
  __int64 v54; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 72);
  v6 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a2 + 32) )
  {
    if ( (unsigned __int8)KiTryToAcquireThreadLock(a2, 0LL) )
    {
      v7 = *(_DWORD *)(a2 + 588);
      if ( v3 >= *(_QWORD *)(a2 + 32) )
      {
        v8 = KiComputeNewPriority(a2, 1);
        if ( !KiUpdateVPBackingThreadPriority(a2, 0LL, 0) )
          KiUpdateThreadPriority(0LL, a2, (_SINGLE_LIST_ENTRY *)(unsigned int)v8, 0LL);
        v9 = v3 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v9;
        KiTryScheduleNextForegroundBoost(a2);
        v6 = 0;
      }
      if ( !(unsigned int)KiCheckThreadAffinity(a2)
        && (unsigned int)KiComputeThreadAffinity(v10)
        && !(unsigned int)KiPrcbInGroupAffinity(a1, a2 + 576) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      }
      v11 = *(_DWORD *)(a2 + 588);
      KiReleaseThreadLockSafe(a2);
      if ( (xmmword_140542350 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v7, v11);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v12 = *(_QWORD *)(a2 + 104);
  v54 = v12;
  v13 = v12;
  if ( v12 )
  {
    v14 = a1->ScbOffset + v12;
    if ( v14 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v14 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v14, v13) )
          {
            if ( (*(_BYTE *)(v14 + 112) & 1) != 0 )
            {
              LOBYTE(a3) = 1;
              KiRemoveSchedulingGroupQueue(a1, v14, a3);
            }
          }
          else if ( *(_QWORD *)v14 >= *(_QWORD *)(v14 + 24) && (*(_BYTE *)(v14 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v13, v14, a1);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v13, a1, v14);
        }
        v15 += *(_DWORD *)(v14 + 116);
        v14 = *(_QWORD *)(v14 + 408);
        if ( !v14 )
          break;
        v13 = v14 - a1->ScbOffset;
        v54 = v13;
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && *(char *)(a2 + 195) < 16
        && (unsigned __int8)KiShouldPreemptionBeDeferred(a2)
        && v15
        && (v16 & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
    }
  }
  v17 = 0LL;
  if ( *(char *)(a2 + 195) >= KiRebalanceMinPriority || (a1->IdleState & 2) != 0 )
  {
    v18 = *(_QWORD *)(a2 + 104);
    if ( !v18 || (v19 = a1->ScbOffset + v18) == 0 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v19, 0LL) )
      v17 = *(_QWORD *)(a2 + 576) & a1->ParentNode->IdleNonParkedCpuSet;
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) == 0 && !v17 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v20 = *(_QWORD *)(a2 + 104);
    if ( v20 )
      v20 += a1->ScbOffset;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v52 = 0;
    if ( v20
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v20, a3, 0, &v52) )
    {
      result = KiAddThreadToScbQueue(a1, v22, a2, v6);
LABEL_87:
      _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v45 = CurrentPrcb->SchedulerAssist;
      if ( v45 && CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(v45[5] - 1);
        v45[5] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      return result;
    }
    v24 = *(_DWORD *)(a2 + 120);
    v25 = *(char *)(a2 + 195);
    if ( (v24 & 0x400000) != 0 )
    {
      _InterlockedOr(*(volatile signed __int32 **)(a2 + 1512), 0x40000u);
      v24 = *(_DWORD *)(a2 + 120);
    }
    SharedReadyQueueMask = a1->SharedReadyQueueMask;
    if ( (v24 & 0x2000) != 0
      && SharedReadyQueueMask
      && (SharedReadyQueueMask & *(_QWORD *)(a2 + 576)) == SharedReadyQueueMask
      && !v52 )
    {
      SharedReadyQueue = a1->SharedReadyQueue;
      v28 = KeGetCurrentPrcb();
      v29 = &SharedReadyQueue->ReadyListHead[v25];
      v53 = 0;
      while ( 1 )
      {
        v30 = v28->SchedulerAssist;
        if ( v30 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v31 = v30[5];
            v30[5] = v31 + 1;
            if ( v31 == -1 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
          break;
        v32 = v28->SchedulerAssist;
        if ( v32 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v33 = v32[5] - 1;
            v32[5] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        do
          KeYieldProcessorEx(&v53, v17, a3);
        while ( SharedReadyQueue->Lock );
      }
      v34 = (struct _LIST_ENTRY *)(a2 + 216);
      if ( v6 )
      {
        Flink = v29->Flink;
        if ( v29->Flink->Blink == v29 )
        {
          v34->Flink = Flink;
          *(_QWORD *)(a2 + 224) = v29;
          Flink->Blink = v34;
          v29->Flink = v34;
          _bittestandreset(&a1->AffinitizedSelectionMask, v25);
LABEL_76:
          SharedReadyQueue->ReadySummary |= 1 << v25;
          *(_DWORD *)(a2 + 536) |= 0x80000000;
          ++SharedReadyQueue->ReadyThreadCount;
          result = *(unsigned int *)(a2 + 84);
          *(_DWORD *)(a2 + 2016) = result;
          SharedReadyQueue->ReadyQueueExpectedRunTime += result;
          _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          if ( v38 )
          {
            if ( v37->NestingLevel <= 1u )
            {
              result = (unsigned int)(v38[5] - 1);
              v38[5] = result;
              if ( !(_DWORD)result )
                result = KiRemoveSystemWorkPriorityKick(v37);
            }
          }
          goto LABEL_87;
        }
      }
      else
      {
        Blink = v29->Blink;
        if ( Blink->Flink == v29 )
        {
          v34->Flink = v29;
          *(_QWORD *)(a2 + 224) = Blink;
          Blink->Flink = v34;
          v29->Blink = v34;
          goto LABEL_76;
        }
      }
LABEL_84:
      __fastfail(3u);
    }
    v39 = (struct _LIST_ENTRY *)(a2 + 216);
    v40 = &a1->DispatcherReadyListHead[v25];
    if ( v6 )
    {
      v41 = v40->Flink;
      if ( v40->Flink->Blink != v40 )
        goto LABEL_84;
      v39->Flink = v41;
      *(_QWORD *)(a2 + 224) = v40;
      v41->Blink = v39;
      v40->Flink = v39;
      _bittestandset(&a1->AffinitizedSelectionMask, v25);
    }
    else
    {
      v42 = v40->Blink;
      if ( v42->Flink != v40 )
        goto LABEL_84;
      v39->Flink = v40;
      *(_QWORD *)(a2 + 224) = v42;
      v42->Flink = v39;
      v40->Blink = v39;
    }
    ReadySummary = a1->ReadySummary;
    ++a1->ReadyThreadCount;
    a1->ReadySummary = ReadySummary | (1 << v25);
    result = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 2016) = result;
    a1->ReadyQueueExpectedRunTime += result;
    goto LABEL_87;
  }
  NextThread = a1->NextThread;
  if ( *(_BYTE *)(a2 + 388) == 1 )
    *(_DWORD *)(a2 + 116) |= 2u;
  KiSetThreadState(a2, 7LL);
  _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, v47);
  v49 = KeGetCurrentPrcb();
  v50 = v49->SchedulerAssist;
  if ( v50 )
  {
    if ( v49->NestingLevel <= 1u )
    {
      v51 = v50[5] - 1;
      v50[5] = v51;
      if ( !v51 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v6;
  result = KiDeferredReadyThread((__int64)a1, a2, v47, v48);
  if ( !NextThread )
  {
    result = (__int64)a1->IdleThread;
    if ( a1->CurrentThread != (_KTHREAD *)result )
    {
      if ( a1->NextThread )
        return KiRequestSoftwareInterrupt(a1, 2);
    }
  }
  return result;
}
