/*
 * XREFs of KiUnstackDetachProcess @ 0x140090690
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     IoRemoveIoCompletion @ 0x140044840 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x14008E81C (KeForceDetachProcess.c)
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
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FE180 (CmKeyBodyRemapToVirtualForEnum.c)
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
 *     CmpTransMgrCommit @ 0x140632E20 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063302C (CmpTransMgrPrepare.c)
 *     EtwTraceAppStateChange @ 0x140634190 (EtwTraceAppStateChange.c)
 *     CmpInitHiveFromFile @ 0x1406365F8 (CmpInitHiveFromFile.c)
 *     ObpDecrementHandleCount @ 0x14063C254 (ObpDecrementHandleCount.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14063E8E8 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfWriteStateData @ 0x140640DCC (ExpWnfWriteStateData.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AAAC (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14064BDA8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcViewDestroyProcedure @ 0x14064C310 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x14064CABC (AlpcpRestoreWriteAccess.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14064CB80 (CmCallbackGetKeyObjectIDEx.c)
 *     MmProbeAndLockProcessPages @ 0x14064CCC0 (MmProbeAndLockProcessPages.c)
 *     MmCopyVirtualMemory @ 0x14064CFB0 (MmCopyVirtualMemory.c)
 *     CmEnumerateValueKey @ 0x14064DD70 (CmEnumerateValueKey.c)
 *     CmpDelayCloseWorker @ 0x14064E890 (CmpDelayCloseWorker.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     PfSnAsyncPrefetchWorker @ 0x14066A190 (PfSnAsyncPrefetchWorker.c)
 *     MiUnmapImageInSystemSpace @ 0x14066FFB0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MmDeleteTeb @ 0x140670684 (MmDeleteTeb.c)
 *     PsMapSystemDlls @ 0x140678F2C (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x140679A54 (PspSetupUserProcessAddressSpace.c)
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
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 *     CmpCleanUpKCBCacheTable @ 0x14069B610 (CmpCleanUpKCBCacheTable.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 *     MiInSwapStoreWorker @ 0x1406A4D30 (MiInSwapStoreWorker.c)
 *     MmPrefetchVirtualMemory @ 0x1406A58F8 (MmPrefetchVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BE140 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PspQueryQuotaLimits @ 0x1406C88E4 (PspQueryQuotaLimits.c)
 *     PspWow64InitThread @ 0x1406C94A8 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406CA310 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406DBFA0 (PspWow64SetupUserStack.c)
 *     NtRollbackRegistryTransaction @ 0x1406E1B40 (NtRollbackRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E1F44 (CmpCleanupLightWeightTransaction.c)
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     PspDeleteUserStack @ 0x1406EA7A4 (PspDeleteUserStack.c)
 *     MmProcessWorkingSetControl @ 0x1406F54B4 (MmProcessWorkingSetControl.c)
 *     MiCombineIdenticalPages @ 0x1406F6DC4 (MiCombineIdenticalPages.c)
 *     EtwpProcessEnumCallback @ 0x140707DB0 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14074E0B0 (MmCreateShadowMapping.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     CmpHandlePageFileOpenNotification @ 0x14077FE28 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x1407830A0 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407877B8 (MmInitializeHandBuiltProcess2.c)
 *     NtCompressKey @ 0x140823E30 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x140824010 (NtFreezeRegistry.c)
 *     NtQueryOpenSubKeys @ 0x140824220 (NtQueryOpenSubKeys.c)
 *     NtRestoreKey @ 0x140824F70 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140825240 (NtSaveKeyEx.c)
 *     NtThawRegistry @ 0x1408256F0 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x140825780 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x1408261C8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1408264E8 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x140826968 (CmpPublishEventForPcaResolver.c)
 *     CmReplaceKey @ 0x140829994 (CmReplaceKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082B5BC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmReconcileAndValidateAllHives @ 0x14082EADC (CmReconcileAndValidateAllHives.c)
 *     CmpFlushBackupHive @ 0x14083126C (CmpFlushBackupHive.c)
 *     CmpRmUnDoPhase @ 0x1408328AC (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x140834520 (CmpForceFlushWorker.c)
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
 *     EmpCacheBiosDate @ 0x1409F9810 (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x1409F9954 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1409FE5BC (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiDetachProcess @ 0x14003A6F0 (KiDetachProcess.c)
 *     KiSwapProcess @ 0x1400908B0 (KiSwapProcess.c)
 *     KiMoveApcState @ 0x140090970 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x1400909F0 (KiDecrementProcessStackCount.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 */

