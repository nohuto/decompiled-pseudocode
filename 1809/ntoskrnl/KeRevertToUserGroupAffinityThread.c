/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1400D8290
 * Callers:
 *     PnpSendIrp @ 0x14000E9CC (PnpSendIrp.c)
 *     ExpWorkerThread @ 0x1400B5BB0 (ExpWorkerThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     KeMaskInterrupt @ 0x14016D648 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x14016D794 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14016DDC0 (KiConnectInterrupt.c)
 *     MakeGdtReadOnly @ 0x14017E238 (MakeGdtReadOnly.c)
 *     KiInitMachineDependent @ 0x1401816E0 (KiInitMachineDependent.c)
 *     PpmInstallFeedbackCounters @ 0x140189628 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x14018E180 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x14018FDE0 (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1402889C0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14028D728 (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x14028E360 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x14028E3B0 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x14028F400 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x140299A54 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1402D3EF4 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402D5C88 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x1402DB39C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402DB7A4 (PpmSetSimulatedLoad.c)
 *     IopLiveDumpUncorralProcessors @ 0x14057A628 (IopLiveDumpUncorralProcessors.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 *     PnpCallAddDevice @ 0x14070DEB0 (PnpCallAddDevice.c)
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

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v1; // r8
  struct _KTHREAD *CurrentThread; // rdi
  PGROUP_AFFINITY p_UserAffinity; // rbx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  unsigned int IdealProcessor; // ebp
  unsigned int UserIdealProcessor; // r8d
  unsigned int v10; // r14d
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KPRCB *v17; // rbx
  _DWORD *v18; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v20; // r8
  __int64 v21; // r8
  unsigned __int16 Group; // cx
  __int64 v23; // rax
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  int v32; // [rsp+68h] [rbp+10h] BYREF
  int v33; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v34; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_UserAffinity = PreviousAffinity;
  if ( (CurrentThread->MiscFlags & 8) != 0 )
  {
    v4 = PreviousAffinity->Reserved[2];
    LOWORD(v4) = PreviousAffinity->Reserved[0] | PreviousAffinity->Reserved[1] | v4;
    if ( !(_WORD)v4 )
    {
      if ( !PreviousAffinity->Mask
        || (Group = PreviousAffinity->Group, Group < LOWORD(KeActiveProcessors[0]))
        && (v23 = qword_1405426A8[Group], v14 = (v23 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v23, !v14) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = 0;
        while ( 1 )
        {
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v24 = SchedulerAssist[5];
              SchedulerAssist[5] = v24 + 1;
              if ( v24 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          v25 = CurrentPrcb->SchedulerAssist;
          if ( v25 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v26 = v25[5] - 1;
              v25[5] = v26;
              if ( !v26 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v32, v4, v1);
          while ( CurrentThread->ThreadLock );
        }
        IdealProcessor = CurrentThread->IdealProcessor;
        if ( p_UserAffinity->Mask )
        {
          UserIdealProcessor = 1280;
        }
        else
        {
          UserIdealProcessor = CurrentThread->UserIdealProcessor;
          p_UserAffinity = &CurrentThread->UserAffinity;
          CurrentThread->MiscFlags &= ~8u;
        }
        v34 = 0LL;
        KiSetSystemAffinityThread((__int64)CurrentPrcb, (__int64)p_UserAffinity, UserIdealProcessor, (__int64)&v34);
        v10 = CurrentThread->IdealProcessor;
        KiReleaseThreadLockSafe(CurrentThread);
        if ( (xmmword_140542350 & 0x8000000) != 0 )
          EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v10);
        if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
          EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v34, v11, v12);
        if ( CurrentIrql >= 2u )
        {
          if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            KiRequestSoftwareInterrupt(CurrentPrcb, 2);
        }
        else
        {
          v13 = (__int64)CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
            v17 = KeGetCurrentPrcb();
            v33 = 0;
            while ( 1 )
            {
              v18 = v17->SchedulerAssist;
              if ( v18 )
              {
                if ( v17->NestingLevel <= 1u )
                {
                  v27 = v18[5];
                  v18[5] = v27 + 1;
                  if ( v27 == -1 )
                    KiRemoveSystemWorkPriorityKick(v17);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
                break;
              v28 = v17->SchedulerAssist;
              if ( v28 )
              {
                if ( v17->NestingLevel <= 1u )
                {
                  v29 = v28[5] - 1;
                  v28[5] = v29;
                  if ( !v29 )
                    KiRemoveSystemWorkPriorityKick(v17);
                }
              }
              do
                KeYieldProcessorEx(&v33, v15, v16);
              while ( CurrentPrcb->PrcbLock );
            }
            NextThread = CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v13, 0LL);
            _enable();
            KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
            *(_BYTE *)(v13 + 643) = 32;
            *(_BYTE *)(v13 + 390) = CurrentIrql;
            KiQueueReadyThread(CurrentPrcb, v13, v20);
            LOBYTE(v21) = CurrentIrql;
            v14 = (unsigned __int8)KiSwapContext(v13, NextThread, v21) == 0;
          }
          else
          {
            v14 = (*(_DWORD *)(v13 + 116) & 0x40) == 0;
          }
          if ( !v14 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v30);
            }
            __writecr8(1uLL);
            *(_DWORD *)(v13 + 116) &= ~0x40u;
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
      }
    }
  }
}
