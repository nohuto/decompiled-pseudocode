/*
 * XREFs of KeSetBasePriorityThread @ 0x1400CD3F0
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x140740B20 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C5040 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiComputeNewPriority @ 0x1400D0F10 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1401123A0 (KiPriQueueThreadPriorityChanged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140310478 (EtwTracePriority.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  __int64 v2; // r8
  _KPROCESS *Process; // rdi
  __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *SchedulerAssist; // rcx
  int BasePriority; // r12d
  LONG v12; // ebp
  char Saturation; // al
  char v14; // cl
  int v15; // eax
  int v16; // edi
  int v17; // eax
  struct _KPRCB *v18; // rcx
  char v19; // al
  char PriorityDecrement; // al
  _DISPATCHER_HEADER *volatile Queue; // rcx
  _KTHREAD *v22; // r14
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v25; // rcx
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // r8
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _KPRCB *v30; // rdi
  _DWORD *v31; // rcx
  _KTHREAD *NextThread; // rdi
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
  v6 = 0LL;
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
LABEL_78:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v50, v6, v2);
    while ( Thread->ThreadLock );
    v34 = CurrentPrcb->SchedulerAssist;
    if ( v34 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v40 = v34[5];
        v34[5] = v40 + 1;
        if ( v40 == -1 )
          goto LABEL_78;
      }
    }
  }
  BasePriority = Thread->BasePriority;
  v12 = BasePriority - Process->BasePriority;
  Saturation = Thread->Saturation;
  if ( Saturation )
    v12 = 16 * Saturation;
  Thread->Saturation = 0;
  v14 = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v14 = 1;
    if ( Increment <= 0 )
      v14 = -1;
    Thread->Saturation = v14;
  }
  v15 = Process->BasePriority;
  v16 = Increment + v15;
  v48 = Increment + v15;
  if ( (char)v15 >= 16 )
  {
    if ( v16 >= 16 )
    {
      if ( v16 > 31 )
      {
        v16 = 31;
        v48 = 31;
      }
    }
    else
    {
      v16 = 16;
      v48 = 16;
    }
    goto LABEL_53;
  }
  if ( v16 >= 16 )
  {
    v16 = 15;
    v48 = 15;
  }
  else if ( v16 <= 0 )
  {
    v16 = 1;
    v48 = 1;
  }
  if ( v14 )
  {
LABEL_53:
    v49 = v16;
    goto LABEL_16;
  }
  v17 = v16 - BasePriority + (char)KiComputeNewPriority(Thread, 0LL);
  v49 = v17;
  if ( v17 >= 16 )
  {
    v49 = 15;
  }
  else if ( v17 <= 0 )
  {
    v49 = 1;
  }
LABEL_16:
  v18 = KeGetCurrentPrcb();
  v19 = v48;
  if ( (char)v48 < Thread->BasePriority )
  {
    if ( Thread->AbOwnedEntryCount )
    {
      p_IoSelfBoostsEntry = &Thread->IoSelfBoostsEntry;
      if ( Thread->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbSelfIoBoostsList = &v18->AbSelfIoBoostsList;
        if ( v18 != (struct _KPRCB *)-25712LL )
        {
          p_IoSelfBoostsEntry->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = p_IoSelfBoostsEntry;
          _InterlockedIncrement16(&Thread->KeReferenceCount);
          KiAbQueueAutoBoostDpc(v18);
          v19 = v48;
        }
      }
    }
  }
  Thread->BasePriority = v19;
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
    Thread->QuantumTarget = v25;
    KiSetPriorityThread(Thread, &v47);
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
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_26;
  }
  v22 = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
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
LABEL_91:
          KiRemoveSystemWorkPriorityKick(v30);
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
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      do
        KeYieldProcessorEx(&v46, v28, v29);
      while ( CurrentPrcb->PrcbLock );
      v37 = v30->SchedulerAssist;
      if ( v37 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v43 = v37[5];
          v37[5] = v43 + 1;
          if ( v43 == -1 )
            goto LABEL_91;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v22, 0LL);
    _enable();
    KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
    v22->WaitReason = 32;
    v22->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v22);
    if ( !(unsigned __int8)KiSwapContext(v22, NextThread, CurrentIrql) )
      goto LABEL_24;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v44);
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
      KiRemoveSystemWorkPriorityKick(v35);
    }
  }
  __writecr8(1uLL);
  v22->MiscFlags &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_24:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v45 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v45);
  }
  __writecr8(CurrentIrql);
LABEL_26:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v48, (__int64)&v49);
  return v12;
}
