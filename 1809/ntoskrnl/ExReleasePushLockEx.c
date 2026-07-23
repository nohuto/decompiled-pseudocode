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
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     PoGetIdleTimes @ 0x1400A7260 (PoGetIdleTimes.c)
 *     CcGetVirtualAddress @ 0x1400AFB80 (CcGetVirtualAddress.c)
 *     NtTraceEvent @ 0x1400CB590 (NtTraceEvent.c)
 *     CcAllocateInitializeBcb @ 0x1400CC398 (CcAllocateInitializeBcb.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E0158 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1400E035C (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1E20 (CcCompleteAsyncReadWorker.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140108CD0 (FsRtlLookupPerFileObjectContext.c)
 *     ObpUnlockDirectory @ 0x140109F98 (ObpUnlockDirectory.c)
 *     FsRtlLookupPerFileContext @ 0x140112220 (FsRtlLookupPerFileContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1401140A0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114190 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x140114360 (FsRtlInsertPerStreamContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117C10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlInsertPerFileContext @ 0x1401292A0 (FsRtlInsertPerFileContext.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14012CFA4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAsyncReadWorkerThread @ 0x14013FBD0 (CcAsyncReadWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 *     PnpDeviceActionWorker @ 0x14015F400 (PnpDeviceActionWorker.c)
 *     CcGetNumberOfMappedPages @ 0x140166BB0 (CcGetNumberOfMappedPages.c)
 *     IopCleanupNotifications @ 0x14016AB38 (IopCleanupNotifications.c)
 *     ExpUnlockCallbackListExclusive @ 0x140177718 (ExpUnlockCallbackListExclusive.c)
 *     FsRtlRemovePerFileContext @ 0x1402709B0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x140270AB0 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x140289AE8 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402D8070 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopReleaseAwaymodeLock @ 0x14056735C (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x14057F4C0 (ExShutdownSystem.c)
 *     PopReleaseUmpoPushLock @ 0x14058AAD0 (PopReleaseUmpoPushLock.c)
 *     PopUmpoProcessMessage @ 0x14058BF88 (PopUmpoProcessMessage.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x140591640 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x140591B08 (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x140592044 (PiDqQuerySerializeActionQueue.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140598CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059924C (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405996C4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140599D6C (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14059AA98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x14059B4DC (PiDmObjectIsEnumerable.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     ObpDecrementHandleCount @ 0x1405AA584 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1405AA740 (ObpDeleteNameCheck.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405AB470 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1405AB748 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1405ADAE4 (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     UnlockShutdown @ 0x1405B10CC (UnlockShutdown.c)
 *     CmpUnlockHiveList @ 0x1405B1118 (CmpUnlockHiveList.c)
 *     CmpGetNextActiveHive @ 0x1405B2474 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 *     EtwpQueueNotification @ 0x1405C154C (EtwpQueueNotification.c)
 *     EtwpFreeGuidEntry @ 0x1405C1920 (EtwpFreeGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 *     EtwpReceiveNotification @ 0x1405C1E00 (EtwpReceiveNotification.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1405C2198 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405C4970 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405C4E20 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405C5714 (EtwpRundownNotifications.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C5D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C9A30 (ObSetSecurityDescriptorInfo.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1405D10F0 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x1405D29F8 (CmpUnlockHashEntry.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockNameHashEntry @ 0x1405D771C (CmpUnlockNameHashEntry.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1405E7060 (CmpCallbackFillObjectContext.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     ObDereferenceDeviceMap @ 0x140609F0C (ObDereferenceDeviceMap.c)
 *     NtQuerySymbolicLinkObject @ 0x140626E40 (NtQuerySymbolicLinkObject.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     ObpCallPreOperationCallbacks @ 0x140638100 (ObpCallPreOperationCallbacks.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140639B10 (FsRtlTeardownPerStreamContexts.c)
 *     CmpOKToFollowLink @ 0x1406421F0 (CmpOKToFollowLink.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     ObpFreeObject @ 0x140646F60 (ObpFreeObject.c)
 *     NtCreatePrivateNamespace @ 0x140655520 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x14065576C (ObpRegisterPrivateNamespace.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 *     ObQueryDeviceMapInformation @ 0x140672700 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140672B80 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140672C70 (ObpReferenceDeviceMap.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14068EC20 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14068EC98 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068F354 (ObpDeleteSymbolicLinkName.c)
 *     CmLockKeyForWrite @ 0x14068F520 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x14068F764 (CmpGlobalLockKeyForWrite.c)
 *     CmpGetCallbackObjectContext @ 0x14069D278 (CmpGetCallbackObjectContext.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A3F44 (ObSetCurrentProcessDeviceMap.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406A4BB0 (FsRtlTeardownPerFileContexts.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406B4AE0 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406B776C (ObpRemoveNamespaceFromTable.c)
 *     PiDqIrpQueryGetResult @ 0x1406BF47C (PiDqIrpQueryGetResult.c)
 *     EtwpRegisterProvider @ 0x1406BF84C (EtwpRegisterProvider.c)
 *     WdipTimeoutCheckRoutine @ 0x1406C06F0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406C079C (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406C0824 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 *     CmpGetLastHive @ 0x1406C3594 (CmpGetLastHive.c)
 *     NtOpenPrivateNamespace @ 0x1406C3870 (NtOpenPrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x1406C3D98 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C41A4 (EtwpRealtimeDisconnectConsumer.c)
 *     ObCheckActiveHandles @ 0x1406C5688 (ObCheckActiveHandles.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C56E0 (ObpCreateSymbolicLinkName.c)
 *     ObpSetDeviceMap @ 0x1406C7C1C (ObpSetDeviceMap.c)
 *     ObMakeTemporaryObject @ 0x1406C8670 (ObMakeTemporaryObject.c)
 *     EtwpStopLoggerInstance @ 0x1406CCAF4 (EtwpStopLoggerInstance.c)
 *     ExpGetNextCallback @ 0x1406CEDE0 (ExpGetNextCallback.c)
 *     CmpEnumerateCallback @ 0x1406D19B0 (CmpEnumerateCallback.c)
 *     CmUnlockHiveSecurity @ 0x1406D1DA8 (CmUnlockHiveSecurity.c)
 *     NtMakePermanentObject @ 0x1406D7AC0 (NtMakePermanentObject.c)
 *     ObRevokeHandles @ 0x1406E2FD4 (ObRevokeHandles.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F34BC (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406F3D24 (PiDmObjectGetCachedObjectReference.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F8780 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F8B18 (PiDqQueryApplyObjectEvent.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140700FA4 (CmpUnlockTwoSecurityCaches.c)
 *     PiDmListAddList @ 0x140701B30 (PiDmListAddList.c)
 *     PiDmListAddObject @ 0x140703B2C (PiDmListAddObject.c)
 *     EtwUnregister @ 0x140708610 (EtwUnregister.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140717A28 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140717B74 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x140718764 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407188B4 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x1407189EC (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x140718CA8 (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x140718D6C (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140718ED4 (WdipSemEnableContextProvider.c)
 *     EtwpTrackProviderBinary @ 0x14071E72C (EtwpTrackProviderBinary.c)
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 *     CmpStartSiloKeyLockTracker @ 0x14073195C (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     EtwInitializeSiloState @ 0x140742624 (EtwInitializeSiloState.c)
 *     WdipSemInitialize @ 0x140744630 (WdipSemInitialize.c)
 *     WdipSemAllocatePool @ 0x140752E6C (WdipSemAllocatePool.c)
 *     ObRegisterCallbacks @ 0x14075BD60 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x14075BF34 (ObpInsertCallbackByAltitude.c)
 *     CmpAssignKeySecurity @ 0x14075CB4C (CmpAssignKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 *     ObIsDosDeviceLocallyMapped @ 0x14075F360 (ObIsDosDeviceLocallyMapped.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1407603EC (CmpInsertCallbackInListByAltitude.c)
 *     IoRegisterContainerNotification @ 0x1407611D0 (IoRegisterContainerNotification.c)
 *     EtwpTracingProvEnableCallback @ 0x1407654E0 (EtwpTracingProvEnableCallback.c)
 *     CmSetCallbackObjectContext @ 0x1407EBFD0 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1407EC210 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EC744 (CmpFreeCallbackObjectContexts.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmpSyncNextBackupHive @ 0x1407F5738 (CmpSyncNextBackupHive.c)
 *     CmThawRegistry @ 0x1407F6C74 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F7110 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x1407F7230 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x1407F7440 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x1407FA7A4 (CmpUnlockHashEntryByIndex.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FDAA8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmDumpKey @ 0x140802398 (CmDumpKey.c)
 *     CmSaveMergedKeys @ 0x1408034FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14080E5A4 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080E908 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x14080EEBC (VrpUnloadDifferencingHive.c)
 *     IoUnregisterContainerNotification @ 0x14081E820 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140829F2C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x14082A77C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14082A8DC (PiDmListRemoveObject.c)
 *     PiDqQueryUnlock @ 0x14082C404 (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x140861DE0 (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x140861F6C (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x140862400 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408624C0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x140862CD0 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x140863548 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140863690 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14086A854 (PopFxDestroyDripsBlockingDeviceList.c)
 *     WdipSemUpdate @ 0x1408B1E1C (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1408B232C (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B6364 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B6618 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1408B6E24 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1408B7138 (EtwpGetTraceGuidInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408C0EF0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408C0FBC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408C10E4 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1408C1358 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C18E0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C40A0 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F5C8 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14013A8A0 (KiAbThreadUnboostIoPriority.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14030FB98 (EtwTraceAutoBoostClearFloor.c)
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
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_14043CA10[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)((char *)&CurrentThread->LockEntries[0].TreeNode + v14), v12);
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
