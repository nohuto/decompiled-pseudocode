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
 *     PoGetIdleTimes @ 0x1400A7300 (PoGetIdleTimes.c)
 *     CcGetVirtualAddress @ 0x1400AFC20 (CcGetVirtualAddress.c)
 *     NtTraceEvent @ 0x1400CB490 (NtTraceEvent.c)
 *     CcAllocateInitializeBcb @ 0x1400CC2F8 (CcAllocateInitializeBcb.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E00B8 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1400E02BC (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1D80 (CcCompleteAsyncReadWorker.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140108C30 (FsRtlLookupPerFileObjectContext.c)
 *     ObpUnlockDirectory @ 0x140109EF8 (ObpUnlockDirectory.c)
 *     FsRtlLookupPerFileContext @ 0x140112190 (FsRtlLookupPerFileContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140114010 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114100 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1401142D0 (FsRtlInsertPerStreamContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117B80 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlInsertPerFileContext @ 0x1401291B0 (FsRtlInsertPerFileContext.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14012CEB4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAsyncReadWorkerThread @ 0x14013FAB0 (CcAsyncReadWorkerThread.c)
 *     CcAsyncReadWorker @ 0x140140390 (CcAsyncReadWorker.c)
 *     PnpDeviceActionWorker @ 0x14015F2E0 (PnpDeviceActionWorker.c)
 *     CcGetNumberOfMappedPages @ 0x140166A90 (CcGetNumberOfMappedPages.c)
 *     IopCleanupNotifications @ 0x14016AA18 (IopCleanupNotifications.c)
 *     ExpUnlockCallbackListExclusive @ 0x1401775F8 (ExpUnlockCallbackListExclusive.c)
 *     FsRtlRemovePerFileContext @ 0x1402706C0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1402707C0 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x1402897F8 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402D7D80 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
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
 *     CmpOKToFollowLink @ 0x1406411F0 (CmpOKToFollowLink.c)
 *     CmpUnlockKcbStack @ 0x1406440E0 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406441C0 (CmpDereferenceKeyControlBlock.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     ObpFreeObject @ 0x140645F60 (ObpFreeObject.c)
 *     NtCreatePrivateNamespace @ 0x140654380 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406545CC (ObpRegisterPrivateNamespace.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1406588A8 (EtwpNotifyGuid.c)
 *     ObQueryDeviceMapInformation @ 0x140671560 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1406719E0 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140671AD0 (ObpReferenceDeviceMap.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14068DA80 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14068DAF8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068E1B4 (ObpDeleteSymbolicLinkName.c)
 *     CmLockKeyForWrite @ 0x14068E380 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x14068E5C4 (CmpGlobalLockKeyForWrite.c)
 *     CmpGetCallbackObjectContext @ 0x14069C0D8 (CmpGetCallbackObjectContext.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A2CC4 (ObSetCurrentProcessDeviceMap.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406A3930 (FsRtlTeardownPerFileContexts.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406B3860 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406B64EC (ObpRemoveNamespaceFromTable.c)
 *     PiDqIrpQueryGetResult @ 0x1406BE1FC (PiDqIrpQueryGetResult.c)
 *     EtwpRegisterProvider @ 0x1406BE5CC (EtwpRegisterProvider.c)
 *     WdipTimeoutCheckRoutine @ 0x1406BF470 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406BF51C (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BF5A4 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     ExpWatchProductTypeWork @ 0x1406BF930 (ExpWatchProductTypeWork.c)
 *     EtwpFreeLoggerContext @ 0x1406C08C0 (EtwpFreeLoggerContext.c)
 *     CmpGetLastHive @ 0x1406C2314 (CmpGetLastHive.c)
 *     NtOpenPrivateNamespace @ 0x1406C25F0 (NtOpenPrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x1406C2B18 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C2F24 (EtwpRealtimeDisconnectConsumer.c)
 *     ObCheckActiveHandles @ 0x1406C4408 (ObCheckActiveHandles.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C4460 (ObpCreateSymbolicLinkName.c)
 *     ObpSetDeviceMap @ 0x1406C699C (ObpSetDeviceMap.c)
 *     ObMakeTemporaryObject @ 0x1406C73F0 (ObMakeTemporaryObject.c)
 *     EtwpStopLoggerInstance @ 0x1406CB874 (EtwpStopLoggerInstance.c)
 *     ExpGetNextCallback @ 0x1406CDB60 (ExpGetNextCallback.c)
 *     CmpEnumerateCallback @ 0x1406D0730 (CmpEnumerateCallback.c)
 *     CmUnlockHiveSecurity @ 0x1406D0B28 (CmUnlockHiveSecurity.c)
 *     NtMakePermanentObject @ 0x1406D6840 (NtMakePermanentObject.c)
 *     ObRevokeHandles @ 0x1406E1D54 (ObRevokeHandles.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F223C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406F2AA4 (PiDmObjectGetCachedObjectReference.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F7500 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F7898 (PiDqQueryApplyObjectEvent.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1406FFD24 (CmpUnlockTwoSecurityCaches.c)
 *     PiDmListAddList @ 0x1407008B0 (PiDmListAddList.c)
 *     PiDmListAddObject @ 0x1407028AC (PiDmListAddObject.c)
 *     EtwUnregister @ 0x140707390 (EtwUnregister.c)
 *     IopRegisterDeviceInterface @ 0x140709AF4 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x14070F918 (IopProcessSetInterfaceState.c)
 *     WdipSemReserveInstanceTableEntry @ 0x1407167A8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407168F4 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x1407174E4 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140717634 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x14071776C (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x140717A28 (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x140717AEC (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140717C54 (WdipSemEnableContextProvider.c)
 *     EtwpTrackProviderBinary @ 0x14071D4AC (EtwpTrackProviderBinary.c)
 *     ObCreateObjectTypeEx @ 0x1407289FC (ObCreateObjectTypeEx.c)
 *     CmpStartSiloKeyLockTracker @ 0x14073078C (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x1407325A0 (CmpFinishSystemHivesLoad.c)
 *     EtwInitializeSiloState @ 0x140741454 (EtwInitializeSiloState.c)
 *     WdipSemInitialize @ 0x140743460 (WdipSemInitialize.c)
 *     WdipSemAllocatePool @ 0x140751C9C (WdipSemAllocatePool.c)
 *     ObRegisterCallbacks @ 0x14075AB90 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x14075AD64 (ObpInsertCallbackByAltitude.c)
 *     CmpAssignKeySecurity @ 0x14075B97C (CmpAssignKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x14075BBB8 (CmpCreateHiveRootCell.c)
 *     ObIsDosDeviceLocallyMapped @ 0x14075E190 (ObIsDosDeviceLocallyMapped.c)
 *     CmpInsertCallbackInListByAltitude @ 0x14075F21C (CmpInsertCallbackInListByAltitude.c)
 *     IoRegisterContainerNotification @ 0x140760000 (IoRegisterContainerNotification.c)
 *     EtwpTracingProvEnableCallback @ 0x140764310 (EtwpTracingProvEnableCallback.c)
 *     CmSetCallbackObjectContext @ 0x1407EADF0 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1407EB030 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EB564 (CmpFreeCallbackObjectContexts.c)
 *     CmShutdownSystem @ 0x1407EC8D4 (CmShutdownSystem.c)
 *     CmpSyncNextBackupHive @ 0x1407F4558 (CmpSyncNextBackupHive.c)
 *     CmThawRegistry @ 0x1407F5A94 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F5F30 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x1407F6050 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x1407F6260 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x1407F95C4 (CmpUnlockHashEntryByIndex.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FC8C8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmDumpKey @ 0x1408011B8 (CmDumpKey.c)
 *     CmSaveMergedKeys @ 0x14080231C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14080D3C4 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080D728 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x14080DCDC (VrpUnloadDifferencingHive.c)
 *     IoUnregisterContainerNotification @ 0x14081D640 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140828D4C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x14082959C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x1408296FC (PiDmListRemoveObject.c)
 *     PiDqQueryUnlock @ 0x14082B224 (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x140860BA0 (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x140860D2C (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408611C0 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140861280 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x140861A90 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x140862308 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140862450 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140869614 (PopFxDestroyDripsBlockingDeviceList.c)
 *     WdipSemUpdate @ 0x1408B0BDC (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1408B10EC (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B50C4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B5378 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1408B5B84 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1408B5E98 (EtwpGetTraceGuidInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408BFC50 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408BFD1C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408BFE44 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1408C00B8 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C0640 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C2E00 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfReleasePushLock @ 0x140091480 (ExfReleasePushLock.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F538 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14013A780 (KiAbThreadUnboostIoPriority.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14030F8A8 (EtwTraceAutoBoostClearFloor.c)
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
