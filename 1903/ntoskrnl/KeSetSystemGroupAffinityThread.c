/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1400F8850
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140099884 (PnpSetDeviceAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
 *     ExAllocateCacheAwarePushLock @ 0x14015CEB0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016DD84 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiAcquireInterruptConnectLock @ 0x14017C5D0 (KiAcquireInterruptConnectLock.c)
 *     MakeGdtReadOnly @ 0x14018575C (MakeGdtReadOnly.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14018AE14 (KiSetSystemAffinityThreadToProcessor.c)
 *     PpmInstallFeedbackCounters @ 0x1401937A8 (PpmInstallFeedbackCounters.c)
 *     KeSetSystemAffinityThreadEx @ 0x14019DB80 (KeSetSystemAffinityThreadEx.c)
 *     IopPassiveInterruptWorker @ 0x14029E8C0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x1402A362C (KiDynamicProcessorInitialization.c)
 *     KiInterruptDispatchCommon @ 0x1402B0B24 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1402EE3D4 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402F0158 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x1402F6D3C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402F7048 (PpmSetSimulatedLoad.c)
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140599140 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x1405A8590 (IopLiveDumpCorralProcessors.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F4120 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x140774718 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x14082F9A8 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 *     ViIsBTSSupported @ 0x140975BF4 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140975D2C (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x1409FE4E0 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0B95C (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiSetSystemAffinityThread @ 0x1400F8B40 (KiSetSystemAffinityThread.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x14032DACC (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x14032E5D4 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  unsigned __int16 Group; // cx
  char v4; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *CurrentThread; // r14
  _DWORD *SchedulerAssist; // rcx
  int MiscFlags; // eax
  unsigned int IdealProcessor; // r15d
  unsigned int v11; // esi
  __int64 v12; // rsi
  bool v13; // zf
  struct _KPRCB *v14; // rdi
  _DWORD *v15; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v17; // r8
  __int64 v18; // r8
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx
  struct _GROUP_AFFINITY v27; // [rsp+20h] [rbp-18h]
  int v28; // [rsp+80h] [rbp+48h] BYREF
  PGROUP_AFFINITY v29; // [rsp+88h] [rbp+50h]
  int v30; // [rsp+90h] [rbp+58h] BYREF
  _QWORD *v31; // [rsp+98h] [rbp+60h] BYREF

  v29 = PreviousAffinity;
  v31 = 0LL;
  v27 = (struct _GROUP_AFFINITY)0LL;
  Group = Affinity->Group;
  if ( Group >= LOWORD(KeActiveProcessors[0])
    || (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v28 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = SchedulerAssist[5];
        SchedulerAssist[5] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      break;
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v19[5] - 1;
        v19[5] = v21;
        if ( !v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v28);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( (MiscFlags & 8) != 0 )
  {
    v27.Group = CurrentThread->Affinity.Group;
    v27.Mask = CurrentThread->Affinity.Mask;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
  }
  v11 = IdealProcessor;
  if ( v4 )
  {
    KiSetSystemAffinityThread(CurrentPrcb, Affinity, 1280LL, &v31);
    v11 = CurrentThread->IdealProcessor;
  }
  KiReleaseThreadLockSafe(CurrentThread);
  if ( (xmmword_140572410 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v11);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v31);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  else
  {
    v12 = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v14 = KeGetCurrentPrcb();
      v30 = 0;
      while ( 1 )
      {
        v15 = v14->SchedulerAssist;
        if ( v15 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v22 = v15[5];
            v15[5] = v22 + 1;
            if ( v22 == -1 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v23 = v14->SchedulerAssist;
        if ( v23 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v24 = v23[5] - 1;
            v23[5] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        do
          KeYieldProcessorEx(&v30);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v12, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      KiSetThreadState(NextThread, 2LL);
      *(_BYTE *)(v12 + 643) = 32;
      *(_BYTE *)(v12 + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, v12, v17);
      LOBYTE(v18) = CurrentIrql;
      v13 = (unsigned __int8)KiSwapContext(v12, NextThread, v18) == 0;
    }
    else
    {
      v13 = (*(_DWORD *)(v12 + 116) & 0x40) == 0;
    }
    if ( !v13 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v25);
      }
      __writecr8(1uLL);
      *(_DWORD *)(v12 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    __writecr8(CurrentIrql);
  }
  if ( v29 )
    *v29 = v27;
}
