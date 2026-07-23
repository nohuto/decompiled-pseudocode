/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1400D6F10
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14000EA6C (PnpSetDeviceAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiAcquireInterruptConnectLock @ 0x14016DF38 (KiAcquireInterruptConnectLock.c)
 *     MakeGdtReadOnly @ 0x14017E238 (MakeGdtReadOnly.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140181850 (KiSetSystemAffinityThreadToProcessor.c)
 *     PpmInstallFeedbackCounters @ 0x140189628 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x14018E180 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x14018FDE0 (ExpSaInitialize.c)
 *     KeSetSystemAffinityThreadEx @ 0x1401937D0 (KeSetSystemAffinityThreadEx.c)
 *     IopPassiveInterruptWorker @ 0x1402889C0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14028D728 (KiDynamicProcessorInitialization.c)
 *     KiInterruptDispatchCommon @ 0x140299A54 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1402D3EF4 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402D5C88 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x1402DB39C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402DB7A4 (PpmSetSimulatedLoad.c)
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x14056C600 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x140579704 (IopLiveDumpCorralProcessors.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x140750EF4 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1407F7EE0 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     ViIsBTSSupported @ 0x14093753C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140937660 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C2D98 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x1409C6C3C (KiComputeNumaCosts.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSetSystemAffinityThread @ 0x1400D6480 (KiSetSystemAffinityThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1403108C8 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v2; // r8
  unsigned __int16 Group; // cx
  char v5; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rsi
  _DWORD *SchedulerAssist; // rcx
  int MiscFlags; // eax
  unsigned int IdealProcessor; // r15d
  unsigned int v12; // r14d
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KPRCB *v19; // rbx
  _DWORD *v20; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v22; // r8
  __int64 v23; // r8
  struct _KPRCB *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  struct _KPRCB *v31; // rcx
  struct _GROUP_AFFINITY v32; // [rsp+20h] [rbp-18h]
  int v33; // [rsp+80h] [rbp+48h] BYREF
  PGROUP_AFFINITY v34; // [rsp+88h] [rbp+50h]
  int v35; // [rsp+90h] [rbp+58h] BYREF
  _QWORD *v36; // [rsp+98h] [rbp+60h] BYREF

  v34 = PreviousAffinity;
  v32 = (struct _GROUP_AFFINITY)0LL;
  Group = Affinity->Group;
  if ( Group >= LOWORD(KeActiveProcessors[0])
    || (PreviousAffinity = (PGROUP_AFFINITY)KeActiveProcessors,
        (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0)
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v33 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = SchedulerAssist[5];
        SchedulerAssist[5] = v25 + 1;
        if ( v25 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      break;
    v26 = CurrentPrcb->SchedulerAssist;
    if ( v26 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v26[5] - 1;
        v26[5] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v33, (__int64)PreviousAffinity, v2);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( (MiscFlags & 8) != 0 )
  {
    v32.Group = CurrentThread->Affinity.Group;
    v32.Mask = CurrentThread->Affinity.Mask;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
  }
  v36 = 0LL;
  v12 = IdealProcessor;
  if ( v5 )
  {
    KiSetSystemAffinityThread((__int64)CurrentPrcb, (__int64)Affinity, 0x500u, (__int64)&v36);
    v12 = CurrentThread->IdealProcessor;
  }
  KiReleaseThreadLockSafe(CurrentThread);
  if ( (xmmword_140542350 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v12);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v36, v13, v14);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  else
  {
    v15 = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v19 = KeGetCurrentPrcb();
      v35 = 0;
      while ( 1 )
      {
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v28 = v20[5];
            v20[5] = v28 + 1;
            if ( v28 == -1 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v29 = v19->SchedulerAssist;
        if ( v29 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v30 = v29[5] - 1;
            v29[5] = v30;
            if ( !v30 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        do
          KeYieldProcessorEx(&v35, v17, v18);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v15, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
      *(_BYTE *)(v15 + 643) = 32;
      *(_BYTE *)(v15 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v15, v22);
      LOBYTE(v23) = CurrentIrql;
      v16 = (unsigned __int8)KiSwapContext(v15, NextThread, v23) == 0;
    }
    else
    {
      v16 = (*(_DWORD *)(v15 + 116) & 0x40) == 0;
    }
    if ( !v16 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v24);
      }
      __writecr8(1uLL);
      *(_DWORD *)(v15 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v31 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v31);
    }
    __writecr8(CurrentIrql);
  }
  if ( v34 )
    *v34 = v32;
}
