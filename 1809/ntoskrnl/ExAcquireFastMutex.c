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
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     PoRunDownDeviceObject @ 0x1400DAC00 (PoRunDownDeviceObject.c)
 *     CcPrepareMdlWrite @ 0x1400E1AC0 (CcPrepareMdlWrite.c)
 *     ExpAllocateBigPool @ 0x1400E6A70 (ExpAllocateBigPool.c)
 *     CcGetFlushedValidData @ 0x1400E8840 (CcGetFlushedValidData.c)
 *     RawCompletionRoutine @ 0x1400F97C0 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x14010C6BC (RawInitiateDeleteVolume.c)
 *     FsRtlAddLargeMcbEntry @ 0x140110400 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x140110470 (FsRtlTruncateLargeMcb.c)
 *     CmpWaitForLateUnloadWorker @ 0x140111A18 (CmpWaitForLateUnloadWorker.c)
 *     FsRtlInsertPerStreamContext @ 0x140114360 (FsRtlInsertPerStreamContext.c)
 *     CcDeleteMbcb @ 0x140125A58 (CcDeleteMbcb.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14012CFE4 (CcAcquireBcbLockAndVacbLock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14013325C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140136DA8 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14013F81C (FsRtlpCancelExclusiveIrp.c)
 *     PopRunNormalIrpWorkers @ 0x140153494 (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x14015887C (PopRunMaximumIrpWorkers.c)
 *     PnpDisableDeviceCompletionQueueWatchdog @ 0x140159DD0 (PnpDisableDeviceCompletionQueueWatchdog.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140160064 (PnpUnregisterPlugPlayNotification.c)
 *     PopIrpWorker @ 0x140171840 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x1401764C0 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x14017DEFC (PopInitilizeAcDcSettings.c)
 *     PopIrpWorkerControl @ 0x140191B10 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x140269EE0 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x14026A170 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AC9C (CcUnmapInactiveViewsInternal.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x14026EA50 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x14026EB30 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x14026EBE0 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x14026EC60 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x14026EDC0 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x14026EE20 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x14026EEB0 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x14026F060 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14026FD78 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14026FE58 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140270360 (FsRtlpWaitOnIrp.c)
 *     FsRtlRemovePerStreamContext @ 0x140270AB0 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x140288C24 (PnpDisableUserModeNotifications.c)
 *     PnpDelayedRemoveWorkerWatchdogWorkItem @ 0x140289C20 (PnpDelayedRemoveWorkerWatchdogWorkItem.c)
 *     PnpDeviceCompletionQueueWatchdogWorkItem @ 0x140289C60 (PnpDeviceCompletionQueueWatchdogWorkItem.c)
 *     PnpDisableDelayedRemoveWorkerWatchdog @ 0x140289CA8 (PnpDisableDelayedRemoveWorkerWatchdog.c)
 *     PnpEventWorkerWatchdogWorkItem @ 0x140289D40 (PnpEventWorkerWatchdogWorkItem.c)
 *     KiOpPatchCode @ 0x14029C7D8 (KiOpPatchCode.c)
 *     RawVerifyVolume @ 0x1402EC484 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x1402F5F3C (RtlpTraceDatabaseAcquireLock.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExDeferredFreePool @ 0x14034E7A0 (ExDeferredFreePool.c)
 *     PopFlushVolumes @ 0x14056E750 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x14056E9E0 (PopFlushVolumeWorker.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14058005C (WheapCreateTriageDumpFromPreviousSession.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1405829D0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140582D00 (FsRtlFindInTunnelCacheEx.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     PnpBusTypeGuidGet @ 0x140588F70 (PnpBusTypeGuidGet.c)
 *     PopDiagTraceControlCallback @ 0x140588FE0 (PopDiagTraceControlCallback.c)
 *     PopDispatchNotificationsToList @ 0x140589518 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x14058A744 (PopGetSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x14058AEE0 (PoRegisterPowerSettingCallback.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14058BAC0 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
 *     PnpProcessDeferredRegistrations @ 0x14058CF08 (PnpProcessDeferredRegistrations.c)
 *     PopGetSettingNotificationName @ 0x14058F66C (PopGetSettingNotificationName.c)
 *     PiUEventProcessEventWorker @ 0x14058F940 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x14058FAD8 (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x14058FF60 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x14059046C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140590668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x140590938 (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140590A24 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x140590AC4 (PiUEventReferenceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x140590ED8 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140591038 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IopDestroyDeviceNode @ 0x1405A0300 (IopDestroyDeviceNode.c)
 *     PiUEventHandleGetEvent @ 0x1405A0A1C (PiUEventHandleGetEvent.c)
 *     RawScanDeletedList @ 0x1405A3620 (RawScanDeletedList.c)
 *     RawMountVolume @ 0x1405A3988 (RawMountVolume.c)
 *     PopCallPowerSettingCallback @ 0x1405B13B8 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1405B1874 (PopLogDisabledSleepReason.c)
 *     CmpDelayDerefKCBWorker @ 0x1405B20B0 (CmpDelayDerefKCBWorker.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405C5680 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C5A10 (EtwpSetProviderTraitsCommon.c)
 *     CmpDelayCloseWorker @ 0x1405D2760 (CmpDelayCloseWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405D5264 (CmpDelayDerefKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1405D775C (CmpAllocateKeyControlBlock.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1405DF85C (FsRtlAcquireToCreateMappedSection.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     DbgkCopyProcessDebugPort @ 0x14060A650 (DbgkCopyProcessDebugPort.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140639B10 (FsRtlTeardownPerStreamContexts.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     RawReadWriteDeviceControl @ 0x14064C538 (RawReadWriteDeviceControl.c)
 *     RawDispatch @ 0x14064C600 (RawDispatch.c)
 *     PfGetCompletedTrace @ 0x14064C7F4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14064CA80 (PfTTraceListAdd.c)
 *     PiUEventHandleRegistration @ 0x140656DA4 (PiUEventHandleRegistration.c)
 *     PfSnEndTrace @ 0x14066A514 (PfSnEndTrace.c)
 *     RawCreate @ 0x140690610 (RawCreate.c)
 *     RawCleanup @ 0x14069094C (RawCleanup.c)
 *     RawClose @ 0x140690AB8 (RawClose.c)
 *     CmpRemoveFromDelayedDeref @ 0x140693C60 (CmpRemoveFromDelayedDeref.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140693F0C (CmpRemoveFromDelayedClose.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140693F94 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDelayFreeCmRm @ 0x1406942F0 (CmpDelayFreeCmRm.c)
 *     CmpWorkerEngineWorker @ 0x140698A60 (CmpWorkerEngineWorker.c)
 *     CmpAddToDelayedClose @ 0x1406AEE5C (CmpAddToDelayedClose.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406B6060 (KeSynchronizeWithDynamicProcessors.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406BA6D0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     PfSnGetCompletedTrace @ 0x1406BBD1C (PfSnGetCompletedTrace.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1406C871C (CmWorkerEngineQueueWorkItem.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C9338 (PiUEventFreeClientRegistrationContext.c)
 *     CmpDelayFreeRMWorker @ 0x1406CDA30 (CmpDelayFreeRMWorker.c)
 *     PiUEventHandleUnregisterClient @ 0x1406CFAAC (PiUEventHandleUnregisterClient.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406D1E20 (PfSnTracingStateExWorkerRoutine.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DBE84 (PnpBusTypeGuidGetIndex.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406DC7F0 (PoUnregisterPowerSettingCallback.c)
 *     ExSwapinWorkerThreads @ 0x1406E15BC (ExSwapinWorkerThreads.c)
 *     DbgkClearProcessDebugObject @ 0x1406E2614 (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x1406E26D8 (PopFreeSessionState.c)
 *     PopQueryPowerSettingUlong @ 0x1406E326C (PopQueryPowerSettingUlong.c)
 *     PnpProcessAssignResources @ 0x1406E95EC (PnpProcessAssignResources.c)
 *     PnpOrphanNotification @ 0x1406EF4C0 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1406EF50C (PnpCleanupDeviceRegistryValues.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F8780 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1406FA6C0 (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FC3D4 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x1406FCE98 (PiQueryResourceRequirements.c)
 *     PnpFreeDeviceInstancePath @ 0x1406FFD28 (PnpFreeDeviceInstancePath.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140700070 (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140700174 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventHandleVetoEvent @ 0x140700A70 (PiUEventHandleVetoEvent.c)
 *     RawUserFsCtrl @ 0x140701740 (RawUserFsCtrl.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14070275C (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiUEventBroadcastEventWorker @ 0x140704250 (PiUEventBroadcastEventWorker.c)
 *     IoRegisterPlugPlayNotification @ 0x1407043E0 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x14070479C (PnpDeferNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14070B7F4 (PnpNotifyDeviceClassChange.c)
 *     PoVolumeDevice @ 0x14070E0EC (PoVolumeDevice.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14070FF04 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1407112EC (PiUEventNotifyDeviceInterfaceChange.c)
 *     CmpAddStringToMapping @ 0x14071FA24 (CmpAddStringToMapping.c)
 *     IopLegacyResourceAllocation @ 0x14072E084 (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x14072E318 (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x14072F18C (PnpBuildCmResourceLists.c)
 *     PopRequestShutdownWait @ 0x140741954 (PopRequestShutdownWait.c)
 *     PfTInitialize @ 0x140752F48 (PfTInitialize.c)
 *     PfTStart @ 0x140753C6C (PfTStart.c)
 *     KeRegisterProcessorChangeCallback @ 0x14075AEA0 (KeRegisterProcessorChangeCallback.c)
 *     PnpRestartDeviceNode @ 0x14076105C (PnpRestartDeviceNode.c)
 *     WheaCrashDumpInitializationComplete @ 0x140764C7C (WheaCrashDumpInitializationComplete.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1407EE484 (CmWorkerEngineDequeueWorkItem.c)
 *     CmpGetMappingHiveForString @ 0x1407F4574 (CmpGetMappingHiveForString.c)
 *     DbgkOpenProcessDebugPort @ 0x14080F598 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x14080F9A0 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x14080FC78 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140810604 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1408108EC (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140811040 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140811380 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140811500 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x14081AAB8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x140826EE4 (PnpNotifyHwProfileChange.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14082C0E8 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14083380C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140833A24 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140833AAC (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140833B54 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140833C9C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x140833D58 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140833DA4 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x140834498 (PnpRemoveEventFromQueue.c)
 *     PiUpdateDeviceResourceLists @ 0x140842898 (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x14086643C (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x140869C20 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x140869CF0 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x14086C600 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x1408CF6A8 (ExpUpdateDebugInfo.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
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
    && byte_14043CA10[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, (PRTL_BALANCED_NODE)v1);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
