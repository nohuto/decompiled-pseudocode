/*
 * XREFs of ExReleasePushLockEx @ 0x14003EF80
 * Callers:
 *     EtwpUnlockBufferList @ 0x140003A48 (EtwpUnlockBufferList.c)
 *     ObpUnlockDirectory @ 0x140003F90 (ObpUnlockDirectory.c)
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14003E0C0 (FsRtlLookupPerStreamContextInternal.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140077218 (CcReleaseBcbLockAndVacbLock.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddressIfMapped @ 0x14007A868 (CcGetVirtualAddressIfMapped.c)
 *     CcAllocateInitializeBcb @ 0x14007B4B4 (CcAllocateInitializeBcb.c)
 *     CcPostWorkQueueAsyncRead @ 0x140090B98 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140090D9C (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcGetVirtualAddress @ 0x1400B6060 (CcGetVirtualAddress.c)
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1401025E0 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140116310 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140116400 (FsRtlInsertPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140116F90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlInsertPerStreamContext @ 0x140117110 (FsRtlInsertPerStreamContext.c)
 *     FsRtlInsertPerFileContext @ 0x14012B540 (FsRtlInsertPerFileContext.c)
 *     FsRtlLookupPerFileContext @ 0x140131670 (FsRtlLookupPerFileContext.c)
 *     CcCompleteAsyncReadWorker @ 0x140136AF0 (CcCompleteAsyncReadWorker.c)
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 *     CcGetNumberOfMappedPages @ 0x1401716F0 (CcGetNumberOfMappedPages.c)
 *     ExpUnlockCallbackListExclusive @ 0x14018162C (ExpUnlockCallbackListExclusive.c)
 *     CcAsyncReadWorker @ 0x14018CBA0 (CcAsyncReadWorker.c)
 *     IopCleanupNotifications @ 0x14018E134 (IopCleanupNotifications.c)
 *     CcAsyncReadWorkerThread @ 0x14027F240 (CcAsyncReadWorkerThread.c)
 *     FsRtlRemovePerFileContext @ 0x140284220 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x140284320 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x14029F884 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402F2D40 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopReleaseAwaymodeLock @ 0x140595FF8 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x1405AE3A8 (ExShutdownSystem.c)
 *     PiDqIrpQueryGetResult @ 0x1405B5CD4 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B6594 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryUnlock @ 0x1405B6ADC (PiDqQueryUnlock.c)
 *     PiDqIrpQueryCreate @ 0x1405B6DD8 (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x1405B7128 (PiDqQuerySerializeActionQueue.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD9C0 (PiControlGetDeviceInterfaceEnabled.c)
 *     CmpOKToFollowLink @ 0x1405BDD90 (CmpOKToFollowLink.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405BE798 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405BEC1C (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405BF250 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405BF410 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x1405BFAE8 (PiDmObjectIsEnumerable.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C7140 (ObSetSecurityDescriptorInfo.c)
 *     ObpReferenceDeviceMap @ 0x1405D10D0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1405D1260 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1405D16F0 (ObfDereferenceDeviceMap.c)
 *     EtwpRegisterUMGuid @ 0x1405D3E90 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405D4330 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405D4C04 (EtwpRundownNotifications.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     ObpCallPreOperationCallbacks @ 0x1405E4500 (ObpCallPreOperationCallbacks.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5FC0 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F65C0 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1405F9140 (CmpCallbackFillObjectContext.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     ObpFreeObject @ 0x140608F60 (ObpFreeObject.c)
 *     CmUnlockHiveSecurity @ 0x140634F84 (CmUnlockHiveSecurity.c)
 *     CmpUnlockHashEntryByKcb @ 0x140635780 (CmpUnlockHashEntryByKcb.c)
 *     CmpGetNextActiveHive @ 0x140638590 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140638630 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     CmpGetNextHive @ 0x14063AF48 (CmpGetNextHive.c)
 *     CmpUnlockAppHiveLoadList @ 0x14063B06C (CmpUnlockAppHiveLoadList.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14063DA9C (CmpUnlockDeletedHashEntryByKcb.c)
 *     ObpDecrementHandleCount @ 0x14063F2E4 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x14063F4B0 (ObpDeleteNameCheck.c)
 *     ObDereferenceDeviceMap @ 0x140652C88 (ObDereferenceDeviceMap.c)
 *     CmpUnlockHashEntry @ 0x140661CE4 (CmpUnlockHashEntry.c)
 *     CmpUnlockTwoKcbs @ 0x140663500 (CmpUnlockTwoKcbs.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpUnlockNameHashEntry @ 0x140667D88 (CmpUnlockNameHashEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140667DC8 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpAssignSecurityToKcb @ 0x140669990 (CmpAssignSecurityToKcb.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140671DA0 (FsRtlTeardownPerStreamContexts.c)
 *     PopReleaseUmpoPushLock @ 0x1406720C8 (PopReleaseUmpoPushLock.c)
 *     CmpUnlockHiveList @ 0x14068CCFC (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x14068CD1C (UnlockShutdown.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140693238 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpQueueNotification @ 0x140693858 (EtwpQueueNotification.c)
 *     EtwpAddGuidEntry @ 0x140693DF0 (EtwpAddGuidEntry.c)
 *     EtwpReceiveNotification @ 0x140694158 (EtwpReceiveNotification.c)
 *     PopUmpoProcessMessage @ 0x14069DA6C (PopUmpoProcessMessage.c)
 *     NtCreatePrivateNamespace @ 0x14069EBF0 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x14069EE3C (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x14069FD90 (NtOpenPrivateNamespace.c)
 *     ObMakeTemporaryObject @ 0x1406A12C0 (ObMakeTemporaryObject.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     EtwpShutdownConsumers @ 0x1406ACB20 (EtwpShutdownConsumers.c)
 *     EtwpStopLoggerInstance @ 0x1406ACBBC (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406AD314 (EtwpRealtimeUpdateConsumers.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406B36E8 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406B3760 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406B3964 (ObpDeleteSymbolicLinkName.c)
 *     NtQuerySymbolicLinkObject @ 0x1406B6910 (NtQuerySymbolicLinkObject.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 *     WdipTimeoutCheckRoutine @ 0x1406BCD90 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406BCE80 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BCF08 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     CmpGetCallbackObjectContext @ 0x1406C01C0 (CmpGetCallbackObjectContext.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C344C (ObSetCurrentProcessDeviceMap.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406C64D0 (FsRtlTeardownPerFileContexts.c)
 *     EtwpRealtimeConnect @ 0x1406CAEC8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406CB2E0 (EtwpRealtimeDisconnectConsumer.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D7638 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406D94EC (ObpRemoveNamespaceFromTable.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406E0354 (PiDmObjectGetCachedObjectReference.c)
 *     EtwpFreeGuidEntry @ 0x1406E19DC (EtwpFreeGuidEntry.c)
 *     ObCheckActiveHandles @ 0x1406E4260 (ObCheckActiveHandles.c)
 *     CmpGetLastHive @ 0x1406E448C (CmpGetLastHive.c)
 *     ExpWatchProductTypeWork @ 0x1406E5580 (ExpWatchProductTypeWork.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E67F0 (ObpCreateSymbolicLinkName.c)
 *     ObpSetDeviceMap @ 0x1406EB608 (ObpSetDeviceMap.c)
 *     ExpGetNextCallback @ 0x1406EC3E0 (ExpGetNextCallback.c)
 *     EtwpGetTraceGuidInfo @ 0x1406EE26C (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x1406EE98C (EtwpTrackProviderBinary.c)
 *     CmpEnumerateCallback @ 0x1406F11E0 (CmpEnumerateCallback.c)
 *     NtMakePermanentObject @ 0x1406F93F0 (NtMakePermanentObject.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FC0A8 (PiDmObjectProcessPropertyChange.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140716ED8 (CmpUnlockTwoSecurityCaches.c)
 *     WdipSemDisableScenario @ 0x140718294 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407183E4 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407185C8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProvider @ 0x1407191D0 (WdipSemDisableContextProvider.c)
 *     EtwpRegisterProvider @ 0x14071A39C (EtwpRegisterProvider.c)
 *     PiDmListAddList @ 0x14071DAD0 (PiDmListAddList.c)
 *     PiDmObjectReleaseLock @ 0x14071ED54 (PiDmObjectReleaseLock.c)
 *     PiDmListAddObject @ 0x140725824 (PiDmListAddObject.c)
 *     ObRevokeHandles @ 0x14072A6EC (ObRevokeHandles.c)
 *     IopProcessSetInterfaceState @ 0x140733D08 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     CmLockKeyForWrite @ 0x14073C2DC (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x14073C4CC (CmpGlobalLockKeyForWrite.c)
 *     WdipSemEnableScenario @ 0x1407467AC (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x14074695C (WdipSemActivateInstance.c)
 *     WdipSemEnableContextProvider @ 0x140746A0C (WdipSemEnableContextProvider.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140746B0C (WdipSemReserveInstanceTableEntry.c)
 *     EtwUnregister @ 0x140749F60 (EtwUnregister.c)
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 *     WdipSemInitialize @ 0x14076E1F4 (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 *     WdipSemAllocatePool @ 0x14077BE08 (WdipSemAllocatePool.c)
 *     CmpStartSiloKeyLockTracker @ 0x14077EAC0 (CmpStartSiloKeyLockTracker.c)
 *     ObRegisterCallbacks @ 0x140784010 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1407841E4 (ObpInsertCallbackByAltitude.c)
 *     CmpAssignKeySecurity @ 0x140786470 (CmpAssignKeySecurity.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140787470 (ObIsDosDeviceLocallyMapped.c)
 *     CmpInsertCallbackInListByAltitude @ 0x140788AF8 (CmpInsertCallbackInListByAltitude.c)
 *     IoRegisterContainerNotification @ 0x14078A830 (IoRegisterContainerNotification.c)
 *     EtwpTracingProvEnableCallback @ 0x14078D030 (EtwpTracingProvEnableCallback.c)
 *     CmSetCallbackObjectContext @ 0x140825030 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x140825250 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x14082576C (CmpFreeCallbackObjectContexts.c)
 *     CmpSyncNextBackupHive @ 0x14082D3B4 (CmpSyncNextBackupHive.c)
 *     CmThawRegistry @ 0x14082E6E4 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14082EB98 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x14082ECB8 (CmpStopSiloKeyLockTracker.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408320B8 (CmpUnlockHashEntryByIndex.c)
 *     CmDumpKey @ 0x140839D60 (CmDumpKey.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140846330 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140846650 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x140846C2C (VrpUnloadDifferencingHive.c)
 *     IoUnregisterContainerNotification @ 0x140856C50 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140862A0C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x1408633CC (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140863538 (PiDmListRemoveObject.c)
 *     ObpGetShadowDirectory @ 0x14089CE24 (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x14089CFBC (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x14089D450 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x14089D510 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x14089DD4C (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x14089E5CC (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x14089E710 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408A52D4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     WdipSemUpdate @ 0x1408ED96C (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1408EDE7C (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1864 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F1B18 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1408F2344 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408FC430 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408FC4FC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FC620 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1408FC894 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FCE40 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408FF944 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLock @ 0x1400C61F0 (ExfReleasePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     PsBoostThreadIoQoS @ 0x140101064 (PsBoostThreadIoQoS.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140122E1C (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14013C834 (KiAbThreadUnboostIoPriority.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14032D13C (EtwTraceAutoBoostClearFloor.c)
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
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140467140[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
    if ( v13 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return v6;
}
