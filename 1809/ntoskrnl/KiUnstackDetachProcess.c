/*
 * XREFs of KiUnstackDetachProcess @ 0x140017190
 * Callers:
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FA70 (MmEnforceWorkingSetLimit.c)
 *     MiDeleteFinalPageTables @ 0x1400917F8 (MiDeleteFinalPageTables.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3F08 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D214 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeForceDetachProcess @ 0x140128044 (KeForceDetachProcess.c)
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
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     ObpDecrementHandleCount @ 0x1405AA584 (ObpDecrementHandleCount.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1405B0C50 (CmpLateUnloadHiveWorker.c)
 *     CmpDelayDerefKCBWorker @ 0x1405B20B0 (CmpDelayDerefKCBWorker.c)
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1405C29BC (EtwpRealtimeInjectEtwBuffer.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405CC1A0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     CmpDelayCloseWorker @ 0x1405D2760 (CmpDelayCloseWorker.c)
 *     CmpDetachFromRegistryProcess @ 0x1405D2AE8 (CmpDetachFromRegistryProcess.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 *     MmProbeAndLockProcessPages @ 0x1405D4FB0 (MmProbeAndLockProcessPages.c)
 *     CmEnumerateValueKey @ 0x1405D5080 (CmEnumerateValueKey.c)
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
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
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
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x140693CDC (CmpCleanUpKCBCacheTable.c)
 *     NtRollbackRegistryTransaction @ 0x140694490 (NtRollbackRegistryTransaction.c)
 *     NtCommitRegistryTransaction @ 0x1406945D0 (NtCommitRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140694BFC (CmpCleanupLightWeightTransaction.c)
 *     ExSweepHandleTable @ 0x140698C50 (ExSweepHandleTable.c)
 *     PoEnergyContextStart @ 0x14069FDCC (PoEnergyContextStart.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A5F20 (EtwQueryProcessTelemetryInfo.c)
 *     PspWow64InitThread @ 0x1406A91FC (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406AA014 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x1406BCE68 (PspWow64SetupUserStack.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     PspSetupReservedUserMappings @ 0x1406C32A0 (PspSetupReservedUserMappings.c)
 *     CmLoadKey @ 0x1406C9E18 (CmLoadKey.c)
 *     PspDeleteUserStack @ 0x1406CC310 (PspDeleteUserStack.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406CCF80 (SmProcessStoreMemoryPriorityRequest.c)
 *     CmRmFinalizeRecovery @ 0x1406CEEC8 (CmRmFinalizeRecovery.c)
 *     MiInSwapStoreWorker @ 0x1406D2160 (MiInSwapStoreWorker.c)
 *     PspSetQuotaLimits @ 0x1406D2398 (PspSetQuotaLimits.c)
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 *     CmpTransMgrPrepare @ 0x1406FE07C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1406FE250 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140702ECC (CmpCleanupTransactionState.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140707814 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14070FA2C (CmpStartCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x1407277C0 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14072B348 (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407568E0 (PsStartSiloMonitor.c)
 *     CmpInitializeRegistryProcess @ 0x1407584BC (CmpInitializeRegistryProcess.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     CmpHandlePageFileOpenNotification @ 0x14075A7D4 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x14075DC38 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140761810 (MmInitializeHandBuiltProcess2.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     NtCompressKey @ 0x1407EA3B0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1407EA590 (NtFreezeRegistry.c)
 *     NtQueryOpenSubKeys @ 0x1407EA7C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407EAA10 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 *     NtRestoreKey @ 0x1407EB5F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EB8B0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1407EBB60 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1407EBDA0 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x1407EBE30 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x1407EC8A0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1407ECB80 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x1407ECFF0 (CmpPublishEventForPcaResolver.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1407EDFC0 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1407F033C (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1407F061C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407F0AAC (CmSetLastWriteTimeKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F24BC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F2BFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x1407F5250 (CmpFlushBackupHive.c)
 *     CmReconcileAndValidateAllHives @ 0x1407F6EF0 (CmReconcileAndValidateAllHives.c)
 *     CmpRmUnDoPhase @ 0x1407FA5A0 (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x1407FC360 (CmpForceFlushWorker.c)
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
 *     EmpCacheBiosDate @ 0x1409BEAE4 (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x1409BEC18 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1409E0584 (PspInitPhase3.c)
 * Callees:
 *     KiSwapProcess @ 0x1400173C0 (KiSwapProcess.c)
 *     KiMoveApcState @ 0x140017480 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x1400174F0 (KiDecrementProcessStackCount.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiDetachProcess @ 0x1400B9BE0 (KiDetachProcess.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
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
