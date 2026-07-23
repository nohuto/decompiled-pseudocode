/*
 * XREFs of KeSetPriorityThread @ 0x1400CD8F0
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x14007E024 (CcApplyLowIoPriorityToThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107FD0 (CcBoostLowPriorityWorkerThread.c)
 *     CmpSetPriorityThread @ 0x14013AF2C (CmpSetPriorityThread.c)
 *     MiZeroInParallel @ 0x14013C644 (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     PfTSetTraceWorkerPriority @ 0x140175B9C (PfTSetTraceWorkerPriority.c)
 *     KeSwapProcessOrStack @ 0x14017FEE0 (KeSwapProcessOrStack.c)
 *     MiMappedPageWriter @ 0x1401808E0 (MiMappedPageWriter.c)
 *     KiExecuteDpc @ 0x140181630 (KiExecuteDpc.c)
 *     KeBalanceSetManager @ 0x140183C10 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x1401876E0 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x140192620 (FsRtlWorkerThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140297F34 (KeSetThreadSchedulerAssist.c)
 *     MiPartitionWorkingSetManager @ 0x1402B4790 (MiPartitionWorkingSetManager.c)
 *     ExRegisterBootDevice @ 0x14031A180 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140934DD4 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1EF0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140310478 (EtwTracePriority.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  __int64 v2; // r8
  __int64 v5; // rdx
  int v6; // r12d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *SchedulerAssist; // rcx
  char PriorityDecrement; // cl
  char v12; // al
  KPRIORITY v13; // ebp
  volatile unsigned __int64 CycleTime; // r14
  unsigned __int64 v15; // rcx
  char BasePriority; // al
  _KTHREAD *v17; // r14
  _DWORD *v19; // rcx
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KPRCB *v23; // rdi
  _DWORD *v24; // rcx
  _KTHREAD *NextThread; // rdi
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  struct _KPRCB *v35; // rcx
  int v36; // [rsp+70h] [rbp+8h] BYREF
  int v37; // [rsp+80h] [rbp+18h] BYREF
  __int64 v38; // [rsp+88h] [rbp+20h] BYREF

  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v5 = 0LL;
  v6 = 0;
  v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v36 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v29 = SchedulerAssist[5];
      SchedulerAssist[5] = v29 + 1;
      if ( v29 == -1 )
LABEL_58:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v19[5] - 1;
        v19[5] = v30;
        if ( !v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v36, v5, v2);
    while ( Thread->ThreadLock );
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = v20[5];
        v20[5] = v31 + 1;
        if ( v31 == -1 )
          goto LABEL_58;
      }
    }
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v12 = Thread->Priority;
  v13 = v12;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
    {
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      v12 = Thread->Priority;
    }
    Thread->PriorityDecrement = 0;
  }
  if ( Priority != v12 )
  {
    if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiEndThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
      KiStartThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v15 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    BasePriority = Thread->BasePriority;
    Thread->QuantumTarget = v15;
    if ( BasePriority && !Priority )
      Priority = 1;
    if ( (BasePriority < 16 || Priority >= 16) && (unsigned __int8)KiSetPriorityThread(Thread, &v38) )
      v6 = Thread->Priority;
  }
  KiReleaseThreadLockSafe(Thread);
  KiReadyDeferredReadyList(CurrentPrcb, &v38);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_23;
  }
  v17 = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v23 = KeGetCurrentPrcb();
    v37 = 0;
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v32 = v24[5];
        v24[5] = v32 + 1;
        if ( v32 == -1 )
LABEL_67:
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v27 = v23->SchedulerAssist;
      if ( v27 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v33 = v27[5] - 1;
          v27[5] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      do
        KeYieldProcessorEx(&v37, v21, v22);
      while ( CurrentPrcb->PrcbLock );
      v28 = v23->SchedulerAssist;
      if ( v28 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v34 = v28[5];
          v28[5] = v34 + 1;
          if ( v34 == -1 )
            goto LABEL_67;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v17, 0LL);
    _enable();
    KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
    v17->WaitReason = 32;
    v17->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v17);
    if ( !(unsigned __int8)KiSwapContext(v17, NextThread, CurrentIrql) )
      goto LABEL_21;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      goto LABEL_44;
    goto LABEL_47;
  }
  if ( (v17->MiscFlags & 0x40) == 0 )
    goto LABEL_21;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
LABEL_47:
    v26 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v26);
  }
LABEL_44:
  __writecr8(1uLL);
  v17->MiscFlags &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_21:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v35 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v35);
  }
  __writecr8(CurrentIrql);
LABEL_23:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v6 )
      EtwTracePriority((_DWORD)Thread, 1328, v13, v6, 0LL);
  }
  return v13;
}
