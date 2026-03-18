/*
 * XREFs of KeSetBasePriorityThread @ 0x140012340
 * Callers:
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x14075FE90 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900900 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiComputeNewPriority @ 0x140011E50 (KiComputeNewPriority.c)
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012D9C (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14010C990 (KiPriQueueThreadPriorityChanged.c)
 *     KiAbQueueAutoBoostDpc @ 0x14013062C (KiAbQueueAutoBoostDpc.c)
 *     KiSetThreadState @ 0x140135CAC (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14032DB88 (EtwTracePriority.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // rdi
  __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *SchedulerAssist; // rcx
  int BasePriority; // r12d
  LONG v11; // ebp
  char Saturation; // al
  char v13; // cl
  int v14; // eax
  int v15; // edi
  int v16; // eax
  struct _KPRCB *v17; // rcx
  char v18; // al
  char PriorityDecrement; // al
  _DISPATCHER_HEADER *volatile Queue; // rcx
  __int64 v21; // rdx
  _KTHREAD *v22; // rdi
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int8 v26; // r8
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  __int64 v29; // rdx
  struct _KPRCB *v30; // r14
  _DWORD *v31; // rcx
  _KTHREAD *NextThread; // r14
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  struct _KPRCB *v44; // rcx
  struct _KPRCB *v45; // rcx
  int v46; // [rsp+30h] [rbp-48h] BYREF
  __int64 v47; // [rsp+38h] [rbp-40h] BYREF
  int v48; // [rsp+80h] [rbp+8h]
  int v49; // [rsp+90h] [rbp+18h] BYREF
  int v50; // [rsp+98h] [rbp+20h] BYREF

  Process = Thread->Process;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v5 = 0LL;
  v47 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v50 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v38 = SchedulerAssist[5];
      SchedulerAssist[5] = v38 + 1;
      if ( v38 == -1 )
LABEL_79:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v5);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v33 = CurrentPrcb->SchedulerAssist;
    if ( v33 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v39 = v33[5] - 1;
        v33[5] = v39;
        if ( !v39 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v5);
      }
    }
    do
      KeYieldProcessorEx(&v50);
    while ( Thread->ThreadLock );
    v34 = CurrentPrcb->SchedulerAssist;
    if ( v34 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v40 = v34[5];
        v34[5] = v40 + 1;
        if ( v40 == -1 )
          goto LABEL_79;
      }
    }
  }
  BasePriority = Thread->BasePriority;
  v11 = BasePriority - Process->BasePriority;
  Saturation = Thread->Saturation;
  if ( Saturation )
    v11 = 16 * Saturation;
  Thread->Saturation = 0;
  v13 = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v13 = 1;
    if ( Increment <= 0 )
      v13 = -1;
    Thread->Saturation = v13;
  }
  v14 = Process->BasePriority;
  v15 = Increment + v14;
  v48 = Increment + v14;
  if ( (char)v14 >= 16 )
  {
    if ( v15 >= 16 )
    {
      if ( v15 > 31 )
      {
        v15 = 31;
        v48 = 31;
      }
    }
    else
    {
      v15 = 16;
      v48 = 16;
    }
    goto LABEL_55;
  }
  if ( v15 >= 16 )
  {
    v15 = 15;
    v48 = 15;
  }
  else if ( v15 <= 0 )
  {
    v15 = 1;
    v48 = 1;
  }
  if ( v13 )
  {
LABEL_55:
    v49 = v15;
    goto LABEL_16;
  }
  v16 = v15 - BasePriority + (char)KiComputeNewPriority((__int64)Thread, 0);
  v49 = v16;
  if ( v16 >= 16 )
  {
    v49 = 15;
  }
  else if ( v16 <= 0 )
  {
    v49 = 1;
  }
LABEL_16:
  v17 = KeGetCurrentPrcb();
  v18 = v48;
  if ( (char)v48 < Thread->BasePriority )
  {
    if ( Thread->AbOwnedEntryCount )
    {
      p_IoSelfBoostsEntry = &Thread->IoSelfBoostsEntry;
      if ( Thread->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbSelfIoBoostsList = &v17->AbSelfIoBoostsList;
        if ( v17 != (struct _KPRCB *)-25712LL )
        {
          p_IoSelfBoostsEntry->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = p_IoSelfBoostsEntry;
          _InterlockedIncrement16(&Thread->KeReferenceCount);
          KiAbQueueAutoBoostDpc(v17);
          v18 = v48;
        }
      }
    }
  }
  Thread->BasePriority = v18;
  PriorityDecrement = Thread->PriorityDecrement;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    Thread->PriorityDecrement = 0;
  }
  if ( v49 != Thread->Priority )
  {
    if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v25 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v26 = v49;
    Thread->QuantumTarget = v25;
    KiSetPriorityThread(Thread, &v47, v26);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(Queue, Thread);
  else
    KiReleaseThreadLockSafe(Thread);
  KiReadyDeferredReadyList(CurrentPrcb, &v47);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      LOBYTE(v21) = 2;
      KiRequestSoftwareInterrupt(CurrentPrcb, v21);
    }
    goto LABEL_26;
  }
  v22 = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v30 = KeGetCurrentPrcb();
    v46 = 0;
    v31 = v30->SchedulerAssist;
    if ( v31 )
    {
      if ( v30->NestingLevel <= 1u )
      {
        v41 = v31[5];
        v31[5] = v41 + 1;
        if ( v41 == -1 )
LABEL_93:
          KiRemoveSystemWorkPriorityKick(v30, v29);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v36 = v30->SchedulerAssist;
      if ( v36 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v42 = v36[5] - 1;
          v36[5] = v42;
          if ( !v42 )
            KiRemoveSystemWorkPriorityKick(v30, v29);
        }
      }
      do
        KeYieldProcessorEx(&v46);
      while ( CurrentPrcb->PrcbLock );
      v37 = v30->SchedulerAssist;
      if ( v37 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v43 = v37[5];
          v37[5] = v43 + 1;
          if ( v43 == -1 )
            goto LABEL_93;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v22, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    KiSetThreadState(NextThread, 2LL);
    v22->WaitReason = 32;
    v22->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v22);
    if ( !(unsigned __int8)KiSwapContext(v22, NextThread, CurrentIrql) )
      goto LABEL_24;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v44, v21);
    }
  }
  else
  {
    if ( (v22->MiscFlags & 0x40) == 0 )
      goto LABEL_24;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v35 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v35, v21);
    }
  }
  __writecr8(1uLL);
  v22->MiscFlags &= ~0x40u;
  KiDeliverApc(0LL, 0LL, 0LL);
LABEL_24:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v45 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v45, v21);
  }
  __writecr8(CurrentIrql);
LABEL_26:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v48, (__int64)&v49);
  return v11;
}
