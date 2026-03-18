/*
 * XREFs of KeSetPriorityThread @ 0x140010D60
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x14007EC6C (CcApplyLowIoPriorityToThread.c)
 *     MiZeroInParallel @ 0x1400F8BB8 (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401265B0 (CcBoostLowPriorityWorkerThread.c)
 *     CmpSetPriorityThread @ 0x14013CE20 (CmpSetPriorityThread.c)
 *     PfTSetTraceWorkerPriority @ 0x14017F684 (PfTSetTraceWorkerPriority.c)
 *     KeSwapProcessOrStack @ 0x14018A530 (KeSwapProcessOrStack.c)
 *     KiExecuteDpc @ 0x14018B540 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x14018CF20 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x14018DE80 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x140191670 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x14019CEE0 (FsRtlWorkerThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1402AE954 (KeSetThreadSchedulerAssist.c)
 *     MiPartitionWorkingSetManager @ 0x1402C99F0 (MiPartitionWorkingSetManager.c)
 *     ExRegisterBootDevice @ 0x140338770 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409733F4 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012D9C (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14032DB88 (EtwTracePriority.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  __int64 v4; // rdx
  int v5; // r12d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *SchedulerAssist; // rcx
  char PriorityDecrement; // cl
  char v11; // al
  KPRIORITY v12; // esi
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v14; // rcx
  char BasePriority; // al
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  _KTHREAD *v18; // rdi
  __int64 v20; // rdx
  struct _KPRCB *v21; // r14
  _DWORD *v22; // rcx
  _KTHREAD *NextThread; // r14
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  struct _KPRCB *v26; // rcx
  _QWORD *v27; // rdx
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  struct _KPRCB *v36; // rcx
  int v37; // [rsp+70h] [rbp+8h] BYREF
  int v38; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v39; // [rsp+88h] [rbp+20h] BYREF

  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v4 = 0LL;
  v5 = 0;
  v39 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v37 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v30 = SchedulerAssist[5];
      SchedulerAssist[5] = v30 + 1;
      if ( v30 == -1 )
LABEL_62:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v4);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = v24[5] - 1;
        v24[5] = v31;
        if ( !v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v4);
      }
    }
    do
      KeYieldProcessorEx(&v37);
    while ( Thread->ThreadLock );
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v32 = v25[5];
        v25[5] = v32 + 1;
        if ( v32 == -1 )
          goto LABEL_62;
      }
    }
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v11 = Thread->Priority;
  v12 = v11;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
    {
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      v11 = Thread->Priority;
    }
    Thread->PriorityDecrement = 0;
  }
  if ( Priority != v11 )
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
    v14 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    BasePriority = Thread->BasePriority;
    Thread->QuantumTarget = v14;
    if ( BasePriority && !Priority )
      Priority = 1;
    if ( (BasePriority < 16 || Priority >= 16) && KiSetPriorityThread(Thread, (__int64 *)&v39, Priority) )
      v5 = Thread->Priority;
  }
  KiReleaseThreadLockSafe(Thread);
  v17 = v39;
  while ( v17 )
  {
    v27 = v17 - 27;
    v17 = (_QWORD *)*v17;
    KiDeferredReadyThread(CurrentPrcb, v27);
  }
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      LOBYTE(v16) = 2;
      KiRequestSoftwareInterrupt(CurrentPrcb, v16);
    }
    goto LABEL_24;
  }
  v18 = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v21 = KeGetCurrentPrcb();
    v38 = 0;
    v22 = v21->SchedulerAssist;
    if ( v22 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v33 = v22[5];
        v22[5] = v33 + 1;
        if ( v33 == -1 )
LABEL_71:
          KiRemoveSystemWorkPriorityKick(v21, v20);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v28 = v21->SchedulerAssist;
      if ( v28 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v34 = v28[5] - 1;
          v28[5] = v34;
          if ( !v34 )
            KiRemoveSystemWorkPriorityKick(v21, v20);
        }
      }
      do
        KeYieldProcessorEx(&v38);
      while ( CurrentPrcb->PrcbLock );
      v29 = v21->SchedulerAssist;
      if ( v29 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v35 = v29[5];
          v29[5] = v35 + 1;
          if ( v35 == -1 )
            goto LABEL_71;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v18, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    v18->WaitReason = 32;
    v18->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v18);
    if ( !(unsigned __int8)KiSwapContext(v18, NextThread, CurrentIrql) )
      goto LABEL_22;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      goto LABEL_46;
    goto LABEL_49;
  }
  if ( (v18->MiscFlags & 0x40) == 0 )
    goto LABEL_22;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
LABEL_49:
    v26 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v26, v16);
  }
LABEL_46:
  __writecr8(1uLL);
  v18->MiscFlags &= ~0x40u;
  KiDeliverApc(0LL, 0LL, 0LL);
LABEL_22:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v36 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v36, v16);
  }
  __writecr8(CurrentIrql);
LABEL_24:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v5 )
      EtwTracePriority((_DWORD)Thread, 1328, v12, v5, 0LL);
  }
  return v12;
}
