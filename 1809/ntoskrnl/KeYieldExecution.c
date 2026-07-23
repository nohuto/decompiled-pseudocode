/*
 * XREFs of KeYieldExecution @ 0x1400D6650
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x1400D6630 (NtYieldExecution.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400D0EC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1400D0F10 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  char v1; // di
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KPRCB *v8; // r14
  unsigned int v9; // ebx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v11; // r14
  _DWORD *v12; // rcx
  _QWORD *p_Lock; // r14
  __int64 v14; // r8
  _KTHREAD *v15; // rdx
  __int64 CycleTime; // rdx
  unsigned __int64 v17; // rcx
  char v18; // di
  __int64 v19; // r8
  __int64 v20; // r8
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  struct _KPRCB *v34; // rcx
  int v35; // [rsp+50h] [rbp+8h] BYREF
  int v36; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
    return 1073741860LL;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch((__int64)CurrentThread, 0);
    v8 = KeGetCurrentPrcb();
    v9 = 0;
    v35 = 0;
    SchedulerAssist = v8->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v25 = SchedulerAssist[5];
        SchedulerAssist[5] = v25 + 1;
        if ( v25 == -1 )
LABEL_38:
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v26 = v8->SchedulerAssist;
      if ( v26 )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v27 = v26[5] - 1;
          v26[5] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(v8);
        }
      }
      do
        KeYieldProcessorEx(&v35, v6, v7);
      while ( CurrentThread->ThreadLock );
      v28 = v8->SchedulerAssist;
      if ( v28 )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v29 = v28[5];
          v28[5] = v29 + 1;
          if ( v29 == -1 )
            goto LABEL_38;
        }
      }
    }
    v11 = KeGetCurrentPrcb();
    v36 = 0;
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v30 = v12[5];
        v12[5] = v30 + 1;
        if ( v30 == -1 )
LABEL_50:
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v23 = v11->SchedulerAssist;
      if ( v23 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v31 = v23[5] - 1;
          v23[5] = v31;
          if ( !v31 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
      do
        KeYieldProcessorEx(&v36, v6, v7);
      while ( CurrentPrcb->PrcbLock );
      v24 = v11->SchedulerAssist;
      if ( v24 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v32 = v24[5];
          v24[5] = v32 + 1;
          if ( v32 == -1 )
            goto LABEL_50;
        }
      }
    }
    p_Lock = &CurrentPrcb->NextThread->Header.Lock;
    if ( p_Lock )
      goto LABEL_67;
    v14 = 1LL;
    v15 = 0LL;
    if ( (v1 & 1) != 0 )
    {
      v15 = CurrentThread;
      v14 = 3LL;
    }
    p_Lock = KiSelectReadyThreadEx(CurrentPrcb, v15, v14);
    if ( p_Lock )
    {
LABEL_67:
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)CurrentThread, 0LL);
        _enable();
      }
      v17 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      CurrentThread->QuantumTarget = v17;
      v18 = KiComputeNewPriority((__int64)CurrentThread, 1);
      if ( !KiUpdateVPBackingThreadPriority((__int64)CurrentThread, 0LL, 0) )
        KiUpdateThreadPriority(0LL, (__int64)CurrentThread, (_SINGLE_LIST_ENTRY *)(unsigned int)v18, 0LL);
      KiReleaseThreadLockSafe(CurrentThread);
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)CurrentThread, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(CurrentPrcb, p_Lock, 2LL, 2LL);
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64)CurrentThread, v19);
      LOBYTE(v20) = 1;
      KiSwapContext(CurrentThread, p_Lock, v20);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v33 = v22[5] - 1;
          v22[5] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      KiReleaseThreadLockSafe(CurrentThread);
      v9 = 1073741860;
    }
  }
  else
  {
    v9 = 1073741860;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v34 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v34);
  }
  __writecr8(CurrentIrql);
  return v9;
}
