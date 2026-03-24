/*
 * XREFs of ExReleasePushLockEx @ 0x14004F160
 * Callers:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     EtwpUnlockBufferList @ 0x140015480 (EtwpUnlockBufferList.c)
 *     ObpReleaseLookupContext @ 0x140016078 (ObpReleaseLookupContext.c)
 *     CcGetVirtualAddressIfMapped @ 0x14002037C (CcGetVirtualAddressIfMapped.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14004E450 (FsRtlLookupPerStreamContextInternal.c)
 *     CcUnmapVacbArray @ 0x1400798E0 (CcUnmapVacbArray.c)
 *     PoGetIdleTimes @ 0x1400A7320 (PoGetIdleTimes.c)
 *     CcGetVirtualAddress @ 0x1400AFC40 (CcGetVirtualAddress.c)
 *     NtTraceEvent @ 0x1400CB4B0 (NtTraceEvent.c)
 *     CcAllocateInitializeBcb @ 0x1400CC318 (CcAllocateInitializeBcb.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E00D8 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1400E02DC (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1DA0 (CcCompleteAsyncReadWorker.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140108C50 (FsRtlLookupPerFileObjectContext.c)
 *     ObpUnlockDirectory @ 0x140109F18 (ObpUnlockDirectory.c)
 *     FsRtlLookupPerFileContext @ 0x1401121B0 (FsRtlLookupPerFileContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140114030 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114120 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1401142F0 (FsRtlInsertPerStreamContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117BA0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlInsertPerFileContext @ 0x1401291D0 (FsRtlInsertPerFileContext.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14012CED4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAsyncReadWorkerThread @ 0x14013FAD0 (CcAsyncReadWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1401403B0 (CcAsyncReadWorker.c)
 *     PnpDeviceActionWorker @ 0x14015F300 (PnpDeviceActionWorker.c)
 *     CcGetNumberOfMappedPages @ 0x140166AB0 (CcGetNumberOfMappedPages.c)
 *     IopCleanupNotifications @ 0x14016AA38 (IopCleanupNotifications.c)
 *     ExpUnlockCallbackListExclusive @ 0x140177618 (ExpUnlockCallbackListExclusive.c)
 *     FsRtlRemovePerFileContext @ 0x1402707C0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1402708C0 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x1402898F8 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402D7E80 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopReleaseAwaymodeLock @ 0x14056635C (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x14057E4C0 (ExShutdownSystem.c)
 *     PopReleaseUmpoPushLock @ 0x140589AD0 (PopReleaseUmpoPushLock.c)
 *     PopUmpoProcessMessage @ 0x14058AF88 (PopUmpoProcessMessage.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405902D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x140590640 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x140590B08 (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x140591044 (PiDqQuerySerializeActionQueue.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140597CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059824C (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405986C4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140598D6C (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140599A98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x14059A4DC (PiDmObjectIsEnumerable.c)
 *     CmpCreateHive @ 0x1405A6574 (CmpCreateHive.c)
 *     ObpDecrementHandleCount @ 0x1405A9584 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1405A9740 (ObpDeleteNameCheck.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405AA470 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1405AA748 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1405ACAE4 (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x1405AD6F8 (CmpFreeKeyByCell.c)
 *     CmpDeleteHive @ 0x1405AFDEC (CmpDeleteHive.c)
 *     UnlockShutdown @ 0x1405B00CC (UnlockShutdown.c)
 *     CmpUnlockHiveList @ 0x1405B0118 (CmpUnlockHiveList.c)
 *     CmpGetNextActiveHive @ 0x1405B1474 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B1514 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B1640 (CmpLockRegistryFreezeAware.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     EtwpQueueNotification @ 0x1405C054C (EtwpQueueNotification.c)
 *     EtwpFreeGuidEntry @ 0x1405C0920 (EtwpFreeGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1405C0A0C (EtwpAddGuidEntry.c)
 *     EtwpReceiveNotification @ 0x1405C0E00 (EtwpReceiveNotification.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1405C1198 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C2750 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405C3970 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405C3E20 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405C4714 (EtwpRundownNotifications.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C4D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C8A30 (ObSetSecurityDescriptorInfo.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1405D00F0 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x1405D19F8 (CmpUnlockHashEntry.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1405D5EB0 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockNameHashEntry @ 0x1405D671C (CmpUnlockNameHashEntry.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 *     CmpUnlockKcb @ 0x1405E3580 (CmpUnlockKcb.c)
 *     ObpIncrementHandleCountEx @ 0x1405E35F0 (ObpIncrementHandleCountEx.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1405E5AE0 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1405E6060 (CmpCallbackFillObjectContext.c)
 *     ObCloseHandleTableEntry @ 0x1405E6360 (ObCloseHandleTableEntry.c)
 *     ObDereferenceDeviceMap @ 0x140608F0C (ObDereferenceDeviceMap.c)
 *     NtQuerySymbolicLinkObject @ 0x140625E20 (NtQuerySymbolicLinkObject.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 *     ObpCallPreOperationCallbacks @ 0x1406370E0 (ObpCallPreOperationCallbacks.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140638AF0 (FsRtlTeardownPerStreamContexts.c)
 *     CmpOKToFollowLink @ 0x1406411D0 (CmpOKToFollowLink.c)
 *     CmpUnlockKcbStack @ 0x1406440C0 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406441A0 (CmpDereferenceKeyControlBlock.c)
 *     CmQueryValueKey @ 0x140645190 (CmQueryValueKey.c)
 *     ObpFreeObject @ 0x140645F40 (ObpFreeObject.c)
 *     NtCreatePrivateNamespace @ 0x140654360 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406545AC (ObpRegisterPrivateNamespace.c)
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140658888 (EtwpNotifyGuid.c)
 *     ObQueryDeviceMapInformation @ 0x140671540 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1406719C0 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140671AB0 (ObpReferenceDeviceMap.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14068DA60 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14068DAD8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068E194 (ObpDeleteSymbolicLinkName.c)
 *     CmLockKeyForWrite @ 0x14068E360 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x14068E5A4 (CmpGlobalLockKeyForWrite.c)
 *     CmpGetCallbackObjectContext @ 0x14069C0B8 (CmpGetCallbackObjectContext.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A2CA4 (ObSetCurrentProcessDeviceMap.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406A3910 (FsRtlTeardownPerFileContexts.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406B3840 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406B64CC (ObpRemoveNamespaceFromTable.c)
 *     PiDqIrpQueryGetResult @ 0x1406BE1DC (PiDqIrpQueryGetResult.c)
 *     EtwpRegisterProvider @ 0x1406BE5AC (EtwpRegisterProvider.c)
 *     WdipTimeoutCheckRoutine @ 0x1406BF450 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406BF4FC (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BF584 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     ExpWatchProductTypeWork @ 0x1406BF910 (ExpWatchProductTypeWork.c)
 *     EtwpFreeLoggerContext @ 0x1406C08A0 (EtwpFreeLoggerContext.c)
 *     CmpGetLastHive @ 0x1406C22F4 (CmpGetLastHive.c)
 *     NtOpenPrivateNamespace @ 0x1406C25D0 (NtOpenPrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x1406C2AF8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C2F04 (EtwpRealtimeDisconnectConsumer.c)
 *     ObCheckActiveHandles @ 0x1406C43E8 (ObCheckActiveHandles.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C4440 (ObpCreateSymbolicLinkName.c)
 *     ObpSetDeviceMap @ 0x1406C697C (ObpSetDeviceMap.c)
 *     ObMakeTemporaryObject @ 0x1406C73D0 (ObMakeTemporaryObject.c)
 *     EtwpStopLoggerInstance @ 0x1406CB854 (EtwpStopLoggerInstance.c)
 *     ExpGetNextCallback @ 0x1406CDB40 (ExpGetNextCallback.c)
 *     CmpEnumerateCallback @ 0x1406D0710 (CmpEnumerateCallback.c)
 *     CmUnlockHiveSecurity @ 0x1406D0B08 (CmUnlockHiveSecurity.c)
 *     NtMakePermanentObject @ 0x1406D6820 (NtMakePermanentObject.c)
 *     ObRevokeHandles @ 0x1406E1D34 (ObRevokeHandles.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F221C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406F2A84 (PiDmObjectGetCachedObjectReference.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F74E0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F7878 (PiDqQueryApplyObjectEvent.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1406FFD04 (CmpUnlockTwoSecurityCaches.c)
 *     PiDmListAddList @ 0x140700890 (PiDmListAddList.c)
 *     PiDmListAddObject @ 0x14070288C (PiDmListAddObject.c)
 *     EtwUnregister @ 0x140707370 (EtwUnregister.c)
 *     IopRegisterDeviceInterface @ 0x140709AD4 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x14070F8F8 (IopProcessSetInterfaceState.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140716788 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407168D4 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x1407174C4 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140717614 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x14071774C (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x140717A08 (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x140717ACC (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140717C34 (WdipSemEnableContextProvider.c)
 *     EtwpTrackProviderBinary @ 0x14071D48C (EtwpTrackProviderBinary.c)
 *     ObCreateObjectTypeEx @ 0x1407289DC (ObCreateObjectTypeEx.c)
 *     CmpStartSiloKeyLockTracker @ 0x14073076C (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x140732580 (CmpFinishSystemHivesLoad.c)
 *     EtwInitializeSiloState @ 0x140741434 (EtwInitializeSiloState.c)
 *     WdipSemInitialize @ 0x140743440 (WdipSemInitialize.c)
 *     WdipSemAllocatePool @ 0x140751C7C (WdipSemAllocatePool.c)
 *     ObRegisterCallbacks @ 0x14075AB70 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x14075AD44 (ObpInsertCallbackByAltitude.c)
 *     CmpAssignKeySecurity @ 0x14075B95C (CmpAssignKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x14075BB98 (CmpCreateHiveRootCell.c)
 *     ObIsDosDeviceLocallyMapped @ 0x14075E170 (ObIsDosDeviceLocallyMapped.c)
 *     CmpInsertCallbackInListByAltitude @ 0x14075F1FC (CmpInsertCallbackInListByAltitude.c)
 *     IoRegisterContainerNotification @ 0x14075FFE0 (IoRegisterContainerNotification.c)
 *     EtwpTracingProvEnableCallback @ 0x1407642F0 (EtwpTracingProvEnableCallback.c)
 *     CmSetCallbackObjectContext @ 0x1407EADD0 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1407EB010 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EB544 (CmpFreeCallbackObjectContexts.c)
 *     CmShutdownSystem @ 0x1407EC8B4 (CmShutdownSystem.c)
 *     CmpSyncNextBackupHive @ 0x1407F4538 (CmpSyncNextBackupHive.c)
 *     CmThawRegistry @ 0x1407F5A74 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F5F10 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x1407F6030 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x1407F6240 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x1407F95A4 (CmpUnlockHashEntryByIndex.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FC8A8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmDumpKey @ 0x140801198 (CmDumpKey.c)
 *     CmSaveMergedKeys @ 0x1408022FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14080D3A4 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080D708 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x14080DCBC (VrpUnloadDifferencingHive.c)
 *     IoUnregisterContainerNotification @ 0x14081D620 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140828D2C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x14082957C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x1408296DC (PiDmListRemoveObject.c)
 *     PiDqQueryUnlock @ 0x14082B204 (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x140860B80 (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x140860D0C (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408611A0 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140861260 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x140861A70 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x1408622E8 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140862430 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408695F4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     WdipSemUpdate @ 0x1408B0BBC (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1408B10CC (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B50A4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B5358 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1408B5B64 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1408B5E78 (EtwpGetTraceGuidInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408BFC30 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408BFCFC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408BFE24 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1408C0098 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C0620 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C2DE0 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfReleasePushLock @ 0x140091480 (ExfReleasePushLock.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F558 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14013A7A0 (KiAbThreadUnboostIoPriority.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14030F9A8 (EtwTraceAutoBoostClearFloor.c)
 */

