/*
 * XREFs of KeYieldExecution @ 0x140109BD0
 * Callers:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x140109BB0 (NtYieldExecution.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x14000FB30 (KiUpdateThreadPriority.c)
 *     KiSelectReadyThreadEx @ 0x14000FF70 (KiSelectReadyThreadEx.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140011BD8 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x140011C20 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012B6C (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  char v1; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *v6; // rbx
  unsigned int v7; // r14d
  struct _KPRCB *v8; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  struct _KPRCB *v13; // rsi
  _DWORD *v14; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 NextThread; // rsi
  int v19; // ebp
  _KTHREAD *v20; // rdx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  int v23; // eax
  __int64 CycleTime; // rcx
  unsigned __int64 v25; // rdx
  char v26; // bp
  __int64 v27; // r8
  bool IsThreadRankNonZero; // al
  char v29; // cl
  __int64 v30; // rdx
  __int64 v31; // r8
  struct _KPRCB *v32; // rcx
  int v33; // [rsp+50h] [rbp+8h] BYREF
  int v34; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->ReadySummary && !CurrentPrcb->SharedReadyQueue->ReadySummary )
    return 1073741860LL;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = KeGetCurrentPrcb();
  if ( v6->ReadySummary || v6->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch((__int64)CurrentThread, 0);
    v8 = KeGetCurrentPrcb();
    v7 = 0;
    v33 = 0;
    while ( 1 )
    {
      SchedulerAssist = v8->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v10 = SchedulerAssist[5];
          SchedulerAssist[5] = v10 + 1;
          if ( v10 == -1 )
            KiRemoveSystemWorkPriorityKick(v8);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      v11 = v8->SchedulerAssist;
      if ( v11 )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v12 = v11[5] - 1;
          v11[5] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(v8);
        }
      }
      do
        KeYieldProcessorEx(&v33);
      while ( CurrentThread->ThreadLock );
    }
    v13 = KeGetCurrentPrcb();
    v34 = 0;
    while ( 1 )
    {
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v15 = v14[5];
          v14[5] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&v6->PrcbLock, 0LL) )
        break;
      v16 = v13->SchedulerAssist;
      if ( v16 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v17 = v16[5] - 1;
          v16[5] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      do
        KeYieldProcessorEx(&v34);
      while ( v6->PrcbLock );
    }
    NextThread = (__int64)v6->NextThread;
    if ( NextThread )
      goto LABEL_71;
    v19 = v1 & 1;
    v20 = 0LL;
    if ( v19 )
      v20 = CurrentThread;
    NextThread = KiSelectReadyThreadEx(v6, v20, 2 * (unsigned __int8)v19 + 1);
    if ( NextThread )
    {
LABEL_71:
      if ( v6->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)v6, (__int64)CurrentThread, 0LL);
        _enable();
      }
      v25 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      CurrentThread->QuantumTarget = v25;
      v26 = KiComputeNewPriority((__int64)CurrentThread, 1);
      if ( !KiUpdateVPBackingThreadPriority((__int64)CurrentThread, 0LL, 0LL) )
        KiUpdateThreadPriority(0LL, (__int64)CurrentThread, (_SINGLE_LIST_ENTRY *)(unsigned int)v26, 0);
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      v6->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v6, (__int64)CurrentThread, 0LL);
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v6), v29 = 1, !IsThreadRankNonZero) )
      {
        v29 = *(_BYTE *)(NextThread + 195);
      }
      *v6->PriorityState = v29;
      if ( v6->SchedulerAssist )
      {
        v30 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != v6->IdleThread )
          v30 = (unsigned int)v29;
        KiSetSchedulerAssistPriority(v6->SchedulerAssist, v30, 0LL);
      }
      v6->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread((__int64)v6, (__int64)CurrentThread, v27);
      LOBYTE(v31) = 1;
      KiSwapContext(CurrentThread, NextThread, v31);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v23 = v22[5] - 1;
          v22[5] = v23;
          if ( !v23 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      v7 = 1073741860;
    }
  }
  else
  {
    v7 = 1073741860;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v32 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v32);
  }
  __writecr8(CurrentIrql);
  return v7;
}
