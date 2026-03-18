/*
 * XREFs of KiBeginThreadWait @ 0x1400BA600
 * Callers:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x1400BA4A0 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14011AAE0 (KiWaitForAllObjects.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiTestForAlertPending @ 0x1400BA8F8 (KiTestForAlertPending.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  char v13; // bp
  unsigned int v14; // edi
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  struct _KPRCB *v18; // rbx
  __int64 CurrentThread; // rsi
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v23; // rbp
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  struct _KPRCB *v32; // rcx
  int v33; // eax
  int v34; // eax
  _KTHREAD *NextThread; // rbp
  __int64 v36; // r8
  struct _KPRCB *v37; // rcx
  struct _KPRCB *v38; // rcx
  int v39; // [rsp+68h] [rbp+10h] BYREF
  int v40; // [rsp+70h] [rbp+18h]
  int v41; // [rsp+78h] [rbp+20h] BYREF

  v40 = a3;
  v4 = *(_BYTE *)(a1 + 390);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = a2;
    if ( a4 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    CurrentPrcb = KeGetCurrentPrcb();
    v39 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = SchedulerAssist[5];
        SchedulerAssist[5] = v29 + 1;
        if ( v29 == -1 )
LABEL_46:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v30 = v20[5] - 1;
          v20[5] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v39);
      while ( *(_QWORD *)(a1 + 64) );
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v31 = v21[5];
          v21[5] = v31 + 1;
          if ( v31 == -1 )
            goto LABEL_46;
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    KiReleaseThreadLockSafe(a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v32);
    }
    __writecr8(1uLL);
    KiDeliverApc(0, 0, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    *(_BYTE *)(a1 + 390) = 0;
  }
  v10 = KiTestForAlertPending(a1, a4, a2, 1LL);
  v13 = v40;
  v14 = v10;
  if ( v10 )
  {
    KiReleaseThreadLockSafe(v11);
    v18 = KeGetCurrentPrcb();
    if ( v4 >= 2u )
    {
      if ( v18->NextThread && !v18->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v18, 2);
      return v14;
    }
    CurrentThread = (__int64)v18->CurrentThread;
    if ( v18->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v18->CurrentThread, 0);
      v23 = KeGetCurrentPrcb();
      v41 = 0;
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v34 = v24[5];
          v24[5] = v34 + 1;
          if ( v34 == -1 )
LABEL_35:
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
      {
        v25 = v23->SchedulerAssist;
        if ( v25 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v28 = v25[5] - 1;
            v25[5] = v28;
            if ( !v28 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        do
          KeYieldProcessorEx(&v41);
        while ( v18->PrcbLock );
        v26 = v23->SchedulerAssist;
        if ( v26 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v27 = v26[5];
            v26[5] = v27 + 1;
            if ( v27 == -1 )
              goto LABEL_35;
          }
        }
      }
      NextThread = v18->NextThread;
      v18->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v18, CurrentThread, 0LL);
      _enable();
      v18->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v36 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v36 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v4;
      KiQueueReadyThread((__int64)v18, CurrentThread, v36);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v4) )
        goto LABEL_13;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_43;
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        goto LABEL_13;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      {
LABEL_43:
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_13:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v38);
        }
        __writecr8(v4);
        return v14;
      }
    }
    v37 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v37);
    goto LABEL_43;
  }
  *(_BYTE *)(a1 + 388) = 5;
  *(_BYTE *)(a1 + 643) = v13;
  *(_QWORD *)(a1 + 64) = 0LL;
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 && v15->NestingLevel <= (unsigned __int8)v12 )
  {
    v33 = v16[5] - v12;
    v16[5] = v33;
    if ( !v33 )
      KiRemoveSystemWorkPriorityKick(v15);
  }
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  return 0LL;
}