__int64 __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rdi
  int v9; // ebx
  unsigned int SessionId; // r8d
  BOOL v11; // r12d
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  char *v16; // rsi
  unsigned int v17; // eax
  unsigned __int8 v18; // r15
  char v19; // [rsp+6Ah] [rbp+12h]

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw((const void *)BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v7 = *(_QWORD *)BugCheckParameter2,
        result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4),
        v7 != result) )
  {
    result = ExfReleasePushLock(BugCheckParameter2, v5);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    v19 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_14043B950[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount == 1;
    LODWORD(v12) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      goto LABEL_27;
    while ( 1 )
    {
      v15 = 1 << v14;
      v14 *= 96LL;
      v16 = (char *)CurrentThread->LockEntries + v14;
      v12 = ~v15 & (unsigned int)v12;
      if ( (v16[26] & 1) != 0
        && (*((_DWORD *)v16 + 8) & 1) == 0
        && (*((_QWORD *)v16 + 4) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *((_DWORD *)v16 + 10) == SessionId )
      {
        v16[26] &= ~1u;
        if ( *((_QWORD *)v16 + 4) )
          break;
      }
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      if ( v13 )
        goto LABEL_27;
    }
    if ( !v16 )
    {
LABEL_27:
      result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
      if ( (result & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      v16[32] |= 2u;
      if ( *((__int64 *)v16 + 4) < 0 )
        KiAbEntryRemoveFromTree((__int64)CurrentThread->LockEntries + v14, v12);
      v9 = *((_DWORD *)v16 + 22) & 0x1FFFF;
      v17 = *((_DWORD *)v16 + 22) & 0xFFFE0000;
      v16[25] &= ~1u;
      v19 = BYTE2(v9);
      *((_DWORD *)v16 + 22) = v17;
      *((_QWORD *)v16 + 4) = 0LL;
      result = 0x2AAAAAAAAAAAAAABLL * (v16 - (char *)CurrentThread - 800);
      v14 = (v16 - (char *)CurrentThread - 800) / 96;
      v18 = 1 << v14;
      if ( v11 )
        CurrentThread->AbEntrySummary |= v18;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v18);
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v9 & 0x1FFFF) != 0 )
    {
      if ( (v9 & 0x8000u) != 0 )
        KiAbThreadUnboostIoPriority(CurrentThread, 0LL);
      if ( (v19 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
        _InterlockedDecrement((volatile signed __int32 *)&CurrentThread[1].Timer.DueTime.HighPart);
      }
      result = 0x7FFFLL;
      if ( (v9 & 0x7FFF) != 0 )
        result = KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        result = EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v9 & 0x1FFFF);
    }
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      return KiCheckForKernelApcDelivery(v14);
  }
  return result;
}
