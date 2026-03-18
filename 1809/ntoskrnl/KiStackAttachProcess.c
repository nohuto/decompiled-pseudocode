/*
 * XREFs of KiStackAttachProcess @ 0x140016DB0
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FB50 (MmEnforceWorkingSetLimit.c)
 *     MiDeleteFinalPageTables @ 0x1400918B8 (MiDeleteFinalPageTables.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     NtUnlockVirtualMemory @ 0x1400B3D70 (NtUnlockVirtualMemory.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3E68 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmAttachSession @ 0x14011A630 (MmAttachSession.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D184 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PsQueryProcessCommandLine @ 0x14012A240 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x14012FB20 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140132200 (PspIsProcessReadyForRemoteThread.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013BC4C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14014F7A8 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiFlushAllPages @ 0x140153118 (MiFlushAllPages.c)
 *     SepAdtLogAuditRecord @ 0x140186DA0 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x140283150 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14028E678 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x14029C218 (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x1402A5698 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402B4274 (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1402BED54 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x1402CA860 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140302A88 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140302E34 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x14031E570 (ExpSvmServicePageFault.c)
 *     ObpDecrementHandleCount @ 0x1405A9584 (ObpDecrementHandleCount.c)
 *     EtwTraceAppStateChange @ 0x1405B2C80 (EtwTraceAppStateChange.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1405C19BC (EtwpRealtimeInjectEtwBuffer.c)
 *     ObDuplicateObject @ 0x1405D0B70 (ObDuplicateObject.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     MmProbeAndLockProcessPages @ 0x1405D3FB0 (MmProbeAndLockProcessPages.c)
 *     CmpAttachToRegistryProcess @ 0x1405D4048 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DD340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmDeleteTeb @ 0x1405DF66C (MmDeleteTeb.c)
 *     ObpIncrementHandleCountEx @ 0x1405E35F0 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405E6360 (ObCloseHandleTableEntry.c)
 *     MiAllocateVirtualMemory @ 0x1405ED650 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405EDD70 (NtProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x1405EE780 (NtResetWriteWatch.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405EF4F0 (MmFreeVirtualMemory.c)
 *     MiMapViewOfSection @ 0x1405EFB10 (MiMapViewOfSection.c)
 *     NtSetInformationVirtualMemory @ 0x1405F6680 (NtSetInformationVirtualMemory.c)
 *     PspWriteTebIdealProcessor @ 0x1405F72AC (PspWriteTebIdealProcessor.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     MmCreateTeb @ 0x1405F8848 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1405F8DD0 (PspSetupUserStack.c)
 *     PspChangeProcessExecutionState @ 0x1406035AC (PspChangeProcessExecutionState.c)
 *     PspRundownSingleProcess @ 0x140603A48 (PspRundownSingleProcess.c)
 *     MmAssignProcessToJob @ 0x140604944 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140604D74 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x140610CD0 (ExpWnfWriteStateData.c)
 *     AlpcViewDestroyProcedure @ 0x140616E90 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x1406171B0 (MiUnmapViewOfSection.c)
 *     AlpcpPrepareViewForDelivery @ 0x140617954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140617B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140618664 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpRestoreWriteAccess @ 0x140618FC0 (AlpcpRestoreWriteAccess.c)
 *     PspWriteTebImpersonationInfo @ 0x140637F50 (PspWriteTebImpersonationInfo.c)
 *     MmCopyVirtualMemory @ 0x1406447B0 (MmCopyVirtualMemory.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     MiMapImageInSystemSpace @ 0x140650E60 (MiMapImageInSystemSpace.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     PfSnPopulateReadList @ 0x14065F760 (PfSnPopulateReadList.c)
 *     PfSnAsyncPrefetchWorker @ 0x140666580 (PfSnAsyncPrefetchWorker.c)
 *     MmPrefetchVirtualMemory @ 0x14066BDC8 (MmPrefetchVirtualMemory.c)
 *     EtwpWriteProcessEvent @ 0x14066C6E4 (EtwpWriteProcessEvent.c)
 *     PspWritePebAffinityInfo @ 0x14066CE30 (PspWritePebAffinityInfo.c)
 *     PspQueryQuotaLimits @ 0x14066D5F8 (PspQueryQuotaLimits.c)
 *     PsMapSystemDlls @ 0x140677B90 (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x140677F8C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x140678550 (MmCreatePeb.c)
 *     MmInitializeProcessAddressSpace @ 0x1406798D8 (MmInitializeProcessAddressSpace.c)
 *     ObSetHandleAttributes @ 0x14068D8F0 (ObSetHandleAttributes.c)
 *     ExSweepHandleTable @ 0x140697AB0 (ExSweepHandleTable.c)
 *     PoEnergyContextStart @ 0x14069EB2C (PoEnergyContextStart.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4CA0 (EtwQueryProcessTelemetryInfo.c)
 *     PspWow64InitThread @ 0x1406A7F7C (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406A8D94 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmFlushVirtualMemory @ 0x1406B6C3C (MmFlushVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x1406BBBE8 (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406C2020 (PspSetupReservedUserMappings.c)
 *     PspDeleteUserStack @ 0x1406CB090 (PspDeleteUserStack.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406CBD00 (SmProcessStoreMemoryPriorityRequest.c)
 *     MiInSwapStoreWorker @ 0x1406D0EE0 (MiInSwapStoreWorker.c)
 *     PspSetQuotaLimits @ 0x1406D1118 (PspSetQuotaLimits.c)
 *     MiCombineIdenticalPages @ 0x1406D1598 (MiCombineIdenticalPages.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706594 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14070E7AC (CmpStartCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140726540 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14072A178 (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x1407325A0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x140755710 (PsStartSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x14075754C (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x14075CA68 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140760640 (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x14080E4AC (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x14080EA98 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14080ED28 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x14080EDD8 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x1408106DC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140810900 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x14081A238 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x14081A4F0 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x140845D1C (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x14084B1A8 (AlpcpForceUnlinkSecureView.c)
 *     NtAllocateUserPhysicalPages @ 0x1408506B0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140850F30 (NtFreeUserPhysicalPages.c)
 *     MiHotPatchAllProcesses @ 0x1408552A8 (MiHotPatchAllProcesses.c)
 *     MiQueryProcessActivePatches @ 0x140857BB0 (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x140858CE0 (MmIsFileMapped.c)
 *     MmDeleteShadowMapping @ 0x140858EEC (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x1408594AC (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14085A8E0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14085AD00 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14085AFD0 (NtLoadEnclaveData.c)
 *     MiCopyLargeVad @ 0x14085CD74 (MiCopyLargeVad.c)
 *     MiAllocateChildVads @ 0x14085DA18 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x14085E044 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x14085E388 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x14085E710 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14085EA90 (MiInSwapSharedWorkingSetWorker.c)
 *     MmProcessWorkingSetControl @ 0x14085EDA0 (MmProcessWorkingSetControl.c)
 *     MiScrubProcesses @ 0x14085FBE0 (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x14086570C (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x140887614 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1408883E0 (PsQueryProcessExceptionFlags.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1408891D0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x140889804 (PspApplyWorkingSetLimits.c)
 *     PspCreateSecureThread @ 0x14088AB6C (PspCreateSecureThread.c)
 *     PsUnregisterSiloMonitor @ 0x14088BAA0 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x14088CF00 (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x1408B0AD0 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1408B574C (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1408B59C0 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpTiQueryVad @ 0x1408BD550 (EtwpTiQueryVad.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408BF8A0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C2E00 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x1408C6520 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x140915030 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x1409BDC18 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1409DF584 (PspInitPhase3.c)
 * Callees:
 *     KiAttachProcess @ 0x140016BD0 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KiSetAddressPolicy @ 0x1400BA120 (KiSetAddressPolicy.c)
 *     KiReleaseThreadLockSafe @ 0x14010C3F0 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x14010C9A0 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402795C0 (HvlSwitchVirtualAddressSpace.c)
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
