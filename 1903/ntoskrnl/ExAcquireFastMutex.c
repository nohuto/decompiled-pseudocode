/*
 * XREFs of ExAcquireFastMutex @ 0x14003E460
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140009CBC (CcZeroEndOfLastPage.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14003E380 (FsRtlLookupPerStreamContextInternal.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140077028 (CcAcquireBcbLockAndVacbLock.c)
 *     CcAcquireByteRangeForWrite @ 0x140077D30 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x1400787A0 (CcGetDirtyPagesHelper.c)
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 *     PnpDisableWatchdog @ 0x1400B38B0 (PnpDisableWatchdog.c)
 *     PoRunDownDeviceObject @ 0x1400B3FB8 (PoRunDownDeviceObject.c)
 *     RawInitiateDeleteVolume @ 0x1400B59C8 (RawInitiateDeleteVolume.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6CDC (FsRtlpCancelOplockRHIrp.c)
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     PopGetPowerSettingValue @ 0x1400ED34C (PopGetPowerSettingValue.c)
 *     RawCompletionRoutine @ 0x1400FA020 (RawCompletionRoutine.c)
 *     CmpWaitForLateUnloadWorker @ 0x14010B8E4 (CmpWaitForLateUnloadWorker.c)
 *     FsRtlAddLargeMcbEntry @ 0x14010BC10 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x14010BC80 (FsRtlTruncateLargeMcb.c)
 *     FsRtlInsertPerStreamContext @ 0x140115AA0 (FsRtlInsertPerStreamContext.c)
 *     CcGetFlushedValidData @ 0x140123BF0 (CcGetFlushedValidData.c)
 *     CcDeleteMbcb @ 0x1401286C0 (CcDeleteMbcb.c)
 *     CcPrepareMdlWrite @ 0x1401363D0 (CcPrepareMdlWrite.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140139D74 (FsRtlPrivateInitializeFileLock.c)
 *     PopRunNormalIrpWorkers @ 0x1401600C4 (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x140168AA0 (PopRunMaximumIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x14017FD40 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x14018BADC (PopInitilizeAcDcSettings.c)
 *     PopIrpWorkerControl @ 0x14019C970 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x14027D730 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x14027D9C0 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x140282310 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1402823F0 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1402824A0 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x140282520 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x140282680 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1402826E0 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x140282770 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x140282920 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140283738 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140283850 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x140283930 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140283E5C (FsRtlpWaitOnIrp.c)
 *     FsRtlRemovePerStreamContext @ 0x1402845C0 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x14029EBA4 (PnpDisableUserModeNotifications.c)
 *     PnpWatchdogWorkItem @ 0x1402A01D0 (PnpWatchdogWorkItem.c)
 *     KiOpPatchCode @ 0x1402B38F0 (KiOpPatchCode.c)
 *     PopAcquireIrpWorkerLock @ 0x140300A6C (PopAcquireIrpWorkerLock.c)
 *     RawVerifyVolume @ 0x14030AA50 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x14031492C (RtlpTraceDatabaseAcquireLock.c)
 *     PopFlushVolumes @ 0x14059D110 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x14059D3C0 (PopFlushVolumeWorker.c)
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x1405AF0DC (WheapCreateTriageDumpFromPreviousSession.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1405B5F1C (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B61B4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IoGetDeviceProperty @ 0x1405BF670 (IoGetDeviceProperty.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C43F0 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405D4670 (EtwpReleaseProviderTraitsReference.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1405D5544 (FsRtlAcquireToCreateMappedSection.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14063E1EC (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDelayCloseWorker @ 0x14064E890 (CmpDelayCloseWorker.c)
 *     PfGetCompletedTrace @ 0x140657F14 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1406581A0 (PfTTraceListAdd.c)
 *     RawReadWriteDeviceControl @ 0x1406582EC (RawReadWriteDeviceControl.c)
 *     RawDispatch @ 0x1406583B0 (RawDispatch.c)
 *     PfSnEndTrace @ 0x14065CF74 (PfSnEndTrace.c)
 *     CmWorkerEngineQueueWorkItem @ 0x140662BA4 (CmWorkerEngineQueueWorkItem.c)
 *     RawScanDeletedList @ 0x140663388 (RawScanDeletedList.c)
 *     RawMountVolume @ 0x140663EFC (RawMountVolume.c)
 *     PiUEventHandleGetEvent @ 0x140668B34 (PiUEventHandleGetEvent.c)
 *     PnpInsertEventInQueue @ 0x140669AA0 (PnpInsertEventInQueue.c)
 *     PiUEventProcessEventWorker @ 0x14066A5A0 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x14066A6E0 (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyClient @ 0x14066AC34 (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14066AD18 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x14066ADB8 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x14066BB20 (PiUEventNotifyUserMode.c)
 *     PnpProcessDeferredRegistrations @ 0x14066C59C (PnpProcessDeferredRegistrations.c)
 *     DbgkCopyProcessDebugPort @ 0x14067274C (DbgkCopyProcessDebugPort.c)
 *     RawClose @ 0x140682584 (RawClose.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140682680 (FsRtlTeardownPerStreamContexts.c)
 *     RawCleanup @ 0x14068293C (RawCleanup.c)
 *     RawCreate @ 0x140682A8C (RawCreate.c)
 *     CmpRemoveFromDelayedClose @ 0x14069B7F0 (CmpRemoveFromDelayedClose.c)
 *     CmpDelayFreeCmRm @ 0x14069BA64 (CmpDelayFreeCmRm.c)
 *     PopDiagTraceControlCallback @ 0x14069D910 (PopDiagTraceControlCallback.c)
 *     PoRegisterPowerSettingCallback @ 0x14069FF90 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1406A0760 (PopGetSettingNotificationName.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1406A0A60 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x1406A12E8 (PopSetPowerSettingValue.c)
 *     PopCallPowerSettingCallback @ 0x1406A1B6C (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1406A209C (PopLogDisabledSleepReason.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PopDispatchNotificationsToList @ 0x1406A3148 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1406A3430 (PopGetSettingValue.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406B1D50 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406B22E0 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406B2450 (FsRtlAddToTunnelCacheEx.c)
 *     CmpWorkerEngineWorker @ 0x1406BCD20 (CmpWorkerEngineWorker.c)
 *     CmpAddToDelayedClose @ 0x1406C6BE4 (CmpAddToDelayedClose.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406D8F8C (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1406DBA30 (PfSnGetCompletedTrace.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E8EA4 (PiUEventFreeClientRegistrationContext.c)
 *     CmpDelayFreeRMWorker @ 0x1406EC9B0 (CmpDelayFreeRMWorker.c)
 *     PiUEventHandleUnregisterClient @ 0x1406EDD10 (PiUEventHandleUnregisterClient.c)
 *     PnpBusTypeGuidGet @ 0x1406EE350 (PnpBusTypeGuidGet.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406F0220 (PfSnTracingStateExWorkerRoutine.c)
 *     CmpGetMappingHiveForString @ 0x1406F4EAC (CmpGetMappingHiveForString.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140714CA0 (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpFreeDeviceInstancePath @ 0x14071A95C (PnpFreeDeviceInstancePath.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14071A9B0 (PiUEventQueueBroadcastEventEntry.c)
 *     PnpBusTypeGuidGetIndex @ 0x14071B0EC (PnpBusTypeGuidGetIndex.c)
 *     PnpDeferNotification @ 0x140720C80 (PnpDeferNotification.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140721DD0 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x140722880 (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140722ABC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiUEventBroadcastEventWorker @ 0x140723570 (PiUEventBroadcastEventWorker.c)
 *     ExSwapinWorkerThreads @ 0x140727638 (ExSwapinWorkerThreads.c)
 *     DbgkClearProcessDebugObject @ 0x140728374 (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x140728668 (PopFreeSessionState.c)
 *     PopQueryPowerSettingUlong @ 0x14072962C (PopQueryPowerSettingUlong.c)
 *     RawUserFsCtrl @ 0x14072BE18 (RawUserFsCtrl.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 *     PnpOrphanNotification @ 0x1407303E0 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14073042C (PnpCleanupDeviceRegistryValues.c)
 *     PnpNotifyDeviceClassChange @ 0x140735878 (PnpNotifyDeviceClassChange.c)
 *     PoVolumeDevice @ 0x1407393C4 (PoVolumeDevice.c)
 *     CmpAddStringToMapping @ 0x140745AC4 (CmpAddStringToMapping.c)
 *     PoUnregisterPowerSettingCallback @ 0x140745C40 (PoUnregisterPowerSettingCallback.c)
 *     IopReleaseResources @ 0x140750DA4 (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140751D7C (PnpBuildCmResourceLists.c)
 *     PopRequestShutdownWait @ 0x140763ED4 (PopRequestShutdownWait.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 *     PfTStart @ 0x1407781E8 (PfTStart.c)
 *     KeRegisterProcessorChangeCallback @ 0x14077FB60 (KeRegisterProcessorChangeCallback.c)
 *     WheaCrashDumpInitializationComplete @ 0x14078A48C (WheaCrashDumpInitializationComplete.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x140827D40 (CmWorkerEngineDequeueWorkItem.c)
 *     DbgkOpenProcessDebugPort @ 0x140847BF0 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140848040 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x140848320 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140848CC8 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140848FC0 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140849740 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140849A30 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140849BB0 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853B24 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14086012C (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x1408623E8 (PnpRestartDeviceNode.c)
 *     PiDqObjectManagerLockData @ 0x1408656DC (PiDqObjectManagerLockData.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1408656F4 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14086CFBC (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x14086D2F0 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14086D438 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x14086D4F4 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14086D540 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x14086DB80 (PnpRemoveEventFromQueue.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140876128 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x140876298 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x14087D054 (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x1408A4F00 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x1408A4FC0 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1408A7680 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x14090B9AC (ExpUpdateDebugInfo.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v5; // rcx
  int SessionId; // eax
  bool v7; // zf
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 AbOrphanedEntrySummary; // si
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h]

  v1 = 0LL;
  v10 = 0;
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
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  v11 = v5;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  v1 = (__int64)&CurrentThread->LockEntries[v5];
  if ( !v1 )
  {
LABEL_20:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_140467440[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts(CurrentThread, FastMutex, &v10);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, (PRTL_BALANCED_NODE)v1);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
