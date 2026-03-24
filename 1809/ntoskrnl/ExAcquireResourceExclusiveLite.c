/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1400505F0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x1400AE2D0 (CcPinFileData.c)
 *     SepDesktopAppxSubProcessToken @ 0x1400DA020 (SepDesktopAppxSubProcessToken.c)
 *     MiProcessLoaderEntry @ 0x1400F5BAC (MiProcessLoaderEntry.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400F5E20 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     SepQueueWorkItem @ 0x14012A09C (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14012FB40 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x140139DCC (SeTokenSetNoChildProcessRestricted.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF64 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x1401884AC (IoConfigureCrashDump.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1401B70C8 (SeTokenSetRedirectionTrustPolicy.c)
 *     CcUnpinRepinnedBcb @ 0x140269DD0 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140280528 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14028ABD0 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14028B958 (PiDmaGuardQueueRemoveEntry.c)
 *     MiAcquireResourceExclusiveLite @ 0x1402A6110 (MiAcquireResourceExclusiveLite.c)
 *     RtlpAllocateHeap @ 0x1402EFD30 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1402F1EC8 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1402F2C18 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1402FE5F4 (SepInternalSetSecurityAttributesToken.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14031BA00 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x140577C68 (IoShutdownSystem.c)
 *     PnpNotifyTargetDeviceChange @ 0x14058F46C (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14058FC40 (PiDcHandleCustomDeviceEvent.c)
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140596E08 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059D8F4 (PnpAcquireDependencyRelationsLock.c)
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     CmpLockRegistryExclusive @ 0x1405B16C8 (CmpLockRegistryExclusive.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1405B9614 (PspSetEnergyTrackingStateJobTree.c)
 *     SeSetSessionIdToken @ 0x1405BC45C (SeSetSessionIdToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1405BD728 (SepReferenceLogonSessionSilo.c)
 *     SeSetMandatoryPolicyToken @ 0x1405BDA08 (SeSetMandatoryPolicyToken.c)
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DD0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DEB10 (FsRtlAcquireFileExclusiveCommon.c)
 *     PspLockJobExclusive @ 0x1405FE100 (PspLockJobExclusive.c)
 *     PspLockJobConditionally @ 0x1406006E4 (PspLockJobConditionally.c)
 *     PspLockJobChain @ 0x1406007CC (PspLockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140604D74 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobsAndProcessExclusive @ 0x140605CC4 (PspLockJobsAndProcessExclusive.c)
 *     NtAdjustPrivilegesToken @ 0x1406099A0 (NtAdjustPrivilegesToken.c)
 *     NtCreateTimer @ 0x140623F30 (NtCreateTimer.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     MmLockPagableDataSection @ 0x140651660 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140651760 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x140653B0C (MiCancelPhase0Locking.c)
 *     NtCreateLowBoxToken @ 0x140654F70 (NtCreateLowBoxToken.c)
 *     ExAcquireTimeRefreshLock @ 0x14066583C (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140666120 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnCheckActionsNeeded @ 0x140667E3C (PfSnCheckActionsNeeded.c)
 *     PpCheckInDriverDatabase @ 0x14067F0DC (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140680C90 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     CmpStopRMLog @ 0x1406931BC (CmpStopRMLog.c)
 *     IopGetSetSecurityObject @ 0x1406990D0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140699538 (IopSetDeviceSecurityDescriptor.c)
 *     PiDrvDbLoadNode @ 0x1406A9AF4 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x1406A9C58 (PiDrvDbUnloadNode.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB04 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1406ACE38 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1406ACEA0 (PspFreezeJobTree.c)
 *     NtGetMUIRegistryInfo @ 0x1406AD5C0 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406AE1DC (SepCreateLogonSessionTrack.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406B2464 (_CmGetDeviceSoftwareKey.c)
 *     SepDeReferenceLogonSession @ 0x1406B35E0 (SepDeReferenceLogonSession.c)
 *     IoOpenDeviceRegistryKey @ 0x1406B3C30 (IoOpenDeviceRegistryKey.c)
 *     NtAdjustGroupsToken @ 0x1406B58D0 (NtAdjustGroupsToken.c)
 *     SepUpdateLogonSessionTrack @ 0x1406BC774 (SepUpdateLogonSessionTrack.c)
 *     PspSetBackgroundJobTree @ 0x1406C9D18 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x1406CC6F4 (SeSetVirtualizationToken.c)
 *     IopBootLog @ 0x1406CF234 (IopBootLog.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406D0110 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PspSetQuotaLimits @ 0x1406D10F8 (PspSetQuotaLimits.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406D2E38 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406D2FC4 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D52A0 (IoGetDeviceInterfaceAlias.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfacePropertySet @ 0x1406D777C (PiSwIrpInterfacePropertySet.c)
 *     PiSwCompleteCreate @ 0x1406D806C (PiSwCompleteCreate.c)
 *     PiSwPdoPnPDispatch @ 0x1406D8330 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpCleanup @ 0x1406D8A48 (PiSwIrpCleanup.c)
 *     PiSwDeviceFree @ 0x1406D8C08 (PiSwDeviceFree.c)
 *     IopGetRootDevices @ 0x1406DA3F4 (IopGetRootDevices.c)
 *     PopAcquireAdaptiveLock @ 0x1406DC6C4 (PopAcquireAdaptiveLock.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1406DDCF4 (WmiAcquireSmbiosLockExclusive.c)
 *     SepBlockAccessForLogonSession @ 0x1406E162C (SepBlockAccessForLogonSession.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F14 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E10 (PipEnumerateCompleted.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E5250 (PiPnpRtlSetObjectProperty.c)
 *     PiSwProcessParentStartIrp @ 0x1406EB9DC (PiSwProcessParentStartIrp.c)
 *     PnpChainDereferenceComplete @ 0x1406ECC08 (PnpChainDereferenceComplete.c)
 *     PiSwStopDestroy @ 0x1406ED198 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1406ED238 (PiSwProcessParentRemoveIrp.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED72C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8AC (PnpQueuePendingSurpriseRemoval.c)
 *     PpDeviceRegistration @ 0x1406EE2C8 (PpDeviceRegistration.c)
 *     PnpDelayedRemoveWorker @ 0x1406EE820 (PnpDelayedRemoveWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x1406EF3FC (PnpDisableDeviceInterfaces.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F1AE0 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F20 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F694C (PiPnpRtlSetDeviceRegProperty.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F71D8 (SepDeleteLogonSessionTrack.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F74E0 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x1406F7E98 (CmpTransWriteLog.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406F9730 (PiDmRemoveCacheReferenceForObject.c)
 *     CmpAccountForLogReservation @ 0x1406FAAC0 (CmpAccountForLogReservation.c)
 *     IopDoDeferredSetInterfaceState @ 0x1406FD6CC (IopDoDeferredSetInterfaceState.c)
 *     CmpCleanupTransactionState @ 0x140701C2C (CmpCleanupTransactionState.c)
 *     PiDmListAddObjectWorker @ 0x140702958 (PiDmListAddObjectWorker.c)
 *     NtMapCMFModule @ 0x1407067A0 (NtMapCMFModule.c)
 *     IoUnregisterFileSystem @ 0x140706BA0 (IoUnregisterFileSystem.c)
 *     PnpSetDevicePropertyData @ 0x1407071D8 (PnpSetDevicePropertyData.c)
 *     IopRegisterDeviceInterface @ 0x140709AD4 (IopRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14070A3F8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpNotifyDeviceClassChange @ 0x14070A554 (PnpNotifyDeviceClassChange.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14070CA00 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFileSystem @ 0x14070D120 (IoRegisterFileSystem.c)
 *     CmpStartRMLog @ 0x14070E314 (CmpStartRMLog.c)
 *     MiRememberUnloadedDriver @ 0x14070EA6C (MiRememberUnloadedDriver.c)
 *     IoSetDeviceInterfaceState @ 0x14070F880 (IoSetDeviceInterfaceState.c)
 *     PiSwIrpPropertySet @ 0x14071D214 (PiSwIrpPropertySet.c)
 *     MiWriteProtectSystemImages @ 0x14072B5E0 (MiWriteProtectSystemImages.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140736E40 (SepRmGlobalSaclSetWrkr.c)
 *     PpDevCfgProcessDevices @ 0x14073A48C (PpDevCfgProcessDevices.c)
 *     SepRmCommandServerThread @ 0x1407402A0 (SepRmCommandServerThread.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745708 (IopCopyBootLogRegistryToFile.c)
 *     SeExchangePrimaryToken @ 0x140748B98 (SeExchangePrimaryToken.c)
 *     MmFreeBootDriverInitializationCode @ 0x14074B61C (MmFreeBootDriverInitializationCode.c)
 *     IoInitializeCrashDump @ 0x14074CFA0 (IoInitializeCrashDump.c)
 *     PpReleaseBootDDB @ 0x140750478 (PpReleaseBootDDB.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140753ABC (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiSwIrpInterfaceSetState @ 0x140753E24 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FAC (PiSwIrpInterfaceRegister.c)
 *     IoReportRootDevice @ 0x140758BF0 (IoReportRootDevice.c)
 *     PiSwIrpSetLifetime @ 0x140759498 (PiSwIrpSetLifetime.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14075B6CC (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075BF60 (IoRegisterFsRegistrationChangeMountAware.c)
 *     TtmpAcquireSessionById @ 0x140761674 (TtmpAcquireSessionById.c)
 *     NtFlushInstallUILanguage @ 0x140761760 (NtFlushInstallUILanguage.c)
 *     PiSwIrpGetLifetime @ 0x14076193C (PiSwIrpGetLifetime.c)
 *     FsRtlCopyWrite @ 0x1408140D0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140814AE0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x140816538 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1408166E4 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140819440 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x14081A014 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x14081CB00 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x14081EF84 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x140824718 (PiGetDeviceRegistryProperty.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140825A00 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x140825ADC (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x140825CE4 (PnpNotifyHwProfileChange.c)
 *     PiDmListRemoveObjectWorker @ 0x1408297A8 (PiDmListRemoveObjectWorker.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140837188 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E04 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x140839040 (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x14083C164 (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x1408409E4 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x140840B20 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14086DFF0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14086E420 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogResetInternalState @ 0x14086E748 (PopDripsWatchdogResetInternalState.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14086E92C (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x14086EA4C (PopDripsWatchdogStopWatchdog.c)
 *     PopCancelDripsWatchdog @ 0x1408793A4 (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C20 (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x14087A050 (PopSetDripsWatchdog.c)
 *     TtmpStopCallout @ 0x14087E6CC (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x14087F060 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x14087F2A0 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x14087F71C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x14087F888 (TtmInitCurrentSession.c)
 *     TtmpInitiateModernStandbyTransition @ 0x140880B00 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x140881018 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1408810C0 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x140881400 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140881988 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x140882230 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140882424 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140882594 (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x140882760 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x140889C28 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x14088A380 (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x140895F30 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14089BD64 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14089BFE0 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x1408A2740 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408A2838 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408A2960 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1408A2B00 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x1408CC818 (ExpQuerySingleModuleInformation.c)
 *     AdtpBuildAccessesString @ 0x1408EFEAC (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x1408F5AF8 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140902ABC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140905E3C (PnpGetDeviceInstanceRegistryValue.c)
 *     MiUnlockBootPageSections @ 0x1409BCD50 (MiUnlockBootPageSections.c)
 *     PipResetDevices @ 0x1409CA1C0 (PipResetDevices.c)
 *     IopInitCrashDumpRegCallback @ 0x1409D2F70 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceExclusive @ 0x140050D30 (ExpTryAcquireResourceExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x1400D1BD8 (ExpApplyPrewaitBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140108270 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x1401138F0 (ExpWaitForResource.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140120DB4 (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140164AD4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140313480 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140313948 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // cx
  unsigned __int8 v5; // r8
  __int16 v6; // cx
  struct _KTHREAD *v7; // rbp
  bool v8; // si
  __int64 v9; // rcx
  BOOLEAN v10; // di
  ULONG v11; // ecx
  ULONG v13; // edi
  unsigned __int8 CurrentIrql; // r10
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[64]; // [rsp+48h] [rbp-40h] BYREF

  Flag = Resource->Flag;
  v5 = (Wait == 0) + 1;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v6 = Flag & 1;
  if ( v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > v5 )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v5, 0LL);
    if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v6 )
  {
    v7 = KeGetCurrentThread();
    v8 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    __incgsdword(0x6378u);
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    v10 = ExpTryAcquireResourceExclusive(Resource);
    if ( v10 )
    {
      v11 = Resource->OwnerEntry.TableSize & 7;
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v7;
      Resource->OwnerEntry.TableSize = v11 | 8;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x637Cu);
      __incgsdword(0x6364u);
      if ( v8 )
        PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
      return v10;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == v7 )
    {
      v13 = Resource->OwnerEntry.TableSize + 8;
      Resource->OwnerEntry.TableSize = v13;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x6380u);
      __incgsdword(0x6364u);
      if ( !v8 )
        return 1;
      v17 = 65585LL;
      v16 = v13 >> 3;
    }
    else
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x6388u);
        return 0;
      }
      ExpPrepareToWaitForResourceExclusive(v9, v7, v19);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x6384u);
      if ( v8 )
        PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
      ExpApplyPrewaitBoost(Resource);
      ExpWaitForResource(Resource, v19, 66084LL, ExpApplyRewaitBoost);
      ExpBoostIoAfterAcquire(Resource, v7, 0LL);
      __incgsdword(0x637Cu);
      __incgsdword(0x6364u);
      if ( !v8 )
        return 1;
      v16 = 1LL;
      v17 = 65569LL;
    }
    PerfLogExecutiveResourceAcquire(v17, Resource, v16, Resource->ContentionCount);
    return 1;
  }
  return ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
}