unsigned __int64 __fastcall KiUnstackDetachProcess(struct _KTHREAD *a1, int a2)
{
  unsigned __int64 result; // rax
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  int v6; // esi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  $6EAC78A6FCFADE0A5FA44F358736B38F *v10; // rdi
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rdi
  _DWORD *v19; // rcx
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  struct _KPRCB *v25; // rcx
  int v26; // [rsp+60h] [rbp+8h] BYREF
  int v27; // [rsp+68h] [rbp+10h]
  int v28; // [rsp+70h] [rbp+18h] BYREF

  v27 = a2;
  result = a1->QuantumTarget;
  v3 = a2;
  if ( result != 1 )
  {
    if ( result )
    {
      return KiDetachProcess(a1, a2);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      v6 = a2 & 2;
      if ( (a2 & 2) != 0 )
      {
        CurrentIrql = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = SchedulerAssist[5];
            SchedulerAssist[5] = v14 + 1;
            if ( v14 == -1 )
LABEL_35:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v12 = CurrentPrcb->SchedulerAssist;
          if ( v12 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v15 = v12[5] - 1;
              v12[5] = v15;
              if ( !v15 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v26);
          while ( CurrentThread->ThreadLock );
          v13 = CurrentPrcb->SchedulerAssist;
          if ( v13 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v16 = v13[5];
              v13[5] = v16 + 1;
              if ( v16 == -1 )
                goto LABEL_35;
            }
          }
        }
      }
      if ( CurrentThread->ApcState.KernelApcPending )
      {
        do
        {
          if ( CurrentIrql || CurrentThread->SpecialApcDisable )
            break;
          KiReleaseThreadLockSafe(CurrentThread);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v17);
          }
          __writecr8(0LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v18 = KeGetCurrentPrcb();
          v28 = 0;
          v19 = v18->SchedulerAssist;
          if ( v19 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v20 = v19[5];
              v19[5] = v20 + 1;
              if ( v20 == -1 )
LABEL_54:
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v21 = v18->SchedulerAssist;
            if ( v21 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v22 = v21[5] - 1;
                v21[5] = v22;
                if ( !v22 )
                  KiRemoveSystemWorkPriorityKick(v18);
              }
            }
            do
              KeYieldProcessorEx(&v28);
            while ( CurrentThread->ThreadLock );
            v23 = v18->SchedulerAssist;
            if ( v23 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v24 = v23[5];
                v23[5] = v24 + 1;
                if ( v24 == -1 )
                  goto LABEL_54;
              }
            }
          }
        }
        while ( CurrentThread->ApcState.KernelApcPending );
        v3 = v27;
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v10 = &CurrentThread->152, ($6EAC78A6FCFADE0A5FA44F358736B38F *)v10->ApcState.ApcListHead[0].Flink != v10)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      KiMoveApcState(&CurrentThread->600, &CurrentThread->152);
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v6 )
        KiReleaseThreadLockSafe(CurrentThread);
      result = KiSwapProcess(CurrentThread->ApcState.Process, Process);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v6 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v25 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v25);
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      if ( (v3 & 1) == 0 )
        result = KiDecrementProcessStackCount(Process);
      if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        LOBYTE(v11) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(v11);
      }
    }
  }
  return result;
}
