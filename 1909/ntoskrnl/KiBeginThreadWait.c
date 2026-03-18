/*
 * XREFs of KiBeginThreadWait @ 0x14009A470
 * Callers:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x14009A310 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140118F10 (KiWaitForAllObjects.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiTestForAlertPending @ 0x14009A768 (KiTestForAlertPending.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
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
  __int64 v18; // rdx
  struct _KPRCB *v19; // rbx
  __int64 CurrentThread; // rsi
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v24; // rbp
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  struct _KPRCB *v33; // rcx
  int v34; // eax
  int v35; // eax
  _KTHREAD *NextThread; // rbp
  __int64 v37; // r8
  struct _KPRCB *v38; // rcx
  struct _KPRCB *v39; // rcx
  int v40; // [rsp+68h] [rbp+10h] BYREF
  int v41; // [rsp+70h] [rbp+18h]
  int v42; // [rsp+78h] [rbp+20h] BYREF

  v41 = a3;
  v4 = *(_BYTE *)(a1 + 390);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = a2;
    if ( a4 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    CurrentPrcb = KeGetCurrentPrcb();
    v40 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = SchedulerAssist[5];
        SchedulerAssist[5] = v30 + 1;
        if ( v30 == -1 )
LABEL_46:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v31 = v21[5] - 1;
          v21[5] = v31;
          if ( !v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v40);
      while ( *(_QWORD *)(a1 + 64) );
      v22 = CurrentPrcb->SchedulerAssist;
      if ( v22 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = v22[5];
          v22[5] = v32 + 1;
          if ( v32 == -1 )
            goto LABEL_46;
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    KiReleaseThreadLockSafe(a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v33 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v33);
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
  v13 = v41;
  v14 = v10;
  if ( v10 )
  {
    KiReleaseThreadLockSafe(v11);
    v19 = KeGetCurrentPrcb();
    if ( v4 >= 2u )
    {
      if ( v19->NextThread && !v19->DpcRoutineActive )
      {
        LOBYTE(v18) = 2;
        KiRequestSoftwareInterrupt(v19, v18);
      }
      return v14;
    }
    CurrentThread = (__int64)v19->CurrentThread;
    if ( v19->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v19->CurrentThread, 0);
      v24 = KeGetCurrentPrcb();
      v42 = 0;
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v35 = v25[5];
          v25[5] = v35 + 1;
          if ( v35 == -1 )
LABEL_35:
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v19->PrcbLock, 0LL) )
      {
        v26 = v24->SchedulerAssist;
        if ( v26 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v29 = v26[5] - 1;
            v26[5] = v29;
            if ( !v29 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        do
          KeYieldProcessorEx(&v42);
        while ( v19->PrcbLock );
        v27 = v24->SchedulerAssist;
        if ( v27 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v28 = v27[5];
            v27[5] = v28 + 1;
            if ( v28 == -1 )
              goto LABEL_35;
          }
        }
      }
      NextThread = v19->NextThread;
      v19->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v19, CurrentThread, 0LL);
      _enable();
      v19->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v37 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v37 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v4;
      KiQueueReadyThread((__int64)v19, CurrentThread, v37);
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
          v39 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v39);
        }
        __writecr8(v4);
        return v14;
      }
    }
    v38 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v38);
    goto LABEL_43;
  }
  *(_BYTE *)(a1 + 388) = 5;
  *(_BYTE *)(a1 + 643) = v13;
  *(_QWORD *)(a1 + 64) = 0LL;
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 && v15->NestingLevel <= (unsigned __int8)v12 )
  {
    v34 = v16[5] - v12;
    v16[5] = v34;
    if ( !v34 )
      KiRemoveSystemWorkPriorityKick(v15);
  }
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  return 0LL;
}
