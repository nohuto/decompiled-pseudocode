/*
 * XREFs of KiStackAttachProcess @ 0x140090AF0
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     IoRemoveIoCompletion @ 0x140044840 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     KeForceAttachProcess @ 0x14008E884 (KeForceAttachProcess.c)
 *     MiDeleteFinalPageTables @ 0x1400AD0A0 (MiDeleteFinalPageTables.c)
 *     MmEnforceWorkingSetLimit @ 0x1400E5BCC (MmEnforceWorkingSetLimit.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1400F0D5C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     PsQueryProcessCommandLine @ 0x14012BF30 (PsQueryProcessCommandLine.c)
 *     SepAdtLogAuditRecord @ 0x14012CBAC (SepAdtLogAuditRecord.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140131350 (PspIsProcessReadyForRemoteThread.c)
 *     MiFlushAllPages @ 0x140160B64 (MiFlushAllPages.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140165814 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiEmptyAccessLogs @ 0x14017CE80 (MiEmptyAccessLogs.c)
 *     IoRaiseHardError @ 0x140298660 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1402A523C (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x1402ADA40 (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x1402BCB14 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402C9814 (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1402D87D8 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x1402E4CAC (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14032053C (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1403208F8 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x14033E640 (ExpSvmServicePageFault.c)
 *     AlpcpForceUnlinkSecureView @ 0x1405B52BC (AlpcpForceUnlinkSecureView.c)
 *     PspWriteTebImpersonationInfo @ 0x1405DE720 (PspWriteTebImpersonationInfo.c)
 *     PspWriteTebIdealProcessor @ 0x1405E7130 (PspWriteTebIdealProcessor.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140603900 (NtProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140603F30 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 *     MiMapViewOfSection @ 0x140608D80 (MiMapViewOfSection.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     MmCreateTeb @ 0x14060E50C (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x14060EA90 (PspSetupUserStack.c)
 *     ObSetHandleAttributes @ 0x14060F0D0 (ObSetHandleAttributes.c)
 *     PfSnPopulateReadList @ 0x1406280F0 (PfSnPopulateReadList.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x14062F7D4 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwTraceAppStateChange @ 0x140634190 (EtwTraceAppStateChange.c)
 *     ObpDecrementHandleCount @ 0x14063C254 (ObpDecrementHandleCount.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14063E8E8 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfWriteStateData @ 0x140640DCC (ExpWnfWriteStateData.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AAAC (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14064BDA8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcViewDestroyProcedure @ 0x14064C310 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x14064CABC (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x14064CCC0 (MmProbeAndLockProcessPages.c)
 *     MmCopyVirtualMemory @ 0x14064CFB0 (MmCopyVirtualMemory.c)
 *     CmEnumerateValueKey @ 0x14064DD70 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     PfSnAsyncPrefetchWorker @ 0x14066A190 (PfSnAsyncPrefetchWorker.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MmDeleteTeb @ 0x140670684 (MmDeleteTeb.c)
 *     PsMapSystemDlls @ 0x140678F2C (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x140679A54 (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x14067A7C4 (PspWritePebAffinityInfo.c)
 *     PspSetupReservedUserMappings @ 0x14068D350 (PspSetupReservedUserMappings.c)
 *     MmNewProcessInitialized @ 0x140690074 (MmNewProcessInitialized.c)
 *     EtwpWriteProcessEvent @ 0x140690504 (EtwpWriteProcessEvent.c)
 *     ExSweepHandleTable @ 0x140692F10 (ExSweepHandleTable.c)
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 *     PoEnergyContextStart @ 0x140693CC4 (PoEnergyContextStart.c)
 *     PspChangeProcessExecutionState @ 0x140694A24 (PspChangeProcessExecutionState.c)
 *     MmAssignProcessToJob @ 0x140694C70 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406950B0 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 *     MiInSwapStoreWorker @ 0x1406A4D30 (MiInSwapStoreWorker.c)
 *     MmPrefetchVirtualMemory @ 0x1406A58F8 (MmPrefetchVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BE140 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PspQueryQuotaLimits @ 0x1406C88E4 (PspQueryQuotaLimits.c)
 *     PspWow64InitThread @ 0x1406C94A8 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406CA310 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406DBFA0 (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1406EA7A4 (PspDeleteUserStack.c)
 *     MmProcessWorkingSetControl @ 0x1406F54B4 (MmProcessWorkingSetControl.c)
 *     MiCombineIdenticalPages @ 0x1406F6DC4 (MiCombineIdenticalPages.c)
 *     EtwpProcessEnumCallback @ 0x140707DB0 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14074E0B0 (MmCreateShadowMapping.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x1407830A0 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407877B8 (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x140847CE4 (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x140848320 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1408485C0 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140849F6C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x14084A1A0 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x14085411C (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140854400 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x1408806CC (KiTpReadImageData.c)
 *     MiHotPatchAllProcesses @ 0x14088E6EC (MiHotPatchAllProcesses.c)
 *     MiQueryProcessActivePatches @ 0x1408915BC (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x140892958 (MmIsFileMapped.c)
 *     MmDeleteShadowMapping @ 0x140892B78 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408943C0 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x140894B78 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x140894E94 (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x140894FB0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1408953E0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408956C0 (NtLoadEnclaveData.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 *     MiCopyLargeVad @ 0x140899938 (MiCopyLargeVad.c)
 *     MiAllocateChildVads @ 0x14089A8C0 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x14089AED4 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x14089B22C (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x14089B5B0 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14089B930 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x14089D350 (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408A1BE0 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x1408C6310 (PsQueryProcessExceptionFlags.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1408C70D0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x1408C8B90 (PspCreateSecureThread.c)
 *     PspIumGetPhysicalPage @ 0x1408CB438 (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x1408EDF40 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1408F25DC (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1408F2860 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpTiQueryVad @ 0x1408FA100 (EtwpTiQueryVad.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC660 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408FFFE4 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x140903950 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x1409F9954 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1409FE5BC (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x14003A440 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x14003AAD0 (KiSetAddressPolicy.c)
 *     KiInSwapSingleProcess @ 0x140090450 (KiInSwapSingleProcess.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14028DA10 (HvlSwitchVirtualAddressSpace.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r13
  __int64 v5; // r10
  unsigned __int64 v8; // rax
  int v9; // ebp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  $6EAC78A6FCFADE0A5FA44F358736B38F *v12; // rdx
  $65FB4D7BD08F5AAB9FF163CC40489905 *v13; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  struct _KTHREAD *v15; // r8
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  struct _KPRCB *v19; // rcx
  _KPROCESS *Process; // r12
  unsigned __int64 GroupIndex; // r15
  __int64 v22; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r14
  _DWORD *v27; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // rcx
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  int v40; // eax
  unsigned __int64 v41; // rcx
  struct _KPRCB *v42; // rcx
  int v44[4]; // [rsp+30h] [rbp-48h] BYREF
  int v46; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  v5 = a3;
  LOBYTE(v8) = (a2 & 2) == 0;
  if ( (((KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0) & (unsigned __int8)v8) != 0
    || (*(_DWORD *)&BugCheckParameter1->0 & 0x400) != 0 )
  {
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  }
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    v9 = a2 & 2;
    if ( (a2 & 2) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentPrcb = KeGetCurrentPrcb();
      v46 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = SchedulerAssist[5];
          SchedulerAssist[5] = v32 + 1;
          if ( v32 == -1 )
LABEL_47:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v30 = CurrentPrcb->SchedulerAssist;
        if ( v30 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v33 = v30[5] - 1;
            v30[5] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v46);
        while ( CurrentThread->ThreadLock );
        v31 = CurrentPrcb->SchedulerAssist;
        if ( v31 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v34 = v31[5];
            v31[5] = v34 + 1;
            if ( v34 == -1 )
              goto LABEL_47;
          }
        }
      }
      v5 = a3;
    }
    if ( CurrentThread->ApcStateIndex )
    {
      LOBYTE(v8) = KiAttachProcess((__int64)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql, a2, v5);
    }
    else
    {
      v12 = &CurrentThread->152;
      v13 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = CurrentThread->ApcState.Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      Flink = CurrentThread->ApcState.ApcListHead[0].Flink;
      if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v12->ApcState.ApcListHead[0].Flink == v12 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v13->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v13;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        v13->SavedApcState.ApcListHead[0].Flink = Flink;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = Blink;
        Flink->Blink = (struct _LIST_ENTRY *)v13;
        Blink->Flink = (struct _LIST_ENTRY *)v13;
      }
      v15 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v16 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v15 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v16->Flink = v16;
        CurrentThread->SavedApcState.UserApcPendingAll = 0;
      }
      else
      {
        v29 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v16->Flink = (struct _LIST_ENTRY *)v15;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v29;
        v15->Header.WaitListHead.Flink = v16;
        v29->Flink = v16;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v12->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v12;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      CurrentThread->ApcStateIndex = 1;
      if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        KiReleaseThreadLockSafe(CurrentThread);
        KiInSwapSingleProcess((__int64)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql);
        v25 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v26 = KeGetCurrentPrcb();
        v44[0] = 0;
        v27 = v26->SchedulerAssist;
        if ( v27 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v35 = v27[5];
            v27[5] = v35 + 1;
            if ( v35 == -1 )
LABEL_59:
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v36 = v26->SchedulerAssist;
          if ( v36 )
          {
            if ( v26->NestingLevel <= 1u )
            {
              v37 = v36[5] - 1;
              v36[5] = v37;
              if ( !v37 )
                KiRemoveSystemWorkPriorityKick(v26);
            }
          }
          do
            KeYieldProcessorEx(v44);
          while ( CurrentThread->ThreadLock );
          v38 = v26->SchedulerAssist;
          if ( v38 )
          {
            if ( v26->NestingLevel <= 1u )
            {
              v39 = v38[5];
              v38[5] = v39 + 1;
              if ( v39 == -1 )
                goto LABEL_59;
            }
          }
        }
        v5 = a3;
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      if ( !v9 )
      {
        CurrentThread->ThreadLock = 0LL;
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v40 = v18[5] - 1;
            v18[5] = v40;
            if ( !v40 )
            {
              KiRemoveSystemWorkPriorityKick(v17);
              v5 = a3;
            }
          }
        }
      }
      v19 = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      GroupIndex = v19->GroupIndex;
      v22 = 8LL * v19->Group + 280;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->Header.Lock + v22),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v24 = BugCheckParameter1->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v24 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x7000u, v24);
        KiSetAddressPolicy();
        v5 = a3;
      }
      LOBYTE(v8) = HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
      {
        LOBYTE(v8) = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
        v5 = a3;
      }
      else
      {
        __writecr3(DirectoryTableBase);
      }
      if ( !KiFlushPcid && KiKvaShadow )
      {
        v41 = __readcr4();
        if ( (v41 & 0x20080) != 0 )
        {
          LOBYTE(v8) = v41 ^ 0x80;
          __writecr4(v41 ^ 0x80);
          __writecr4(v41);
        }
        else
        {
          v8 = __readcr3();
          __writecr3(v8);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v22), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v9 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v42 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v42);
          v5 = a3;
        }
        LOBYTE(v8) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      *(_QWORD *)(v5 + 32) = 0LL;
    }
  }
  return v8;
}
