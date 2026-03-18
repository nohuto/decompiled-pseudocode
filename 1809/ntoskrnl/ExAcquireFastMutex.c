/*
 * XREFs of ExAcquireFastMutex @ 0x14004E530
 * Callers:
 *     PopGetPowerSettingValue @ 0x140003B10 (PopGetPowerSettingValue.c)
 *     PnpDisablePnpEventWorkerWatchdog @ 0x140005B14 (PnpDisablePnpEventWorkerWatchdog.c)
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x140020430 (CcGetDirtyPagesHelper.c)
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14004E450 (FsRtlLookupPerStreamContextInternal.c)
 *     CcUnmapVacbArray @ 0x1400798E0 (CcUnmapVacbArray.c)
 *     CcWriteBehindInternal @ 0x14007D2F0 (CcWriteBehindInternal.c)
 *     ExFreeLargePool @ 0x14009ADD0 (ExFreeLargePool.c)
 *     CcPinFileData @ 0x1400AE2B0 (CcPinFileData.c)
 *     PoRunDownDeviceObject @ 0x1400DAB60 (PoRunDownDeviceObject.c)
 *     CcPrepareMdlWrite @ 0x1400E1A20 (CcPrepareMdlWrite.c)
 *     ExpAllocateBigPool @ 0x1400E69D0 (ExpAllocateBigPool.c)
 *     CcGetFlushedValidData @ 0x1400E87A0 (CcGetFlushedValidData.c)
 *     RawCompletionRoutine @ 0x1400F9720 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x14010C61C (RawInitiateDeleteVolume.c)
 *     FsRtlAddLargeMcbEntry @ 0x140110360 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x1401103D0 (FsRtlTruncateLargeMcb.c)
 *     CmpWaitForLateUnloadWorker @ 0x140111988 (CmpWaitForLateUnloadWorker.c)
 *     FsRtlInsertPerStreamContext @ 0x1401142D0 (FsRtlInsertPerStreamContext.c)
 *     CcDeleteMbcb @ 0x140125968 (CcDeleteMbcb.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14012CEF4 (CcAcquireBcbLockAndVacbLock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14013316C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140136C88 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14013F6FC (FsRtlpCancelExclusiveIrp.c)
 *     PopRunNormalIrpWorkers @ 0x140153374 (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x14015875C (PopRunMaximumIrpWorkers.c)
 *     PnpDisableDeviceCompletionQueueWatchdog @ 0x140159CB0 (PnpDisableDeviceCompletionQueueWatchdog.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF44 (PnpUnregisterPlugPlayNotification.c)
 *     PopIrpWorker @ 0x140171720 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x1401763A0 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x14017DD9C (PopInitilizeAcDcSettings.c)
 *     PopIrpWorkerControl @ 0x1401919B0 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x140269BF0 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x140269E80 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026A9AC (CcUnmapInactiveViewsInternal.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x14026E760 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x14026E840 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x14026E8F0 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x14026E970 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x14026EAD0 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x14026EB30 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x14026EBC0 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x14026ED70 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14026FA88 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14026FB68 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140270070 (FsRtlpWaitOnIrp.c)
 *     FsRtlRemovePerStreamContext @ 0x1402707C0 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x140288934 (PnpDisableUserModeNotifications.c)
 *     PnpDelayedRemoveWorkerWatchdogWorkItem @ 0x140289930 (PnpDelayedRemoveWorkerWatchdogWorkItem.c)
 *     PnpDeviceCompletionQueueWatchdogWorkItem @ 0x140289970 (PnpDeviceCompletionQueueWatchdogWorkItem.c)
 *     PnpDisableDelayedRemoveWorkerWatchdog @ 0x1402899B8 (PnpDisableDelayedRemoveWorkerWatchdog.c)
 *     PnpEventWorkerWatchdogWorkItem @ 0x140289A50 (PnpEventWorkerWatchdogWorkItem.c)
 *     KiOpPatchCode @ 0x14029C4E8 (KiOpPatchCode.c)
 *     RawVerifyVolume @ 0x1402EC194 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x1402F5C4C (RtlpTraceDatabaseAcquireLock.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExDeferredFreePool @ 0x14034D7A0 (ExDeferredFreePool.c)
 *     PopFlushVolumes @ 0x14056D750 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x14056D9E0 (PopFlushVolumeWorker.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14057F05C (WheapCreateTriageDumpFromPreviousSession.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1405819D0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140581D00 (FsRtlFindInTunnelCacheEx.c)
 *     IoGetDeviceProperty @ 0x1405876E0 (IoGetDeviceProperty.c)
 *     PnpBusTypeGuidGet @ 0x140587F70 (PnpBusTypeGuidGet.c)
 *     PopDiagTraceControlCallback @ 0x140587FE0 (PopDiagTraceControlCallback.c)
 *     PopDispatchNotificationsToList @ 0x140588518 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x140589744 (PopGetSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x140589EE0 (PoRegisterPowerSettingCallback.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14058AAC0 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x14058B338 (PopSetPowerSettingValue.c)
 *     PnpProcessDeferredRegistrations @ 0x14058BF08 (PnpProcessDeferredRegistrations.c)
 *     PopGetSettingNotificationName @ 0x14058E66C (PopGetSettingNotificationName.c)
 *     PiUEventProcessEventWorker @ 0x14058E940 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x14058EAD8 (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x14058EF60 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x14058F46C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14058F668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x14058F938 (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14058FA24 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x14058FAC4 (PiUEventReferenceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14058FED8 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140590038 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405902D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059AC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IopDestroyDeviceNode @ 0x14059F300 (IopDestroyDeviceNode.c)
 *     PiUEventHandleGetEvent @ 0x14059FA1C (PiUEventHandleGetEvent.c)
 *     RawScanDeletedList @ 0x1405A2620 (RawScanDeletedList.c)
 *     RawMountVolume @ 0x1405A2988 (RawMountVolume.c)
 *     PopCallPowerSettingCallback @ 0x1405B03B8 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1405B0874 (PopLogDisabledSleepReason.c)
 *     CmpDelayDerefKCBWorker @ 0x1405B10B0 (CmpDelayDerefKCBWorker.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405C4680 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C4A10 (EtwpSetProviderTraitsCommon.c)
 *     CmpDelayCloseWorker @ 0x1405D1760 (CmpDelayCloseWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405D4264 (CmpDelayDerefKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1405D675C (CmpAllocateKeyControlBlock.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1405DE85C (FsRtlAcquireToCreateMappedSection.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     DbgkCopyProcessDebugPort @ 0x140609650 (DbgkCopyProcessDebugPort.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140638AF0 (FsRtlTeardownPerStreamContexts.c)
 *     CmpDeleteKeyObject @ 0x14063F520 (CmpDeleteKeyObject.c)
 *     RawReadWriteDeviceControl @ 0x14064B398 (RawReadWriteDeviceControl.c)
 *     RawDispatch @ 0x14064B460 (RawDispatch.c)
 *     PfGetCompletedTrace @ 0x14064B654 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14064B8E0 (PfTTraceListAdd.c)
 *     PiUEventHandleRegistration @ 0x140655C04 (PiUEventHandleRegistration.c)
 *     PfSnEndTrace @ 0x140669374 (PfSnEndTrace.c)
 *     RawCreate @ 0x14068F470 (RawCreate.c)
 *     RawCleanup @ 0x14068F7AC (RawCleanup.c)
 *     RawClose @ 0x14068F918 (RawClose.c)
 *     CmpRemoveFromDelayedDeref @ 0x140692AC0 (CmpRemoveFromDelayedDeref.c)
 *     CmpFreeKeyControlBlock @ 0x140692C14 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140692D6C (CmpRemoveFromDelayedClose.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140692DF4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDelayFreeCmRm @ 0x140693150 (CmpDelayFreeCmRm.c)
 *     CmpWorkerEngineWorker @ 0x1406978C0 (CmpWorkerEngineWorker.c)
 *     CmpAddToDelayedClose @ 0x1406ADBDC (CmpAddToDelayedClose.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406B4DE0 (KeSynchronizeWithDynamicProcessors.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406B9450 (FsRtlDeleteKeyFromTunnelCache.c)
 *     PfSnGetCompletedTrace @ 0x1406BAA9C (PfSnGetCompletedTrace.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1406C749C (CmWorkerEngineQueueWorkItem.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C80B8 (PiUEventFreeClientRegistrationContext.c)
 *     CmpDelayFreeRMWorker @ 0x1406CC7B0 (CmpDelayFreeRMWorker.c)
 *     PiUEventHandleUnregisterClient @ 0x1406CE82C (PiUEventHandleUnregisterClient.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406D0BA0 (PfSnTracingStateExWorkerRoutine.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DAC04 (PnpBusTypeGuidGetIndex.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406DB570 (PoUnregisterPowerSettingCallback.c)
 *     ExSwapinWorkerThreads @ 0x1406E033C (ExSwapinWorkerThreads.c)
 *     DbgkClearProcessDebugObject @ 0x1406E1394 (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x1406E1458 (PopFreeSessionState.c)
 *     PopQueryPowerSettingUlong @ 0x1406E1FEC (PopQueryPowerSettingUlong.c)
 *     PnpProcessAssignResources @ 0x1406E836C (PnpProcessAssignResources.c)
 *     PnpOrphanNotification @ 0x1406EE240 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1406EE28C (PnpCleanupDeviceRegistryValues.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F7500 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1406F9440 (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FB154 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x1406FBC18 (PiQueryResourceRequirements.c)
 *     PnpFreeDeviceInstancePath @ 0x1406FEAA8 (PnpFreeDeviceInstancePath.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1406FEDF0 (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1406FEEF4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7F0 (PiUEventHandleVetoEvent.c)
 *     RawUserFsCtrl @ 0x1407004C0 (RawUserFsCtrl.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407014DC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiUEventBroadcastEventWorker @ 0x140702FD0 (PiUEventBroadcastEventWorker.c)
 *     IoRegisterPlugPlayNotification @ 0x140703160 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x14070351C (PnpDeferNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14070A574 (PnpNotifyDeviceClassChange.c)
 *     PoVolumeDevice @ 0x14070CE6C (PoVolumeDevice.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14070EC84 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x14071006C (PiUEventNotifyDeviceInterfaceChange.c)
 *     CmpAddStringToMapping @ 0x14071E7A4 (CmpAddStringToMapping.c)
 *     IopLegacyResourceAllocation @ 0x14072CEB4 (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x14072D148 (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x14072DFBC (PnpBuildCmResourceLists.c)
 *     PopRequestShutdownWait @ 0x140740784 (PopRequestShutdownWait.c)
 *     PfTInitialize @ 0x140751D78 (PfTInitialize.c)
 *     PfTStart @ 0x140752A9C (PfTStart.c)
 *     KeRegisterProcessorChangeCallback @ 0x140759CD0 (KeRegisterProcessorChangeCallback.c)
 *     PnpRestartDeviceNode @ 0x14075FE8C (PnpRestartDeviceNode.c)
 *     WheaCrashDumpInitializationComplete @ 0x140763AAC (WheaCrashDumpInitializationComplete.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1407ED2A4 (CmWorkerEngineDequeueWorkItem.c)
 *     CmpGetMappingHiveForString @ 0x1407F3394 (CmpGetMappingHiveForString.c)
 *     DbgkOpenProcessDebugPort @ 0x14080E3B8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x14080E7C0 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x14080EA98 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x14080F424 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x14080F70C (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x14080FE60 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x1408101A0 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140810320 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408198D8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14081B03C (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x140825D04 (PnpNotifyHwProfileChange.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14082AF08 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1408325CC (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408327E4 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14083286C (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140832914 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140832A5C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x140832B18 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140832B64 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x140833258 (PnpRemoveEventFromQueue.c)
 *     PiUpdateDeviceResourceLists @ 0x140841658 (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x1408651FC (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x1408689E0 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x140868AB0 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x14086B3C0 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x1408CE408 (ExpUpdateDebugInfo.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030F934 (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v5; // rcx
  int SessionId; // eax
  __int64 v7; // rcx
  bool v8; // zf
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 AbOrphanedEntrySummary; // si
  int v11; // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+60h] [rbp+18h]

  v1 = 0LL;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_20;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    AbEntrySummary = CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  v12 = v5;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  v1 = (__int64)&CurrentThread->LockEntries[v5];
  if ( !v1 )
  {
LABEL_20:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_14043B950[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v1 + 40) = SessionId;
  *(_QWORD *)(v1 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, FastMutex, &v11);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v7);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, v1);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
