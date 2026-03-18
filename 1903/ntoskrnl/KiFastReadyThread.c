/*
 * XREFs of KiFastReadyThread @ 0x14001577C
 * Callers:
 *     KeReadyThread @ 0x14001C19C (KeReadyThread.c)
 *     KiInSwapKernelStacks @ 0x1400E31F8 (KiInSwapKernelStacks.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x140015188 (KiEnterDeferredReadyState.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x14032E1F4 (EtwTraceReadyThread.c)
 */

char __fastcall KiFastReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rcx
  char result; // al
  __int64 v9; // rdx
  __int64 CurrentThread; // rsi
  bool v11; // zf
  __int64 v12; // rdx
  struct _KPRCB *v13; // rbx
  _DWORD *v14; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  struct _KPRCB *v25; // rcx
  int v26; // [rsp+50h] [rbp+8h] BYREF
  int v27; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 567);
    LOBYTE(a2) = *(_BYTE *)(a1 + 566);
    EtwTraceReadyThread(a1, a2, a3, 0LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[5];
        SchedulerAssist[5] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v20[5] - 1;
        v20[5] = v21;
        if ( !v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    do
      KeYieldProcessorEx(&v26);
    while ( *(_QWORD *)(a1 + 64) );
  }
  KiEnterDeferredReadyState(a1);
  KiReleaseThreadLockSafe(v7);
  result = KiDeferredReadyThread(CurrentPrcb, a1);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        LOBYTE(v9) = 2;
        return KiRequestSoftwareInterrupt(CurrentPrcb, v9);
      }
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v13 = KeGetCurrentPrcb();
      v27 = 0;
      while ( 1 )
      {
        v14 = v13->SchedulerAssist;
        if ( v14 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v22 = v14[5];
            v14[5] = v22 + 1;
            if ( v22 == -1 )
              KiRemoveSystemWorkPriorityKick(v13, v12);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v23 = v13->SchedulerAssist;
        if ( v23 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v24 = v23[5] - 1;
            v23[5] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(v13, v12);
          }
        }
        do
          KeYieldProcessorEx(&v27);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v16);
      LOBYTE(v17) = CurrentIrql;
      v11 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) == 0;
    }
    else
    {
      v11 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v11 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v18, v9);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v25, v9);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
