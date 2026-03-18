/*
 * XREFs of KiUnstackDetachProcess @ 0x1400CDDC0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 *     IoRemoveIoCompletion @ 0x1400448E0 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MiDeleteFinalPageTables @ 0x14008E9B4 (MiDeleteFinalPageTables.c)
 *     KeForceDetachProcess @ 0x1400CBE04 (KeForceDetachProcess.c)
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
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
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
 *     CmpTransMgrCommit @ 0x140636410 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063661C (CmpTransMgrPrepare.c)
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     CmpInitHiveFromFile @ 0x140639858 (CmpInitHiveFromFile.c)
 *     ObpDecrementHandleCount @ 0x14063F2E4 (ObpDecrementHandleCount.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14064437C (MiUnmapImageInSystemSpace.c)
 *     MmPrefetchVirtualMemory @ 0x1406517C8 (MmPrefetchVirtualMemory.c)
 *     ExpWnfWriteStateData @ 0x14065491C (ExpWnfWriteStateData.c)
 *     AlpcpPrepareViewForDelivery @ 0x14065E724 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14065E96C (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcViewDestroyProcedure @ 0x14065FFA0 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x140660750 (AlpcpRestoreWriteAccess.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406608E0 (CmCallbackGetKeyObjectIDEx.c)
 *     MmProbeAndLockProcessPages @ 0x140660A20 (MmProbeAndLockProcessPages.c)
 *     CmEnumerateValueKey @ 0x140660F30 (CmEnumerateValueKey.c)
 *     CmpDelayCloseWorker @ 0x140661A50 (CmpDelayCloseWorker.c)
 *     PfSnAsyncPrefetchWorker @ 0x14066EA90 (PfSnAsyncPrefetchWorker.c)
 *     PsMapSystemDlls @ 0x14067E8A4 (PsMapSystemDlls.c)
 *     MmDeleteTeb @ 0x14067F450 (MmDeleteTeb.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067FB08 (PspSetupUserProcessAddressSpace.c)
 *     PspWritePebAffinityInfo @ 0x140680874 (PspWritePebAffinityInfo.c)
 *     MmNewProcessInitialized @ 0x1406835E4 (MmNewProcessInitialized.c)
 *     EtwpWriteProcessEvent @ 0x140683A74 (EtwpWriteProcessEvent.c)
 *     ExSweepHandleTable @ 0x140686480 (ExSweepHandleTable.c)
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 *     PoEnergyContextStart @ 0x140687234 (PoEnergyContextStart.c)
 *     PspChangeProcessExecutionState @ 0x140687F94 (PspChangeProcessExecutionState.c)
 *     MmAssignProcessToJob @ 0x1406881E0 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140688620 (PspApplyWorkingSetLimitsToProcess.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     CmpCleanUpKCBCacheTable @ 0x1406BA5C8 (CmpCleanUpKCBCacheTable.c)
 *     CmpCleanupTransactionState @ 0x1406BBB5C (CmpCleanupTransactionState.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BDBF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PspQueryQuotaLimits @ 0x1406C6C14 (PspQueryQuotaLimits.c)
 *     PspWow64InitThread @ 0x1406C7EC0 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406C8D28 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406DCC28 (PspWow64SetupUserStack.c)
 *     NtRollbackRegistryTransaction @ 0x1406E31C0 (NtRollbackRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E35C4 (CmpCleanupLightWeightTransaction.c)
 *     PspSetupReservedUserMappings @ 0x1406E45CC (PspSetupReservedUserMappings.c)
 *     NtFlushKey @ 0x1406E5920 (NtFlushKey.c)
 *     PspDeleteUserStack @ 0x1406EB994 (PspDeleteUserStack.c)
 *     MiInSwapStoreWorker @ 0x1406F4D30 (MiInSwapStoreWorker.c)
 *     MmProcessWorkingSetControl @ 0x1406F7278 (MmProcessWorkingSetControl.c)
 *     MiCombineIdenticalPages @ 0x1406F8B84 (MiCombineIdenticalPages.c)
 *     EtwpProcessEnumCallback @ 0x140709B90 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14074EB40 (MmCreateShadowMapping.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     CmpHandlePageFileOpenNotification @ 0x140782848 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x140785400 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140789C18 (MmInitializeHandBuiltProcess2.c)
 *     NtCompressKey @ 0x140823530 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x140823710 (NtFreezeRegistry.c)
 *     NtQueryOpenSubKeys @ 0x140823920 (NtQueryOpenSubKeys.c)
 *     NtRestoreKey @ 0x140824670 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140824940 (NtSaveKeyEx.c)
 *     NtThawRegistry @ 0x140824DF0 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x140824E80 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x1408258C8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140825BE8 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x140826068 (CmpPublishEventForPcaResolver.c)
 *     CmReplaceKey @ 0x140829094 (CmReplaceKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
 *     CmReconcileAndValidateAllHives @ 0x14082E94C (CmReconcileAndValidateAllHives.c)
 *     CmpRmUnDoPhase @ 0x140831EFC (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x140833B80 (CmpForceFlushWorker.c)
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
 *     EmpCacheBiosDate @ 0x1409F9720 (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x1409F9864 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1409FEAD8 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
 *     KiSwapProcess @ 0x1400CDFE0 (KiSwapProcess.c)
 *     KiMoveApcState @ 0x1400CE0A0 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x1400CE120 (KiDecrementProcessStackCount.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1401C4680 (KeBugCheck.c)
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
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v10; // rdi
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
        || (v10 = &CurrentThread->152, ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v10->ApcState.ApcListHead[0].Flink != v10)
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
      if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        LOBYTE(v11) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(v11);
      }
    }
  }
  return result;
}
