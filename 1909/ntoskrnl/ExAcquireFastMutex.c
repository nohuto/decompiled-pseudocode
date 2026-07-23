/*
 * XREFs of ExAcquireFastMutex @ 0x14003E1A0
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140009D4C (CcZeroEndOfLastPage.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14003E0C0 (FsRtlLookupPerStreamContextInternal.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140077298 (CcAcquireBcbLockAndVacbLock.c)
 *     CcAcquireByteRangeForWrite @ 0x1400780F0 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x140078B60 (CcGetDirtyPagesHelper.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     RawInitiateDeleteVolume @ 0x1400D4F78 (RawInitiateDeleteVolume.c)
 *     PnpDisableWatchdog @ 0x1400EFC58 (PnpDisableWatchdog.c)
 *     PopGetPowerSettingValue @ 0x1400F0C8C (PopGetPowerSettingValue.c)
 *     PoRunDownDeviceObject @ 0x1400F0FD8 (PoRunDownDeviceObject.c)
 *     RawCompletionRoutine @ 0x1400F2690 (RawCompletionRoutine.c)
 *     CmpWaitForLateUnloadWorker @ 0x1400F8894 (CmpWaitForLateUnloadWorker.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1401037BC (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlAddLargeMcbEntry @ 0x14010B4C0 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x14010B530 (FsRtlTruncateLargeMcb.c)
 *     FsRtlInsertPerStreamContext @ 0x140117110 (FsRtlInsertPerStreamContext.c)
 *     CcGetFlushedValidData @ 0x140124870 (CcGetFlushedValidData.c)
 *     CcDeleteMbcb @ 0x1401290E0 (CcDeleteMbcb.c)
 *     CcPrepareMdlWrite @ 0x140136D70 (CcPrepareMdlWrite.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14013A454 (FsRtlPrivateInitializeFileLock.c)
 *     PopRunMaximumIrpWorkers @ 0x1401684F0 (PopRunMaximumIrpWorkers.c)
 *     PopRunNormalIrpWorkers @ 0x14016A8E8 (PopRunNormalIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x140180430 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x14018C46C (PopInitilizeAcDcSettings.c)
 *     PopIrpWorkerControl @ 0x14019D0F0 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x14027D490 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x14027D720 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E314 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x140282070 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x140282150 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x140282200 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x140282280 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1402823E0 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x140282440 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1402824D0 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x140282680 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140283498 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1402835B0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x140283690 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140283BBC (FsRtlpWaitOnIrp.c)
 *     FsRtlRemovePerStreamContext @ 0x140284320 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x14029E904 (PnpDisableUserModeNotifications.c)
 *     PnpWatchdogWorkItem @ 0x14029FF30 (PnpWatchdogWorkItem.c)
 *     KiOpPatchCode @ 0x1402B3650 (KiOpPatchCode.c)
 *     PopAcquireIrpWorkerLock @ 0x14030051C (PopAcquireIrpWorkerLock.c)
 *     RawVerifyVolume @ 0x14030A500 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x14031437C (RtlpTraceDatabaseAcquireLock.c)
 *     PopFlushVolumes @ 0x14059C990 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x14059CC40 (PopFlushVolumeWorker.c)
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x1405AF0BC (WheapCreateTriageDumpFromPreviousSession.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1405B62FC (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B6594 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IoGetDeviceProperty @ 0x1405BFB40 (IoGetDeviceProperty.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C48F0 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405D4B70 (EtwpReleaseProviderTraitsReference.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1405D5D04 (FsRtlAcquireToCreateMappedSection.c)
 *     CmpDelayCloseWorker @ 0x140661A50 (CmpDelayCloseWorker.c)
 *     PfGetCompletedTrace @ 0x14066AF34 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14066B1C0 (PfTTraceListAdd.c)
 *     RawReadWriteDeviceControl @ 0x14066B30C (RawReadWriteDeviceControl.c)
 *     RawDispatch @ 0x14066B3D0 (RawDispatch.c)
 *     RawCreate @ 0x14066E7D4 (RawCreate.c)
 *     RawClose @ 0x14066E964 (RawClose.c)
 *     PopLogDisabledSleepReason @ 0x14066EDF0 (PopLogDisabledSleepReason.c)
 *     PfSnEndTrace @ 0x14066F1D4 (PfSnEndTrace.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PopCallPowerSettingCallback @ 0x140670BF0 (PopCallPowerSettingCallback.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140671DA0 (FsRtlTeardownPerStreamContexts.c)
 *     PopDispatchNotificationsToList @ 0x140672234 (PopDispatchNotificationsToList.c)
 *     DbgkCopyProcessDebugPort @ 0x140677E60 (DbgkCopyProcessDebugPort.c)
 *     RawMountVolume @ 0x140691310 (RawMountVolume.c)
 *     PiUEventHandleGetEvent @ 0x140695F54 (PiUEventHandleGetEvent.c)
 *     PnpInsertEventInQueue @ 0x140696EC0 (PnpInsertEventInQueue.c)
 *     PiUEventProcessEventWorker @ 0x140697470 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x1406975B0 (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyClient @ 0x140697B04 (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140697BE8 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x140697C88 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x1406989F0 (PiUEventNotifyUserMode.c)
 *     PnpProcessDeferredRegistrations @ 0x140699710 (PnpProcessDeferredRegistrations.c)
 *     PopGetSettingNotificationName @ 0x14069D2A4 (PopGetSettingNotificationName.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14069D5A0 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x14069DE28 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1406A0AF0 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingValue @ 0x1406A0DB8 (PopGetSettingValue.c)
 *     CmpWorkerEngineWorker @ 0x1406A5260 (CmpWorkerEngineWorker.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406B4CF0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406B5280 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406B53F0 (FsRtlAddToTunnelCacheEx.c)
 *     RawCleanup @ 0x1406B6E6C (RawCleanup.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406B9DFC (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpRemoveFromDelayedClose @ 0x1406BA7A0 (CmpRemoveFromDelayedClose.c)
 *     CmpDelayFreeCmRm @ 0x1406BA994 (CmpDelayFreeCmRm.c)
 *     CmpAddToDelayedClose @ 0x1406C54C0 (CmpAddToDelayedClose.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406D8BFC (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1406DC6B8 (PfSnGetCompletedTrace.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1406E7BA8 (CmWorkerEngineQueueWorkItem.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406EA0E4 (PiUEventFreeClientRegistrationContext.c)
 *     RawScanDeletedList @ 0x1406ED978 (RawScanDeletedList.c)
 *     CmpDelayFreeRMWorker @ 0x1406EDBD0 (CmpDelayFreeRMWorker.c)
 *     PiUEventHandleUnregisterClient @ 0x1406EF080 (PiUEventHandleUnregisterClient.c)
 *     PnpBusTypeGuidGet @ 0x1406EFA70 (PnpBusTypeGuidGet.c)
 *     PopDiagTraceControlCallback @ 0x1406EFCB0 (PopDiagTraceControlCallback.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406F1CC0 (PfSnTracingStateExWorkerRoutine.c)
 *     CmpGetMappingHiveForString @ 0x1406F6C1C (CmpGetMappingHiveForString.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140716F5C (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpFreeDeviceInstancePath @ 0x14071C74C (PnpFreeDeviceInstancePath.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14071C7A0 (PiUEventQueueBroadcastEventEntry.c)
 *     PnpBusTypeGuidGetIndex @ 0x14071CEDC (PnpBusTypeGuidGetIndex.c)
 *     PnpDeferNotification @ 0x140722B20 (PnpDeferNotification.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140723C70 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x140724720 (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14072495C (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiUEventBroadcastEventWorker @ 0x140725410 (PiUEventBroadcastEventWorker.c)
 *     DbgkClearProcessDebugObject @ 0x1407296E4 (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x1407299D8 (PopFreeSessionState.c)
 *     PopQueryPowerSettingUlong @ 0x14072A99C (PopQueryPowerSettingUlong.c)
 *     ExSwapinWorkerThreads @ 0x14072BB98 (ExSwapinWorkerThreads.c)
 *     RawUserFsCtrl @ 0x14072DCB8 (RawUserFsCtrl.c)
 *     PiUEventHandleVetoEvent @ 0x14072E5D0 (PiUEventHandleVetoEvent.c)
 *     PnpOrphanNotification @ 0x140732640 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14073268C (PnpCleanupDeviceRegistryValues.c)
 *     PnpNotifyDeviceClassChange @ 0x140737AD8 (PnpNotifyDeviceClassChange.c)
 *     PoVolumeDevice @ 0x14073B654 (PoVolumeDevice.c)
 *     CmpAddStringToMapping @ 0x1407479C4 (CmpAddStringToMapping.c)
 *     PoUnregisterPowerSettingCallback @ 0x140747B40 (PoUnregisterPowerSettingCallback.c)
 *     IopReleaseResources @ 0x140751834 (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x14075280C (PnpBuildCmResourceLists.c)
 *     PopRequestShutdownWait @ 0x1407688E4 (PopRequestShutdownWait.c)
 *     PfTInitialize @ 0x14077AAC0 (PfTInitialize.c)
 *     PfTStart @ 0x14077B7C8 (PfTStart.c)
 *     KeRegisterProcessorChangeCallback @ 0x140782580 (KeRegisterProcessorChangeCallback.c)
 *     WheaCrashDumpInitializationComplete @ 0x14078C8EC (WheaCrashDumpInitializationComplete.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x140827440 (CmWorkerEngineDequeueWorkItem.c)
 *     DbgkOpenProcessDebugPort @ 0x1408472F8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140847740 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x140847A20 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x1408483C8 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1408486C0 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140848E40 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140849130 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x1408492B0 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853224 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14085F82C (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x140861AE8 (PnpRestartDeviceNode.c)
 *     PiDqObjectManagerLockData @ 0x140864DDC (PiDqObjectManagerLockData.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140864DF4 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14086C6BC (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x14086C9F0 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14086CB38 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x14086CBF4 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14086CC40 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x14086D280 (PnpRemoveEventFromQueue.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140875828 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x140875998 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x14087C754 (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x1408A0F20 (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x1408A4740 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x1408A4800 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1408A6EE0 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x14090B40C (ExpUpdateDebugInfo.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
    && byte_140467140[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  if ( v7 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
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
