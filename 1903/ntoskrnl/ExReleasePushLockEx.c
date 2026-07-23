/*
 * XREFs of ExReleasePushLockEx @ 0x14003F240
 * Callers:
 *     EtwpUnlockBufferList @ 0x1400039C4 (EtwpUnlockBufferList.c)
 *     ObpUnlockDirectory @ 0x140003F00 (ObpUnlockDirectory.c)
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14003E380 (FsRtlLookupPerStreamContextInternal.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140076FA8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddressIfMapped @ 0x14007A4A8 (CcGetVirtualAddressIfMapped.c)
 *     CcAllocateInitializeBcb @ 0x14007B0B4 (CcAllocateInitializeBcb.c)
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400A9898 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1400A9A9C (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcGetVirtualAddress @ 0x1400D61E0 (CcGetVirtualAddress.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1400FFBE0 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140114CA0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114D90 (FsRtlInsertPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140115920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlInsertPerStreamContext @ 0x140115AA0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlInsertPerFileContext @ 0x14012AB20 (FsRtlInsertPerFileContext.c)
 *     FsRtlLookupPerFileContext @ 0x140130AE0 (FsRtlLookupPerFileContext.c)
 *     CcCompleteAsyncReadWorker @ 0x140136150 (CcCompleteAsyncReadWorker.c)
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 *     CcGetNumberOfMappedPages @ 0x140171000 (CcGetNumberOfMappedPages.c)
 *     ExpUnlockCallbackListExclusive @ 0x140180F3C (ExpUnlockCallbackListExclusive.c)
 *     CcAsyncReadWorker @ 0x14018C320 (CcAsyncReadWorker.c)
 *     IopCleanupNotifications @ 0x14018D824 (IopCleanupNotifications.c)
 *     CcAsyncReadWorkerThread @ 0x14027F4E0 (CcAsyncReadWorkerThread.c)
 *     FsRtlRemovePerFileContext @ 0x1402844C0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1402845C0 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x14029FB24 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402F2FE0 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopReleaseAwaymodeLock @ 0x140595FF8 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x1405AE3C8 (ExShutdownSystem.c)
 *     PiDqIrpQueryGetResult @ 0x1405B58F4 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B61B4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryUnlock @ 0x1405B66FC (PiDqQueryUnlock.c)
 *     PiDqIrpQueryCreate @ 0x1405B69F8 (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x1405B6D48 (PiDqQuerySerializeActionQueue.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD5E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     CmpOKToFollowLink @ 0x1405BD9B0 (CmpOKToFollowLink.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405BE2C8 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405BE74C (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405BED80 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405BEF40 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x1405BF618 (PiDmObjectIsEnumerable.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C6C40 (ObSetSecurityDescriptorInfo.c)
 *     ObpReferenceDeviceMap @ 0x1405D0BD0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1405D0D60 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1405D11F0 (ObfDereferenceDeviceMap.c)
 *     EtwpRegisterUMGuid @ 0x1405D3990 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405D3E30 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405D4704 (EtwpRundownNotifications.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     ObpCallPreOperationCallbacks @ 0x1405E3D30 (ObpCallPreOperationCallbacks.c)
 *     CmpCreateKeyBody @ 0x1405EFC00 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1405F7B50 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1405F80F0 (CmpCallbackFillObjectContext.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     ObpFreeObject @ 0x140607450 (ObpFreeObject.c)
 *     CmUnlockHiveSecurity @ 0x140631104 (CmUnlockHiveSecurity.c)
 *     CmpUnlockHashEntryByKcb @ 0x140631900 (CmpUnlockHashEntryByKcb.c)
 *     CmpGetNextHive @ 0x140637EC0 (CmpGetNextHive.c)
 *     CmpUnlockAppHiveLoadList @ 0x140637FE4 (CmpUnlockAppHiveLoadList.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14063AA0C (CmpUnlockDeletedHashEntryByKcb.c)
 *     ObpDecrementHandleCount @ 0x14063C254 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x14063C400 (ObpDeleteNameCheck.c)
 *     CmpUnlockHashEntry @ 0x14064EB24 (CmpUnlockHashEntry.c)
 *     CmpUnlockTwoKcbs @ 0x140650340 (CmpUnlockTwoKcbs.c)
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     CmpUnlockNameHashEntry @ 0x140654C88 (CmpUnlockNameHashEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140654CC8 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpAssignSecurityToKcb @ 0x140656884 (CmpAssignSecurityToKcb.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpGetNextActiveHive @ 0x140661E60 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     UnlockShutdown @ 0x140662174 (UnlockShutdown.c)
 *     CmpUnlockHiveList @ 0x140662270 (CmpUnlockHiveList.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140665E24 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpQueueNotification @ 0x140666444 (EtwpQueueNotification.c)
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 *     EtwpReceiveNotification @ 0x140666D3C (EtwpReceiveNotification.c)
 *     ObDereferenceDeviceMap @ 0x140671E58 (ObDereferenceDeviceMap.c)
 *     NtCreatePrivateNamespace @ 0x140680690 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406808DC (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x140681830 (NtOpenPrivateNamespace.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140682680 (FsRtlTeardownPerStreamContexts.c)
 *     PopReleaseUmpoPushLock @ 0x14069FD0C (PopReleaseUmpoPushLock.c)
 *     PopUmpoProcessMessage @ 0x1406A0F2C (PopUmpoProcessMessage.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x1406B759C (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406B7C24 (EtwpRealtimeUpdateConsumers.c)
 *     NtQuerySymbolicLinkObject @ 0x1406BB260 (NtQuerySymbolicLinkObject.c)
 *     WdipTimeoutCheckRoutine @ 0x1406BD600 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406BD6F0 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BD778 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     CmpGetCallbackObjectContext @ 0x1406C1280 (CmpGetCallbackObjectContext.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C42EC (ObSetCurrentProcessDeviceMap.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406C7A88 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406C7B00 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406C7D04 (ObpDeleteSymbolicLinkName.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406C81A0 (FsRtlTeardownPerFileContexts.c)
 *     EtwpRealtimeConnect @ 0x1406CC098 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406CC4B0 (EtwpRealtimeDisconnectConsumer.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D7858 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406D987C (ObpRemoveNamespaceFromTable.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406DF044 (PiDmObjectGetCachedObjectReference.c)
 *     EtwpFreeGuidEntry @ 0x1406E02A8 (EtwpFreeGuidEntry.c)
 *     ObCheckActiveHandles @ 0x1406E2DC0 (ObCheckActiveHandles.c)
 *     CmpGetLastHive @ 0x1406E3030 (CmpGetLastHive.c)
 *     ExpWatchProductTypeWork @ 0x1406E4930 (ExpWatchProductTypeWork.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E5900 (ObpCreateSymbolicLinkName.c)
 *     ObMakeTemporaryObject @ 0x1406EA0A0 (ObMakeTemporaryObject.c)
 *     ObpSetDeviceMap @ 0x1406EA410 (ObpSetDeviceMap.c)
 *     ExpGetNextCallback @ 0x1406EB120 (ExpGetNextCallback.c)
 *     EtwpGetTraceGuidInfo @ 0x1406ECEDC (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x1406ED48C (EtwpTrackProviderBinary.c)
 *     CmpEnumerateCallback @ 0x1406EF570 (CmpEnumerateCallback.c)
 *     NtMakePermanentObject @ 0x1406F7630 (NtMakePermanentObject.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FA2C8 (PiDmObjectProcessPropertyChange.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140716278 (CmpUnlockTwoSecurityCaches.c)
 *     WdipSemDisableScenario @ 0x1407164A4 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407165F4 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407167D8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProvider @ 0x1407173E0 (WdipSemDisableContextProvider.c)
 *     EtwpRegisterProvider @ 0x1407185AC (EtwpRegisterProvider.c)
 *     PiDmListAddList @ 0x14071BCE0 (PiDmListAddList.c)
 *     PiDmObjectReleaseLock @ 0x14071CEC4 (PiDmObjectReleaseLock.c)
 *     PiDmListAddObject @ 0x140723984 (PiDmListAddObject.c)
 *     ObRevokeHandles @ 0x14072937C (ObRevokeHandles.c)
 *     IopProcessSetInterfaceState @ 0x140731AA8 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     CmLockKeyForWrite @ 0x14073A04C (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x14073A23C (CmpGlobalLockKeyForWrite.c)
 *     WdipSemEnableScenario @ 0x1407448AC (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x140744A5C (WdipSemActivateInstance.c)
 *     WdipSemEnableContextProvider @ 0x140744B0C (WdipSemEnableContextProvider.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140744C0C (WdipSemReserveInstanceTableEntry.c)
 *     EtwUnregister @ 0x140748060 (EtwUnregister.c)
 *     ObCreateObjectTypeEx @ 0x140759A80 (ObCreateObjectTypeEx.c)
 *     WdipSemInitialize @ 0x14076B3A0 (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     WdipSemAllocatePool @ 0x140778828 (WdipSemAllocatePool.c)
 *     CmpStartSiloKeyLockTracker @ 0x14077C1F0 (CmpStartSiloKeyLockTracker.c)
 *     ObRegisterCallbacks @ 0x140781CB0 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x140781E84 (ObpInsertCallbackByAltitude.c)
 *     CmpAssignKeySecurity @ 0x140784110 (CmpAssignKeySecurity.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140785110 (ObIsDosDeviceLocallyMapped.c)
 *     CmpInsertCallbackInListByAltitude @ 0x140786798 (CmpInsertCallbackInListByAltitude.c)
 *     IoRegisterContainerNotification @ 0x1407883D0 (IoRegisterContainerNotification.c)
 *     EtwpTracingProvEnableCallback @ 0x14078AB50 (EtwpTracingProvEnableCallback.c)
 *     CmSetCallbackObjectContext @ 0x140825930 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x140825B50 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x14082606C (CmpFreeCallbackObjectContexts.c)
 *     CmThawRegistry @ 0x14082E868 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14082ED28 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x14082EE48 (CmpStopSiloKeyLockTracker.c)
 *     CmpSyncNextBackupHive @ 0x140831844 (CmpSyncNextBackupHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140832A58 (CmpUnlockHashEntryByIndex.c)
 *     CmDumpKey @ 0x14083A700 (CmDumpKey.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140846CBC (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140846FDC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x140847524 (VrpUnloadDifferencingHive.c)
 *     IoUnregisterContainerNotification @ 0x140857550 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14086330C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x140863CCC (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140863E38 (PiDmListRemoveObject.c)
 *     ObpGetShadowDirectory @ 0x14089D604 (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x14089D79C (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x14089DC30 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x14089DCF0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x14089E50C (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x14089ED8C (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x14089EED0 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408A5A74 (PopFxDestroyDripsBlockingDeviceList.c)
 *     WdipSemUpdate @ 0x1408EE05C (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1408EE56C (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1F54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F2208 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1408F2A34 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408FCA50 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408FCB1C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FCC40 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1408FCEB4 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FD480 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408FFFE4 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x14009E3B0 (ExfReleasePushLock.c)
 *     PsBoostThreadIoQoS @ 0x1400B57CC (PsBoostThreadIoQoS.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140121FCC (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14013C214 (KiAbThreadUnboostIoPriority.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14032D6DC (EtwTraceAutoBoostClearFloor.c)
 */

