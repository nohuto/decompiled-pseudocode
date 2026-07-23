/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1400505F0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     SepDesktopAppxSubProcessToken @ 0x1400DA0A0 (SepDesktopAppxSubProcessToken.c)
 *     MiProcessLoaderEntry @ 0x1400F5C2C (MiProcessLoaderEntry.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400F5EA0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     SepQueueWorkItem @ 0x14012A16C (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14012FC10 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x140139ECC (SeTokenSetNoChildProcessRestricted.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140160064 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x1401885EC (IoConfigureCrashDump.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1401B7230 (SeTokenSetRedirectionTrustPolicy.c)
 *     CcUnpinRepinnedBcb @ 0x140269FC0 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140280718 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14028ADC0 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14028BB48 (PiDmaGuardQueueRemoveEntry.c)
 *     MiAcquireResourceExclusiveLite @ 0x1402A6300 (MiAcquireResourceExclusiveLite.c)
 *     RtlpAllocateHeap @ 0x1402EFF20 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1402F20B8 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1402F2E08 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1402FE7E4 (SepInternalSetSecurityAttributesToken.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14031BBF0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x140578C68 (IoShutdownSystem.c)
 *     PnpNotifyTargetDeviceChange @ 0x14059046C (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140590C40 (PiDcHandleCustomDeviceEvent.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059E8F4 (PnpAcquireDependencyRelationsLock.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1405BA614 (PspSetEnergyTrackingStateJobTree.c)
 *     SeSetSessionIdToken @ 0x1405BD45C (SeSetSessionIdToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1405BE728 (SepReferenceLogonSessionSilo.c)
 *     SeSetMandatoryPolicyToken @ 0x1405BEA08 (SeSetMandatoryPolicyToken.c)
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DFB10 (FsRtlAcquireFileExclusiveCommon.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 *     PspLockJobConditionally @ 0x1406016E4 (PspLockJobConditionally.c)
 *     PspLockJobChain @ 0x1406017CC (PspLockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605D74 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobsAndProcessExclusive @ 0x140606CC4 (PspLockJobsAndProcessExclusive.c)
 *     NtAdjustPrivilegesToken @ 0x14060A9A0 (NtAdjustPrivilegesToken.c)
 *     NtCreateTimer @ 0x140624F50 (NtCreateTimer.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     MmLockPagableDataSection @ 0x140652820 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x140654CCC (MiCancelPhase0Locking.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406672E0 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnCheckActionsNeeded @ 0x140668FFC (PfSnCheckActionsNeeded.c)
 *     PpCheckInDriverDatabase @ 0x14068029C (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140681E50 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     CmpStopRMLog @ 0x14069437C (CmpStopRMLog.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14069A6F8 (IopSetDeviceSecurityDescriptor.c)
 *     PiDrvDbLoadNode @ 0x1406AAD94 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x1406AAEF8 (PiDrvDbUnloadNode.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1406AE0D8 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1406AE140 (PspFreezeJobTree.c)
 *     NtGetMUIRegistryInfo @ 0x1406AE860 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406AF47C (SepCreateLogonSessionTrack.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406B3704 (_CmGetDeviceSoftwareKey.c)
 *     SepDeReferenceLogonSession @ 0x1406B4880 (SepDeReferenceLogonSession.c)
 *     IoOpenDeviceRegistryKey @ 0x1406B4ED0 (IoOpenDeviceRegistryKey.c)
 *     NtAdjustGroupsToken @ 0x1406B6B70 (NtAdjustGroupsToken.c)
 *     SepUpdateLogonSessionTrack @ 0x1406BDA14 (SepUpdateLogonSessionTrack.c)
 *     PspSetBackgroundJobTree @ 0x1406CAFB8 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x1406CD994 (SeSetVirtualizationToken.c)
 *     IopBootLog @ 0x1406D04D4 (IopBootLog.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406D13B0 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PspSetQuotaLimits @ 0x1406D2398 (PspSetQuotaLimits.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406D40D8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406D4264 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D6540 (IoGetDeviceInterfaceAlias.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfacePropertySet @ 0x1406D8A1C (PiSwIrpInterfacePropertySet.c)
 *     PiSwCompleteCreate @ 0x1406D930C (PiSwCompleteCreate.c)
 *     PiSwPdoPnPDispatch @ 0x1406D95D0 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpCleanup @ 0x1406D9CE8 (PiSwIrpCleanup.c)
 *     PiSwDeviceFree @ 0x1406D9EA8 (PiSwDeviceFree.c)
 *     IopGetRootDevices @ 0x1406DB694 (IopGetRootDevices.c)
 *     PopAcquireAdaptiveLock @ 0x1406DD964 (PopAcquireAdaptiveLock.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1406DEF94 (WmiAcquireSmbiosLockExclusive.c)
 *     SepBlockAccessForLogonSession @ 0x1406E28CC (SepBlockAccessForLogonSession.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E60B0 (PipEnumerateCompleted.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E64F0 (PiPnpRtlSetObjectProperty.c)
 *     PiSwProcessParentStartIrp @ 0x1406ECC7C (PiSwProcessParentStartIrp.c)
 *     PnpChainDereferenceComplete @ 0x1406EDEA8 (PnpChainDereferenceComplete.c)
 *     PiSwStopDestroy @ 0x1406EE438 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1406EE4D8 (PiSwProcessParentRemoveIrp.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406EE9CC (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406EEB4C (PnpQueuePendingSurpriseRemoval.c)
 *     PpDeviceRegistration @ 0x1406EF568 (PpDeviceRegistration.c)
 *     PnpDelayedRemoveWorker @ 0x1406EFAC0 (PnpDelayedRemoveWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x1406F069C (PnpDisableDeviceInterfaces.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F2D80 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F7BEC (PiPnpRtlSetDeviceRegProperty.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F8478 (SepDeleteLogonSessionTrack.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F8780 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x1406F9138 (CmpTransWriteLog.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406FA9D0 (PiDmRemoveCacheReferenceForObject.c)
 *     CmpAccountForLogReservation @ 0x1406FBD60 (CmpAccountForLogReservation.c)
 *     IopDoDeferredSetInterfaceState @ 0x1406FE96C (IopDoDeferredSetInterfaceState.c)
 *     CmpCleanupTransactionState @ 0x140702ECC (CmpCleanupTransactionState.c)
 *     PiDmListAddObjectWorker @ 0x140703BF8 (PiDmListAddObjectWorker.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 *     IoUnregisterFileSystem @ 0x140707E40 (IoUnregisterFileSystem.c)
 *     PnpSetDevicePropertyData @ 0x140708478 (PnpSetDevicePropertyData.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14070B698 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpNotifyDeviceClassChange @ 0x14070B7F4 (PnpNotifyDeviceClassChange.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14070DCA0 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFileSystem @ 0x14070E3C0 (IoRegisterFileSystem.c)
 *     CmpStartRMLog @ 0x14070F5B4 (CmpStartRMLog.c)
 *     MiRememberUnloadedDriver @ 0x14070FD0C (MiRememberUnloadedDriver.c)
 *     IoSetDeviceInterfaceState @ 0x140710B20 (IoSetDeviceInterfaceState.c)
 *     PiSwIrpPropertySet @ 0x14071E4B4 (PiSwIrpPropertySet.c)
 *     MiWriteProtectSystemImages @ 0x14072C7D0 (MiWriteProtectSystemImages.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140738030 (SepRmGlobalSaclSetWrkr.c)
 *     PpDevCfgProcessDevices @ 0x14073B67C (PpDevCfgProcessDevices.c)
 *     SepRmCommandServerThread @ 0x140741490 (SepRmCommandServerThread.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407468F8 (IopCopyBootLogRegistryToFile.c)
 *     SeExchangePrimaryToken @ 0x140749D88 (SeExchangePrimaryToken.c)
 *     MmFreeBootDriverInitializationCode @ 0x14074C80C (MmFreeBootDriverInitializationCode.c)
 *     IoInitializeCrashDump @ 0x14074E190 (IoInitializeCrashDump.c)
 *     PpReleaseBootDDB @ 0x140751668 (PpReleaseBootDDB.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140754CAC (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiSwIrpInterfaceSetState @ 0x140755014 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14075519C (PiSwIrpInterfaceRegister.c)
 *     IoReportRootDevice @ 0x140759DE0 (IoReportRootDevice.c)
 *     PiSwIrpSetLifetime @ 0x14075A688 (PiSwIrpSetLifetime.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14075C8BC (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075D150 (IoRegisterFsRegistrationChangeMountAware.c)
 *     TtmpAcquireSessionById @ 0x140762864 (TtmpAcquireSessionById.c)
 *     NtFlushInstallUILanguage @ 0x140762950 (NtFlushInstallUILanguage.c)
 *     PiSwIrpGetLifetime @ 0x140762B2C (PiSwIrpGetLifetime.c)
 *     FsRtlCopyWrite @ 0x1408152D0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140815CE0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x140817738 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1408178E4 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x14081A640 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x14081B214 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x14081DD00 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140820184 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x140825918 (PiGetDeviceRegistryProperty.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140826C00 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x140826CDC (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x140826EE4 (PnpNotifyHwProfileChange.c)
 *     PiDmListRemoveObjectWorker @ 0x14082A9A8 (PiDmListRemoveObjectWorker.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1408383E8 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x14083A2A0 (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x140841C44 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x140841D80 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14086F250 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14086F680 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogResetInternalState @ 0x14086F9A8 (PopDripsWatchdogResetInternalState.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14086FB8C (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x14086FCAC (PopDripsWatchdogStopWatchdog.c)
 *     PopCancelDripsWatchdog @ 0x14087A604 (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14087AE80 (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x14087B2B0 (PopSetDripsWatchdog.c)
 *     TtmpStopCallout @ 0x14087F92C (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x1408802C0 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x140880500 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x14088097C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x140880AE8 (TtmInitCurrentSession.c)
 *     TtmpInitiateModernStandbyTransition @ 0x140881D60 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x140882278 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x140882320 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x140882660 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140882BE8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x140883490 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140883684 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408837F4 (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x1408839C0 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x14088AE88 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x14088B5E0 (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x140897190 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14089CFC4 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14089D240 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x1408A39A0 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408A3A98 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408A3BC0 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1408A3D60 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x1408CDAD8 (ExpQuerySingleModuleInformation.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x1408F6DB8 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140903D7C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1409070FC (PnpGetDeviceInstanceRegistryValue.c)
 *     MiUnlockBootPageSections @ 0x1409BDD50 (MiUnlockBootPageSections.c)
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 *     IopInitCrashDumpRegCallback @ 0x1409D3F70 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceExclusive @ 0x140050D30 (ExpTryAcquireResourceExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x1400D1C58 (ExpApplyPrewaitBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x1401082F0 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x140113960 (ExpWaitForResource.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140120E84 (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140164BD4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140313670 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140313B38 (PerfLogExecutiveResourceWait.c)
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
