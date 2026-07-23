/*
 * XREFs of KiStackAttachProcess @ 0x140016DB0
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FA70 (MmEnforceWorkingSetLimit.c)
 *     MiDeleteFinalPageTables @ 0x1400917F8 (MiDeleteFinalPageTables.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3F08 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D214 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PsQueryProcessCommandLine @ 0x14012A330 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x14012FC10 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1401322F0 (PspIsProcessReadyForRemoteThread.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013BD6C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14014F8C8 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiFlushAllPages @ 0x140153238 (MiFlushAllPages.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x140283440 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14028E968 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x14029C508 (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x1402A5988 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402B4564 (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1402BF044 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x1402CAB50 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140302D78 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140303124 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x14031E860 (ExpSvmServicePageFault.c)
 *     ObpDecrementHandleCount @ 0x1405AA584 (ObpDecrementHandleCount.c)
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1405C29BC (EtwpRealtimeInjectEtwBuffer.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     MmProbeAndLockProcessPages @ 0x1405D4FB0 (MmProbeAndLockProcessPages.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmDeleteTeb @ 0x1405E066C (MmDeleteTeb.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405EED70 (NtProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x1405EF780 (NtResetWriteWatch.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405F04F0 (MmFreeVirtualMemory.c)
 *     MiMapViewOfSection @ 0x1405F0B10 (MiMapViewOfSection.c)
 *     NtSetInformationVirtualMemory @ 0x1405F7680 (NtSetInformationVirtualMemory.c)
 *     PspWriteTebIdealProcessor @ 0x1405F82AC (PspWriteTebIdealProcessor.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     MmCreateTeb @ 0x1405F9848 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1405F9DD0 (PspSetupUserStack.c)
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 *     MmAssignProcessToJob @ 0x140605944 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605D74 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x140611CD0 (ExpWnfWriteStateData.c)
 *     AlpcViewDestroyProcedure @ 0x140617E90 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     AlpcpPrepareViewForDelivery @ 0x140618954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140618B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140619664 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpRestoreWriteAccess @ 0x140619FC0 (AlpcpRestoreWriteAccess.c)
 *     PspWriteTebImpersonationInfo @ 0x140638F70 (PspWriteTebImpersonationInfo.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     PfSnPopulateReadList @ 0x140660900 (PfSnPopulateReadList.c)
 *     PfSnAsyncPrefetchWorker @ 0x140667720 (PfSnAsyncPrefetchWorker.c)
 *     MmPrefetchVirtualMemory @ 0x14066CF68 (MmPrefetchVirtualMemory.c)
 *     EtwpWriteProcessEvent @ 0x14066D884 (EtwpWriteProcessEvent.c)
 *     PspWritePebAffinityInfo @ 0x14066DFD0 (PspWritePebAffinityInfo.c)
 *     PspQueryQuotaLimits @ 0x14066E798 (PspQueryQuotaLimits.c)
 *     PsMapSystemDlls @ 0x140678D30 (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1406796F0 (MmCreatePeb.c)
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 *     ObSetHandleAttributes @ 0x14068EA90 (ObSetHandleAttributes.c)
 *     ExSweepHandleTable @ 0x140698C50 (ExSweepHandleTable.c)
 *     PoEnergyContextStart @ 0x14069FDCC (PoEnergyContextStart.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A5F20 (EtwQueryProcessTelemetryInfo.c)
 *     PspWow64InitThread @ 0x1406A91FC (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406AA014 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x1406BCE68 (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406C32A0 (PspSetupReservedUserMappings.c)
 *     PspDeleteUserStack @ 0x1406CC310 (PspDeleteUserStack.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406CCF80 (SmProcessStoreMemoryPriorityRequest.c)
 *     MiInSwapStoreWorker @ 0x1406D2160 (MiInSwapStoreWorker.c)
 *     PspSetQuotaLimits @ 0x1406D2398 (PspSetQuotaLimits.c)
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140707814 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14070FA2C (CmpStartCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x1407277C0 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14072B348 (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407568E0 (PsStartSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x14075DC38 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140761810 (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x14080F68C (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x14080FC78 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14080FF08 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x14080FFB8 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x1408118BC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140811AE0 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x14081B418 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x14081B6D0 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x140846F5C (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x14084C3E8 (AlpcpForceUnlinkSecureView.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140852170 (NtFreeUserPhysicalPages.c)
 *     MiHotPatchAllProcesses @ 0x1408564E8 (MiHotPatchAllProcesses.c)
 *     MiQueryProcessActivePatches @ 0x140858DF0 (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x140859F20 (MmIsFileMapped.c)
 *     MmDeleteShadowMapping @ 0x14085A12C (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14085BB20 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14085BF40 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 *     MiCopyLargeVad @ 0x14085DFB4 (MiCopyLargeVad.c)
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x14085F5C8 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x14085F950 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14085FCD0 (MiInSwapSharedWorkingSetWorker.c)
 *     MmProcessWorkingSetControl @ 0x14085FFE0 (MmProcessWorkingSetControl.c)
 *     MiScrubProcesses @ 0x140860E20 (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x14086694C (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x140888854 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x140889620 (PsQueryProcessExceptionFlags.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x14088A410 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x14088AA44 (PspApplyWorkingSetLimits.c)
 *     PspCreateSecureThread @ 0x14088BDAC (PspCreateSecureThread.c)
 *     PsUnregisterSiloMonitor @ 0x14088CCE0 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x14088E140 (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x1408B1D10 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1408B69EC (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1408B6C60 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpTiQueryVad @ 0x1408BE7F0 (EtwpTiQueryVad.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408C0B40 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C40A0 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x1408C77C0 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x140916030 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x1409BEC18 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1409E0584 (PspInitPhase3.c)
 * Callees:
 *     KiAttachProcess @ 0x140016BD0 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSetAddressPolicy @ 0x1400BA080 (KiSetAddressPolicy.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x14010CA40 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402798B0 (HvlSwitchVirtualAddressSpace.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r13
  __int64 v5; // r10
  char v6; // r14
  unsigned __int64 v8; // rax
  int v9; // ebp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v12; // rdx
  $B00C2D09C1C60FFEAC19513EBB7C3DD3 *v13; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  struct _KTHREAD *v15; // r8
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rcx
  _KPROCESS *Process; // r12
  unsigned __int64 GroupIndex; // r15
  __int64 v21; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r14
  _DWORD *v26; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  unsigned __int64 v40; // rcx
  struct _KPRCB *v41; // rcx
  int v43[4]; // [rsp+30h] [rbp-48h] BYREF
  int v45; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  v5 = a3;
  v6 = a2;
  LOBYTE(v8) = (a2 & 2) == 0;
  if ( (((KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0) & (unsigned __int8)v8) != 0
    || (*(_DWORD *)&BugCheckParameter1->0 & 0x40000000) != 0 )
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
      v45 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = SchedulerAssist[5];
          SchedulerAssist[5] = v32 + 1;
          if ( v32 == -1 )
LABEL_49:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v29 = CurrentPrcb->SchedulerAssist;
        if ( v29 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v33 = v29[5] - 1;
            v29[5] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
          }
        }
        do
          KeYieldProcessorEx(&v45);
        while ( CurrentThread->ThreadLock );
        v30 = CurrentPrcb->SchedulerAssist;
        if ( v30 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v34 = v30[5];
            v30[5] = v34 + 1;
            if ( v34 == -1 )
              goto LABEL_49;
          }
        }
      }
      v5 = a3;
    }
    if ( CurrentThread->ApcStateIndex )
    {
      LOBYTE(v8) = KiAttachProcess((__int64)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql, v6, v5);
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
      if ( *(_DWORD **)v12 == v12 )
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
        v28 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v16->Flink = (struct _LIST_ENTRY *)v15;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v28;
        v15->Header.WaitListHead.Flink = v16;
        v28->Flink = v16;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      *(_QWORD *)v12 = v12;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      CurrentThread->ApcStateIndex = 1;
      if ( (v6 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        KiReleaseThreadLockSafe(CurrentThread);
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        v24 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v25 = KeGetCurrentPrcb();
        v43[0] = 0;
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v35 = v26[5];
            v26[5] = v35 + 1;
            if ( v35 == -1 )
LABEL_61:
              KiRemoveSystemWorkPriorityKick(v25, v12);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v31 = v25->SchedulerAssist;
          if ( v31 )
          {
            if ( v25->NestingLevel <= 1u )
            {
              v36 = v31[5] - 1;
              v31[5] = v36;
              if ( !v36 )
                KiRemoveSystemWorkPriorityKick(v25, v12);
            }
          }
          do
            KeYieldProcessorEx(v43);
          while ( CurrentThread->ThreadLock );
          v37 = v25->SchedulerAssist;
          if ( v37 )
          {
            if ( v25->NestingLevel <= 1u )
            {
              v38 = v37[5];
              v37[5] = v38 + 1;
              if ( v38 == -1 )
                goto LABEL_61;
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
        v12 = v17->SchedulerAssist;
        if ( v12 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v39 = v12[5] - 1;
            v12[5] = v39;
            if ( !v39 )
            {
              KiRemoveSystemWorkPriorityKick(v17, v12);
              v5 = a3;
            }
          }
        }
      }
      v18 = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      GroupIndex = v18->GroupIndex;
      v21 = 8LL * v18->Group + 280;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->Header.Lock + v21),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v23 = BugCheckParameter1->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v23 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x7000u, v23);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
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
        v40 = __readcr4();
        if ( (v40 & 0x20080) != 0 )
        {
          LOBYTE(v8) = v40 ^ 0x80;
          __writecr4(v40 ^ 0x80);
          __writecr4(v40);
        }
        else
        {
          v8 = __readcr3();
          __writecr3(v8);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v21), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v9 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v41 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v41, v12);
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
