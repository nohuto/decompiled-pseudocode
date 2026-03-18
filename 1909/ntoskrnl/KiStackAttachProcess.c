/*
 * XREFs of KiStackAttachProcess @ 0x1400CD9F0
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     IoRemoveIoCompletion @ 0x1400448E0 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     MiDeleteFinalPageTables @ 0x14008E9B4 (MiDeleteFinalPageTables.c)
 *     KeForceAttachProcess @ 0x1400CBE6C (KeForceAttachProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x1400EAB6C (MmEnforceWorkingSetLimit.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     PsQueryProcessCommandLine @ 0x14012CA00 (PsQueryProcessCommandLine.c)
 *     SepAdtLogAuditRecord @ 0x14012D67C (SepAdtLogAuditRecord.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140131B60 (PspIsProcessReadyForRemoteThread.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013E614 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140165264 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiFlushAllPages @ 0x14016A738 (MiFlushAllPages.c)
 *     MiEmptyAccessLogs @ 0x14017D570 (MiEmptyAccessLogs.c)
 *     IoRaiseHardError @ 0x1402983C0 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1402A4F9C (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x1402AD7A0 (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x1402BC874 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402C9574 (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1402D8538 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x1402E4A0C (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14031FF8C (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140320348 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x14033E0A0 (ExpSvmServicePageFault.c)
 *     AlpcpForceUnlinkSecureView @ 0x1405B569C (AlpcpForceUnlinkSecureView.c)
 *     PspWriteTebImpersonationInfo @ 0x1405DEEC0 (PspWriteTebImpersonationInfo.c)
 *     PspWriteTebIdealProcessor @ 0x1405E7900 (PspWriteTebIdealProcessor.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5FC0 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F65C0 (ObCloseHandleTableEntry.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140605410 (NtProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140605A40 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x1406086D0 (MmFreeVirtualMemory.c)
 *     MiMapViewOfSection @ 0x14060A890 (MiMapViewOfSection.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 *     MmCreateTeb @ 0x14061001C (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1406105A0 (PspSetupUserStack.c)
 *     ObSetHandleAttributes @ 0x140610BE0 (ObSetHandleAttributes.c)
 *     MmFlushVirtualMemory @ 0x14062450C (MmFlushVirtualMemory.c)
 *     PfSnPopulateReadList @ 0x14062BF40 (PfSnPopulateReadList.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140633654 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     ObpDecrementHandleCount @ 0x14063F2E4 (ObpDecrementHandleCount.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MmPrefetchVirtualMemory @ 0x1406517C8 (MmPrefetchVirtualMemory.c)
 *     ExpWnfWriteStateData @ 0x14065491C (ExpWnfWriteStateData.c)
 *     AlpcpPrepareViewForDelivery @ 0x14065E724 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14065E96C (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcViewDestroyProcedure @ 0x14065FFA0 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x140660750 (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x140660A20 (MmProbeAndLockProcessPages.c)
 *     CmEnumerateValueKey @ 0x140660F30 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     PfSnAsyncPrefetchWorker @ 0x14066EA90 (PfSnAsyncPrefetchWorker.c)
 *     PsMapSystemDlls @ 0x14067E8A4 (PsMapSystemDlls.c)
 *     MmDeleteTeb @ 0x14067F450 (MmDeleteTeb.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067FB08 (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1406800CC (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x140680874 (PspWritePebAffinityInfo.c)
 *     MmNewProcessInitialized @ 0x1406835E4 (MmNewProcessInitialized.c)
 *     EtwpWriteProcessEvent @ 0x140683A74 (EtwpWriteProcessEvent.c)
 *     ExSweepHandleTable @ 0x140686480 (ExSweepHandleTable.c)
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 *     PoEnergyContextStart @ 0x140687234 (PoEnergyContextStart.c)
 *     PspChangeProcessExecutionState @ 0x140687F94 (PspChangeProcessExecutionState.c)
 *     MmAssignProcessToJob @ 0x1406881E0 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140688620 (PspApplyWorkingSetLimitsToProcess.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BDBF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PspQueryQuotaLimits @ 0x1406C6C14 (PspQueryQuotaLimits.c)
 *     PspWow64InitThread @ 0x1406C7EC0 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406C8D28 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406DCC28 (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406E45CC (PspSetupReservedUserMappings.c)
 *     PspDeleteUserStack @ 0x1406EB994 (PspDeleteUserStack.c)
 *     MiInSwapStoreWorker @ 0x1406F4D30 (MiInSwapStoreWorker.c)
 *     MmProcessWorkingSetControl @ 0x1406F7278 (MmProcessWorkingSetControl.c)
 *     MiCombineIdenticalPages @ 0x1406F8B84 (MiCombineIdenticalPages.c)
 *     EtwpProcessEnumCallback @ 0x140709B90 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14074EB40 (MmCreateShadowMapping.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x140785400 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140789C18 (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x1408473EC (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x140847A20 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140847CC0 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x14084966C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1408498A0 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x14085381C (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140853B00 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x14087FDCC (KiTpReadImageData.c)
 *     MiHotPatchAllProcesses @ 0x14088DF0C (MiHotPatchAllProcesses.c)
 *     MiQueryProcessActivePatches @ 0x140890DDC (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x140892178 (MmIsFileMapped.c)
 *     MmDeleteShadowMapping @ 0x140892398 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140893BE0 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x140894398 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408946B4 (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x1408947D0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140894C00 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x140894EE0 (NtLoadEnclaveData.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140896F50 (NtFreeUserPhysicalPages.c)
 *     MiCopyLargeVad @ 0x140899158 (MiCopyLargeVad.c)
 *     MiAllocateChildVads @ 0x14089A0E0 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x14089A6F4 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x14089AA4C (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x14089ADD0 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14089B150 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x14089CB70 (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408A1420 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x1408C5BF0 (PsQueryProcessExceptionFlags.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1408C69B0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x1408C8470 (PspCreateSecureThread.c)
 *     PspIumGetPhysicalPage @ 0x1408CAD18 (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x1408ED850 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1408F1EEC (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1408F2170 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpTiQueryVad @ 0x1408F9AE0 (EtwpTiQueryVad.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC040 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408FF944 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409032B0 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x1409F9864 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1409FEAD8 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x140043560 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x140043BF0 (KiSetAddressPolicy.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x140109250 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14028D770 (HvlSwitchVirtualAddressSpace.c)
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
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v12; // rdx
  $B3BA4C768623B88C7BF94E30725A7E5E *v13; // rsi
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
      if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v12->ApcState.ApcListHead[0].Flink == v12 )
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
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
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
