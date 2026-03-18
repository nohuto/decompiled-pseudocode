/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1400F85B0
 * Callers:
 *     ExpWorkerThread @ 0x140059C30 (ExpWorkerThread.c)
 *     PnpSendIrp @ 0x1400997DC (PnpSendIrp.c)
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
 *     ExAllocateCacheAwarePushLock @ 0x14015CEB0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016DD84 (ExpSaPageGroupDescriptorAllocate.c)
 *     KeMaskInterrupt @ 0x14017BD20 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x14017BE74 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14017C44C (KiConnectInterrupt.c)
 *     MakeGdtReadOnly @ 0x14018575C (MakeGdtReadOnly.c)
 *     KiInitMachineDependent @ 0x14018ACAC (KiInitMachineDependent.c)
 *     PpmInstallFeedbackCounters @ 0x1401937A8 (PpmInstallFeedbackCounters.c)
 *     IopPassiveInterruptWorker @ 0x14029E8C0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x1402A362C (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x1402A4AE0 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1402A4B30 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x1402A5C20 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x1402B0B24 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1402EE3D4 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402F0158 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x1402F6D3C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402F7048 (PpmSetSimulatedLoad.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405A94B8 (IopLiveDumpUncorralProcessors.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F4120 (MiCombineAllPhysicalMemory.c)
 *     PnpCallAddDevice @ 0x140739044 (PnpCallAddDevice.c)
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

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  struct _KTHREAD *CurrentThread; // rdi
  PGROUP_AFFINITY p_UserAffinity; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  unsigned int IdealProcessor; // ebp
  __int64 UserIdealProcessor; // r8
  unsigned int v8; // r14d
  __int64 v9; // rdi
  bool v10; // zf
  unsigned __int16 Group; // cx
  __int64 v12; // rax
  struct _KPRCB *v13; // rbx
  _DWORD *v14; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  struct _KPRCB *v24; // rcx
  struct _KPRCB *v25; // rcx
  int v26; // [rsp+68h] [rbp+10h] BYREF
  int v27; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_UserAffinity = PreviousAffinity;
  v28 = 0LL;
  if ( (CurrentThread->MiscFlags & 8) != 0
    && !(PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2])) )
  {
    if ( !PreviousAffinity->Mask
      || (Group = PreviousAffinity->Group, Group < LOWORD(KeActiveProcessors[0]))
      && (v12 = qword_140572748[Group], v10 = (v12 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v12, !v10) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v18 = SchedulerAssist[5];
            SchedulerAssist[5] = v18 + 1;
            if ( v18 == -1 )
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
            v20 = v19[5] - 1;
            v19[5] = v20;
            if ( !v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v26);
        while ( CurrentThread->ThreadLock );
      }
      IdealProcessor = CurrentThread->IdealProcessor;
      if ( p_UserAffinity->Mask )
      {
        UserIdealProcessor = 1280LL;
      }
      else
      {
        UserIdealProcessor = CurrentThread->UserIdealProcessor;
        p_UserAffinity = &CurrentThread->UserAffinity;
        CurrentThread->MiscFlags &= ~8u;
      }
      KiSetSystemAffinityThread(CurrentPrcb, p_UserAffinity, UserIdealProcessor, &v28);
      v8 = CurrentThread->IdealProcessor;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( (xmmword_140572410 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v8);
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
      KiReadyDeferredReadyList((__int64)CurrentPrcb, &v28);
      if ( CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
          KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      }
      else
      {
        v9 = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
          v13 = KeGetCurrentPrcb();
          v27 = 0;
          while ( 1 )
          {
            v14 = v13->SchedulerAssist;
            if ( v14 )
            {
              if ( v13->NestingLevel <= 1u )
              {
                v21 = v14[5];
                v14[5] = v21 + 1;
                if ( v21 == -1 )
                  KiRemoveSystemWorkPriorityKick(v13);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            v22 = v13->SchedulerAssist;
            if ( v22 )
            {
              if ( v13->NestingLevel <= 1u )
              {
                v23 = v22[5] - 1;
                v22[5] = v23;
                if ( !v23 )
                  KiRemoveSystemWorkPriorityKick(v13);
              }
            }
            do
              KeYieldProcessorEx(&v27);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v9, 0LL);
          _enable();
          CurrentPrcb->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] == 1 )
            NextThread->ReadyTime = NextThread->ReadyTime
                                  - NextThread->WaitBlock[2].SpareLong
                                  + MEMORY[0xFFFFF78000000320];
          KiSetThreadState(NextThread, 2LL);
          *(_BYTE *)(v9 + 643) = 32;
          *(_BYTE *)(v9 + 390) = CurrentIrql;
          KiQueueReadyThread((__int64)CurrentPrcb, v9, v16);
          LOBYTE(v17) = CurrentIrql;
          v10 = (unsigned __int8)KiSwapContext(v9, NextThread, v17) == 0;
        }
        else
        {
          v10 = (*(_DWORD *)(v9 + 116) & 0x40) == 0;
        }
        if ( !v10 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v24);
          }
          __writecr8(1uLL);
          *(_DWORD *)(v9 + 116) &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v25);
        }
        __writecr8(CurrentIrql);
      }
    }
  }
}
