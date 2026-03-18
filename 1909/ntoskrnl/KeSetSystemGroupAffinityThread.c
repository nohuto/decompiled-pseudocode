/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1400FC2F0
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x1400ED994 (PnpSetDeviceAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     ExAllocateCacheAwarePushLock @ 0x14015D550 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016E474 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiAcquireInterruptConnectLock @ 0x14017CCC0 (KiAcquireInterruptConnectLock.c)
 *     MakeGdtReadOnly @ 0x140185D0C (MakeGdtReadOnly.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14018B7A4 (KiSetSystemAffinityThreadToProcessor.c)
 *     PpmInstallFeedbackCounters @ 0x140193F88 (PpmInstallFeedbackCounters.c)
 *     KeSetSystemAffinityThreadEx @ 0x14019E2A0 (KeSetSystemAffinityThreadEx.c)
 *     IopPassiveInterruptWorker @ 0x14029E620 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x1402A338C (KiDynamicProcessorInitialization.c)
 *     KiInterruptDispatchCommon @ 0x1402B0884 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1402EE134 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402EFEB8 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x1402F67EC (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402F6AF8 (PpmSetSimulatedLoad.c)
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140599120 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x1405A8570 (IopLiveDumpCorralProcessors.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x140777CF8 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x14082F818 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 *     ViIsBTSSupported @ 0x140975BF4 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140975D2C (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x1409FE9FC (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0BE88 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiSetSystemAffinityThread @ 0x1400FC5E0 (KiSetSystemAffinityThread.c)
 *     KiSetThreadState @ 0x140135CAC (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x14032D52C (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x14032E034 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  unsigned __int16 Group; // cx
  char v4; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // r14
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  unsigned int v10; // r15d
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
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
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
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
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
    while ( *(_QWORD *)(CurrentThread + 64) );
  }
  v9 = *(_DWORD *)(CurrentThread + 116);
  v10 = *(_DWORD *)(CurrentThread + 588);
  if ( (v9 & 8) != 0 )
  {
    v27.Group = *(_WORD *)(CurrentThread + 584);
    v27.Mask = *(_QWORD *)(CurrentThread + 576);
  }
  else
  {
    *(_DWORD *)(CurrentThread + 116) = v9 | 8;
  }
  v11 = v10;
  if ( v4 )
  {
    KiSetSystemAffinityThread(CurrentPrcb, Affinity, 1280LL, &v31);
    v11 = *(_DWORD *)(CurrentThread + 588);
  }
  KiReleaseThreadLockSafe(CurrentThread);
  if ( (xmmword_140572410 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, v10, v11);
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