char __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int64 v6; // rax
  __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rdi
  int v9; // ebx
  unsigned int SessionId; // r8d
  unsigned __int8 v11; // r15
  unsigned int v12; // edx
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  char v21; // [rsp+6Ah] [rbp+12h]

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
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4),
        v7 != v6) )
  {
    LOBYTE(v6) = ExfReleasePushLock(BugCheckParameter2, v5);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    v21 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140467440[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount;
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      goto LABEL_27;
    while ( 1 )
    {
      v15 = 1 << v14;
      v16 = v14;
      v17 = &CurrentThread->LockEntries[v16];
      v12 &= ~v15;
      if ( (v17->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v17->LockState.0 & 1) == 0
        && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v17->LockState.SessionId == SessionId )
      {
        v17->AcquiredByte &= ~1u;
        if ( v17->LockState.0 )
          break;
      }
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      if ( v13 )
        goto LABEL_27;
    }
    if ( !v17 )
    {
LABEL_27:
      LODWORD(v6) = *((_DWORD *)&CurrentThread->0 + 1);
      if ( (v6 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      v17->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v17->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v16].TreeNode);
      v9 = v17->BoostBitmap.AllFields & 0x1FFFF;
      v18 = v17->BoostBitmap.AllFields & 0xFFFE0000;
      v17->ThreadLocalFlags &= ~1u;
      v21 = BYTE2(v9);
      v17->BoostBitmap.AllFields = v18;
      v17->LockState.0 = 0LL;
      v19 = ((char *)v17 - (char *)CurrentThread - 800) / 96;
      if ( v11 == 1 )
      {
        LODWORD(v6) = CurrentThread->AbEntrySummary | (1 << v19);
        CurrentThread->AbEntrySummary = v6;
      }
      else
      {
        LOBYTE(v6) = 1 << v19;
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v19);
      }
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v9 & 0x1FFFF) != 0 )
    {
      if ( (v9 & 0x8000u) != 0 )
        KiAbThreadUnboostIoPriority(CurrentThread, 0LL);
      if ( (v21 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
        PsBoostThreadIoQoS(CurrentThread, 1LL);
      }
      LOBYTE(v6) = -1;
      if ( (v9 & 0x7FFF) != 0 )
        LOBYTE(v6) = KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        LOBYTE(v6) = EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v9 & 0x1FFFF);
    }
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return v6;
}
