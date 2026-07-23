/*
 * XREFs of KiReadyOutSwappedThreads @ 0x14010B700
 * Callers:
 *     KiInSwapProcesses @ 0x14010B3C0 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14010B4D0 (KiOutSwapProcesses.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyThread @ 0x1400C5040 (KiReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x140310544 (EtwTraceReadyThread.c)
 */

int __fastcall KiReadyOutSwappedThreads(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 v4; // r15
  _QWORD *v6; // r14
  struct _KPRCB *v7; // rdi
  __int64 v8; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int v17; // eax
  int result; // eax
  __int64 CurrentThread; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KPRCB *v22; // rbx
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  _KTHREAD *NextThread; // rbx
  __int64 v28; // r8
  bool v29; // zf
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  int v32; // [rsp+50h] [rbp+8h] BYREF
  int v33; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a2;
  v6 = a1;
  do
  {
    v7 = KeGetCurrentPrcb();
    v8 = (__int64)(v6 - 27);
    v6 = (_QWORD *)*v6;
    v33 = 0;
    while ( 1 )
    {
      SchedulerAssist = v7->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v10 = SchedulerAssist[5];
          SchedulerAssist[5] = v10 + 1;
          if ( v10 == -1 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
        break;
      v11 = v7->SchedulerAssist;
      if ( v11 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v12 = v11[5] - 1;
          v11[5] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      do
        KeYieldProcessorEx(&v33, a2, a3);
      while ( *(_QWORD *)(v8 + 64) );
    }
    if ( *(_BYTE *)(v8 + 388) == 1 )
      *(_DWORD *)(v8 + 116) |= 2u;
    KiSetThreadState(v8, 7LL);
    *(_QWORD *)(v8 + 64) = 0LL;
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v17 = v16[5] - 1;
        v16[5] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v8, *(unsigned __int8 *)(v8 + 566), *(unsigned __int8 *)(v8 + 567), 0LL);
    result = KiReadyThread((__int64)CurrentPrcb, v8, v13, v14);
  }
  while ( v6 != a1 );
  if ( v4 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v22 = KeGetCurrentPrcb();
      v32 = 0;
      while ( 1 )
      {
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v24 = v23[5];
            v23[5] = v24 + 1;
            if ( v24 == -1 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v25 = v22->SchedulerAssist;
        if ( v25 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v26 = v25[5] - 1;
            v25[5] = v26;
            if ( !v26 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        do
          KeYieldProcessorEx(&v32, v20, v21);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v28 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v28 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v4;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v28);
      v29 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v4) == 0;
    }
    else
    {
      v29 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v29 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v30);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v31 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v31);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
