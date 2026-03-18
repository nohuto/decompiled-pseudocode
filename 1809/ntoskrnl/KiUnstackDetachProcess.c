/*
 * XREFs of KiUnstackDetachProcess @ 0x140017190
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FB50 (MmEnforceWorkingSetLimit.c)
 *     MiDeleteFinalPageTables @ 0x1400918B8 (MiDeleteFinalPageTables.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     NtUnlockVirtualMemory @ 0x1400B3D70 (NtUnlockVirtualMemory.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3E68 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmDetachSession @ 0x14011A5A0 (MmDetachSession.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D184 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeForceDetachProcess @ 0x140127F54 (KeForceDetachProcess.c)
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
 *     CmpCreateHive @ 0x1405A6574 (CmpCreateHive.c)
 *     ObpDecrementHandleCount @ 0x1405A9584 (ObpDecrementHandleCount.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1405AFC50 (CmpLateUnloadHiveWorker.c)
 *     CmpDelayDerefKCBWorker @ 0x1405B10B0 (CmpDelayDerefKCBWorker.c)
 *     EtwTraceAppStateChange @ 0x1405B2C80 (EtwTraceAppStateChange.c)
 *     CmpInitHiveFromFile @ 0x1405B3D68 (CmpInitHiveFromFile.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B7130 (NtQueryMultipleValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmpLinkHiveToMaster @ 0x1405B8C48 (CmpLinkHiveToMaster.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1405C19BC (EtwpRealtimeInjectEtwBuffer.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405CB1A0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     ObDuplicateObject @ 0x1405D0B70 (ObDuplicateObject.c)
 *     CmpDelayCloseWorker @ 0x1405D1760 (CmpDelayCloseWorker.c)
 *     CmpDetachFromRegistryProcess @ 0x1405D1AE8 (CmpDetachFromRegistryProcess.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D3890 (NtEnumerateValueKey.c)
 *     MmProbeAndLockProcessPages @ 0x1405D3FB0 (MmProbeAndLockProcessPages.c)
 *     CmEnumerateValueKey @ 0x1405D4080 (CmEnumerateValueKey.c)
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
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     MmCopyVirtualMemory @ 0x1406447B0 (MmCopyVirtualMemory.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     MiUnmapImageInSystemSpace @ 0x1406508AC (MiUnmapImageInSystemSpace.c)
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
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x140692B3C (CmpCleanUpKCBCacheTable.c)
 *     NtRollbackRegistryTransaction @ 0x1406932F0 (NtRollbackRegistryTransaction.c)
 *     NtCommitRegistryTransaction @ 0x140693430 (NtCommitRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140693A5C (CmpCleanupLightWeightTransaction.c)
 *     ExSweepHandleTable @ 0x140697AB0 (ExSweepHandleTable.c)
 *     PoEnergyContextStart @ 0x14069EB2C (PoEnergyContextStart.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4CA0 (EtwQueryProcessTelemetryInfo.c)
 *     PspWow64InitThread @ 0x1406A7F7C (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406A8D94 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmFlushVirtualMemory @ 0x1406B6C3C (MmFlushVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x1406BBBE8 (PspWow64SetupUserStack.c)
 *     NtFlushKey @ 0x1406BFF90 (NtFlushKey.c)
 *     PspSetupReservedUserMappings @ 0x1406C2020 (PspSetupReservedUserMappings.c)
 *     CmLoadKey @ 0x1406C8B98 (CmLoadKey.c)
 *     PspDeleteUserStack @ 0x1406CB090 (PspDeleteUserStack.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406CBD00 (SmProcessStoreMemoryPriorityRequest.c)
 *     CmRmFinalizeRecovery @ 0x1406CDC48 (CmRmFinalizeRecovery.c)
 *     MiInSwapStoreWorker @ 0x1406D0EE0 (MiInSwapStoreWorker.c)
 *     PspSetQuotaLimits @ 0x1406D1118 (PspSetQuotaLimits.c)
 *     MiCombineIdenticalPages @ 0x1406D1598 (MiCombineIdenticalPages.c)
 *     CmpTransMgrPrepare @ 0x1406FCDFC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1406FCFD0 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140701C4C (CmpCleanupTransactionState.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706594 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14070E7AC (CmpStartCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140726540 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14072A178 (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x1407325A0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x140755710 (PsStartSiloMonitor.c)
 *     CmpInitializeRegistryProcess @ 0x1407572EC (CmpInitializeRegistryProcess.c)
 *     PsCreateMinimalProcess @ 0x14075754C (PsCreateMinimalProcess.c)
 *     CmpHandlePageFileOpenNotification @ 0x140759604 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x14075CA68 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140760640 (MmInitializeHandBuiltProcess2.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 *     NtCompressKey @ 0x1407E91D0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1407E93B0 (NtFreezeRegistry.c)
 *     NtQueryOpenSubKeys @ 0x1407E95E0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407E9830 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407E9BA0 (NtRenameKey.c)
 *     NtRestoreKey @ 0x1407EA410 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EA6D0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1407EA980 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1407EABC0 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x1407EAC50 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x1407EB6C0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1407EB9A0 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x1407EBE10 (CmpPublishEventForPcaResolver.c)
 *     CmShutdownSystem @ 0x1407EC8D4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1407ECDE0 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1407EF15C (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1407EF43C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8CC (CmSetLastWriteTimeKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F12DC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F1A1C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C94 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x1407F4070 (CmpFlushBackupHive.c)
 *     CmReconcileAndValidateAllHives @ 0x1407F5D10 (CmReconcileAndValidateAllHives.c)
 *     CmpRmUnDoPhase @ 0x1407F93C0 (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x1407FB180 (CmpForceFlushWorker.c)
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
 *     EmpCacheBiosDate @ 0x1409BDAE4 (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x1409BDC18 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1409DF584 (PspInitPhase3.c)
 * Callees:
 *     KiSwapProcess @ 0x1400173C0 (KiSwapProcess.c)
 *     KiMoveApcState @ 0x140017480 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x1400174F0 (KiDecrementProcessStackCount.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KiDetachProcess @ 0x1400B9C80 (KiDetachProcess.c)
 *     KiReleaseThreadLockSafe @ 0x14010C3F0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1401BBB80 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r12
  int v6; // esi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  $FFD56A4B518EFE5E17FDE2C5CC486782 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  struct _KPRCB *v19; // rcx
  struct _KPRCB *v20; // rdi
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  struct _KPRCB *v27; // rcx
  int v28; // [rsp+60h] [rbp+8h] BYREF
  int v29; // [rsp+68h] [rbp+10h]
  int v30; // [rsp+70h] [rbp+18h] BYREF

  v29 = a2;
  result = *(_QWORD *)(a1 + 32);
  v3 = a2;
  if ( result != 1 )
  {
    if ( result )
    {
      return KiDetachProcess();
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
        v28 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = SchedulerAssist[5];
            SchedulerAssist[5] = v15 + 1;
            if ( v15 == -1 )
LABEL_36:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v13 = CurrentPrcb->SchedulerAssist;
          if ( v13 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v16 = v13[5] - 1;
              v13[5] = v16;
              if ( !v16 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
            }
          }
          do
            KeYieldProcessorEx(&v28);
          while ( CurrentThread->ThreadLock );
          v14 = CurrentPrcb->SchedulerAssist;
          if ( v14 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v17 = v14[5];
              v14[5] = v17 + 1;
              if ( v17 == -1 )
                goto LABEL_36;
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
            v19 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v19, v18);
          }
          __writecr8(0LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v20 = KeGetCurrentPrcb();
          v30 = 0;
          v21 = v20->SchedulerAssist;
          if ( v21 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v22 = v21[5];
              v21[5] = v22 + 1;
              if ( v22 == -1 )
LABEL_55:
                KiRemoveSystemWorkPriorityKick(v20, v18);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v23 = v20->SchedulerAssist;
            if ( v23 )
            {
              if ( v20->NestingLevel <= 1u )
              {
                v24 = v23[5] - 1;
                v23[5] = v24;
                if ( !v24 )
                  KiRemoveSystemWorkPriorityKick(v20, v18);
              }
            }
            do
              KeYieldProcessorEx(&v30);
            while ( CurrentThread->ThreadLock );
            v25 = v20->SchedulerAssist;
            if ( v25 )
            {
              if ( v20->NestingLevel <= 1u )
              {
                v26 = v25[5];
                v25[5] = v26 + 1;
                if ( v26 == -1 )
                  goto LABEL_55;
              }
            }
          }
        }
        while ( CurrentThread->ApcState.KernelApcPending );
        v3 = v29;
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v10 = &CurrentThread->152, ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v10->ApcState.ApcListHead[0].Flink != v10)
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
          v27 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v27, v11);
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      if ( (v3 & 1) == 0 )
        result = KiDecrementProcessStackCount(Process);
      if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        LOBYTE(v12) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(v12);
      }
    }
  }
  return result;
}
