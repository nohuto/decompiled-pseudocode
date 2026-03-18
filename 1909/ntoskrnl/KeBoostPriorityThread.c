/*
 * XREFs of KeBoostPriorityThread @ 0x140118790
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x1406C04C8 (ExpCreateWorkerThread.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012D9C (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiSetThreadState @ 0x140135CAC (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14032DB88 (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, int a2)
{
  void *v2; // rax
  int v5; // r15d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // r14
  _DWORD *SchedulerAssist; // rcx
  int v10; // r12d
  int v11; // eax
  __int64 updated; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbp
  _DWORD *v15; // rcx
  _KTHREAD *NextThread; // rsi
  __int64 v17; // r8
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  struct _KPRCB *v21; // rsi
  _DWORD *v22; // rcx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx
  _QWORD *v31[9]; // [rsp+30h] [rbp-48h] BYREF
  int v32; // [rsp+80h] [rbp+8h] BYREF
  int v33; // [rsp+90h] [rbp+18h] BYREF
  int v34; // [rsp+98h] [rbp+20h]

  v2 = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v2;
  v31[0] = 0LL;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v32 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v15[5] - 1;
        v15[5] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v32);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(char *)(a1 + 195);
  v34 = v10;
  if ( v10 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    v11 = a2 + *(char *)(a1 + 563);
    if ( v11 > v10 )
    {
      v5 = a2 + *(char *)(a1 + 563);
      if ( v11 >= 16 )
        v5 = 15;
      if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        updated = *(_QWORD *)(a1 + 72);
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
        _enable();
      }
      v13 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
      if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
      *(_QWORD *)(a1 + 32) = v13;
      KiSetPriorityThread((_BYTE *)a1, (__int64 *)v31, v5);
    }
  }
  KiReleaseThreadLockSafe(a1);
  LOBYTE(v2) = KiReadyDeferredReadyList((__int64)CurrentPrcb, v31);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v2) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v2 )
        LOBYTE(v2) = KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    goto LABEL_21;
  }
  v14 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v21 = KeGetCurrentPrcb();
    v33 = 0;
    v22 = v21->SchedulerAssist;
    if ( v22 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v23 = v22[5];
        v22[5] = v23 + 1;
        if ( v23 == -1 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v24 = v21->SchedulerAssist;
      if ( v24 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v25 = v24[5] - 1;
          v24[5] = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      do
        KeYieldProcessorEx(&v33);
      while ( CurrentPrcb->PrcbLock );
      v26 = v21->SchedulerAssist;
      if ( v26 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v27 = v26[5];
          v26[5] = v27 + 1;
          if ( v27 == -1 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v14, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    v10 = v34;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    KiSetThreadState(NextThread, 2LL);
    *(_BYTE *)(v14 + 643) = 32;
    *(_BYTE *)(v14 + 390) = CurrentIrql;
    KiQueueReadyThread((__int64)CurrentPrcb, v14, v17);
    LOBYTE(v18) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(v14, NextThread, v18) )
      goto LABEL_19;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      goto LABEL_34;
    goto LABEL_63;
  }
  if ( (*(_DWORD *)(v14 + 116) & 0x40) == 0 )
    goto LABEL_19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
LABEL_63:
    if ( KeGetCurrentIrql() >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v28);
    }
  }
LABEL_34:
  __writecr8(1uLL);
  *(_DWORD *)(v14 + 116) &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_19:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v29 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v29);
  }
  LOBYTE(v2) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v5 )
    LOBYTE(v2) = EtwTracePriority(a1, 1328, v10, v5, 0LL);
  return (char)v2;
}
