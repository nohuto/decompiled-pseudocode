/*
 * XREFs of KiReadyOutSwappedThreads @ 0x1400746F0
 * Callers:
 *     KiOutSwapProcesses @ 0x140074500 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140074978 (KiInSwapProcesses.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiReadyThread @ 0x140067ED0 (KiReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x14032E1F4 (EtwTraceReadyThread.c)
 */

int __fastcall KiReadyOutSwappedThreads(_QWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v5; // rdi
  struct _KPRCB *v6; // r15
  __int64 v7; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  int result; // eax
  __int64 v12; // rdx
  __int64 CurrentThread; // rbx
  struct _KPRCB *v14; // rdi
  _DWORD *v15; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rcx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct _KPRCB *v30; // rcx
  int v31; // [rsp+50h] [rbp+8h] BYREF
  int v32; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a1;
  do
  {
    v6 = KeGetCurrentPrcb();
    v7 = (__int64)(v5 - 27);
    v5 = (_QWORD *)*v5;
    v31 = 0;
    SchedulerAssist = v6->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v23 = SchedulerAssist[5];
        SchedulerAssist[5] = v23 + 1;
        if ( v23 == -1 )
LABEL_40:
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
    {
      v21 = v6->SchedulerAssist;
      if ( v21 )
      {
        if ( v6->NestingLevel <= 1u )
        {
          v24 = v21[5] - 1;
          v21[5] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(v6);
        }
      }
      do
        KeYieldProcessorEx(&v31);
      while ( *(_QWORD *)(v7 + 64) );
      v22 = v6->SchedulerAssist;
      if ( v22 )
      {
        if ( v6->NestingLevel <= 1u )
        {
          v25 = v22[5];
          v22[5] = v25 + 1;
          if ( v25 == -1 )
            goto LABEL_40;
        }
      }
    }
    if ( *(_BYTE *)(v7 + 388) == 1 )
      *(_DWORD *)(v7 + 116) |= 2u;
    *(_BYTE *)(v7 + 388) = 7;
    *(_QWORD *)(v7 + 64) = 0LL;
    v9 = KeGetCurrentPrcb();
    v10 = v9->SchedulerAssist;
    if ( v10 )
    {
      if ( v9->NestingLevel <= 1u )
      {
        v26 = v10[5] - 1;
        v10[5] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v7, *(unsigned __int8 *)(v7 + 566), *(unsigned __int8 *)(v7 + 567), 0LL);
    result = KiReadyThread((__int64)CurrentPrcb, v7);
  }
  while ( v5 != a1 );
  if ( a2 < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v14 = KeGetCurrentPrcb();
      v32 = 0;
      v15 = v14->SchedulerAssist;
      if ( v15 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v27 = v15[5];
          v15[5] = v27 + 1;
          if ( v27 == -1 )
LABEL_52:
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        v19 = v14->SchedulerAssist;
        if ( v19 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v28 = v19[5] - 1;
            v19[5] = v28;
            if ( !v28 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        do
          KeYieldProcessorEx(&v32);
        while ( CurrentPrcb->PrcbLock );
        v20 = v14->SchedulerAssist;
        if ( v20 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v29 = v20[5];
            v20[5] = v29 + 1;
            if ( v29 == -1 )
              goto LABEL_52;
          }
        }
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v17 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v17 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = a2;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v17);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, a2) )
        goto LABEL_13;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_26;
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        goto LABEL_13;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      {
LABEL_26:
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_13:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v30);
        }
        result = a2;
        __writecr8(a2);
        return result;
      }
    }
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
    goto LABEL_26;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)result )
    {
      LOBYTE(v12) = 2;
      return KiRequestSoftwareInterrupt(CurrentPrcb, v12);
    }
  }
  return result;
}
