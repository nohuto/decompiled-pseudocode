/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1400505F0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x1400AE2B0 (CcPinFileData.c)
 *     SepDesktopAppxSubProcessToken @ 0x1400DA000 (SepDesktopAppxSubProcessToken.c)
 *     MiProcessLoaderEntry @ 0x1400F5B8C (MiProcessLoaderEntry.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400F5E00 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     SepQueueWorkItem @ 0x14012A07C (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14012FB20 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x140139DAC (SeTokenSetNoChildProcessRestricted.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF44 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x14018848C (IoConfigureCrashDump.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1401B70A8 (SeTokenSetRedirectionTrustPolicy.c)
 *     CcUnpinRepinnedBcb @ 0x140269CD0 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140280428 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14028AAD0 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14028B858 (PiDmaGuardQueueRemoveEntry.c)
 *     MiAcquireResourceExclusiveLite @ 0x1402A6010 (MiAcquireResourceExclusiveLite.c)
 *     RtlpAllocateHeap @ 0x1402EFC30 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1402F1DC8 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1402F2B18 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1402FE4F4 (SepInternalSetSecurityAttributesToken.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14031B900 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
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
 *     MmLockPagableDataSection @ 0x140651680 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140651780 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x140653B2C (MiCancelPhase0Locking.c)
 *     NtCreateLowBoxToken @ 0x140654F90 (NtCreateLowBoxToken.c)
 *     ExAcquireTimeRefreshLock @ 0x14066585C (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140666140 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnCheckActionsNeeded @ 0x140667E5C (PfSnCheckActionsNeeded.c)
 *     PpCheckInDriverDatabase @ 0x14067F0FC (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140680CB0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     CmpStopRMLog @ 0x1406931DC (CmpStopRMLog.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140699558 (IopSetDeviceSecurityDescriptor.c)
 *     PiDrvDbLoadNode @ 0x1406A9B14 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x1406A9C78 (PiDrvDbUnloadNode.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1406ACE58 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1406ACEC0 (PspFreezeJobTree.c)
 *     NtGetMUIRegistryInfo @ 0x1406AD5E0 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406AE1FC (SepCreateLogonSessionTrack.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406B2484 (_CmGetDeviceSoftwareKey.c)
 *     SepDeReferenceLogonSession @ 0x1406B3600 (SepDeReferenceLogonSession.c)
 *     IoOpenDeviceRegistryKey @ 0x1406B3C50 (IoOpenDeviceRegistryKey.c)
 *     NtAdjustGroupsToken @ 0x1406B58F0 (NtAdjustGroupsToken.c)
 *     SepUpdateLogonSessionTrack @ 0x1406BC794 (SepUpdateLogonSessionTrack.c)
 *     PspSetBackgroundJobTree @ 0x1406C9D38 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x1406CC714 (SeSetVirtualizationToken.c)
 *     IopBootLog @ 0x1406CF254 (IopBootLog.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406D0130 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PspSetQuotaLimits @ 0x1406D1118 (PspSetQuotaLimits.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406D2E58 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406D2FE4 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D52C0 (IoGetDeviceInterfaceAlias.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E78 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfacePropertySet @ 0x1406D779C (PiSwIrpInterfacePropertySet.c)
 *     PiSwCompleteCreate @ 0x1406D808C (PiSwCompleteCreate.c)
 *     PiSwPdoPnPDispatch @ 0x1406D8350 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpCleanup @ 0x1406D8A68 (PiSwIrpCleanup.c)
 *     PiSwDeviceFree @ 0x1406D8C28 (PiSwDeviceFree.c)
 *     IopGetRootDevices @ 0x1406DA414 (IopGetRootDevices.c)
 *     PopAcquireAdaptiveLock @ 0x1406DC6E4 (PopAcquireAdaptiveLock.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1406DDD14 (WmiAcquireSmbiosLockExclusive.c)
 *     SepBlockAccessForLogonSession @ 0x1406E164C (SepBlockAccessForLogonSession.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E30 (PipEnumerateCompleted.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E5270 (PiPnpRtlSetObjectProperty.c)
 *     PiSwProcessParentStartIrp @ 0x1406EB9FC (PiSwProcessParentStartIrp.c)
 *     PnpChainDereferenceComplete @ 0x1406ECC28 (PnpChainDereferenceComplete.c)
 *     PiSwStopDestroy @ 0x1406ED1B8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1406ED258 (PiSwProcessParentRemoveIrp.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED74C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8CC (PnpQueuePendingSurpriseRemoval.c)
 *     PpDeviceRegistration @ 0x1406EE2E8 (PpDeviceRegistration.c)
 *     PnpDelayedRemoveWorker @ 0x1406EE840 (PnpDelayedRemoveWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x1406EF41C (PnpDisableDeviceInterfaces.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F1B00 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F696C (PiPnpRtlSetDeviceRegProperty.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F71F8 (SepDeleteLogonSessionTrack.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F7500 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x1406F7EB8 (CmpTransWriteLog.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406F9750 (PiDmRemoveCacheReferenceForObject.c)
 *     CmpAccountForLogReservation @ 0x1406FAAE0 (CmpAccountForLogReservation.c)
 *     IopDoDeferredSetInterfaceState @ 0x1406FD6EC (IopDoDeferredSetInterfaceState.c)
 *     CmpCleanupTransactionState @ 0x140701C4C (CmpCleanupTransactionState.c)
 *     PiDmListAddObjectWorker @ 0x140702978 (PiDmListAddObjectWorker.c)
 *     NtMapCMFModule @ 0x1407067C0 (NtMapCMFModule.c)
 *     IoUnregisterFileSystem @ 0x140706BC0 (IoUnregisterFileSystem.c)
 *     PnpSetDevicePropertyData @ 0x1407071F8 (PnpSetDevicePropertyData.c)
 *     IopRegisterDeviceInterface @ 0x140709AF4 (IopRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14070A418 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpNotifyDeviceClassChange @ 0x14070A574 (PnpNotifyDeviceClassChange.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14070CA20 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFileSystem @ 0x14070D140 (IoRegisterFileSystem.c)
 *     CmpStartRMLog @ 0x14070E334 (CmpStartRMLog.c)
 *     MiRememberUnloadedDriver @ 0x14070EA8C (MiRememberUnloadedDriver.c)
 *     IoSetDeviceInterfaceState @ 0x14070F8A0 (IoSetDeviceInterfaceState.c)
 *     PiSwIrpPropertySet @ 0x14071D234 (PiSwIrpPropertySet.c)
 *     MiWriteProtectSystemImages @ 0x14072B600 (MiWriteProtectSystemImages.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140736E60 (SepRmGlobalSaclSetWrkr.c)
 *     PpDevCfgProcessDevices @ 0x14073A4AC (PpDevCfgProcessDevices.c)
 *     SepRmCommandServerThread @ 0x1407402C0 (SepRmCommandServerThread.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     SeExchangePrimaryToken @ 0x140748BB8 (SeExchangePrimaryToken.c)
 *     MmFreeBootDriverInitializationCode @ 0x14074B63C (MmFreeBootDriverInitializationCode.c)
 *     IoInitializeCrashDump @ 0x14074CFC0 (IoInitializeCrashDump.c)
 *     PpReleaseBootDDB @ 0x140750498 (PpReleaseBootDDB.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140753ADC (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiSwIrpInterfaceSetState @ 0x140753E44 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FCC (PiSwIrpInterfaceRegister.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 *     PiSwIrpSetLifetime @ 0x1407594B8 (PiSwIrpSetLifetime.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14075B6EC (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075BF80 (IoRegisterFsRegistrationChangeMountAware.c)
 *     TtmpAcquireSessionById @ 0x140761694 (TtmpAcquireSessionById.c)
 *     NtFlushInstallUILanguage @ 0x140761780 (NtFlushInstallUILanguage.c)
 *     PiSwIrpGetLifetime @ 0x14076195C (PiSwIrpGetLifetime.c)
 *     FsRtlCopyWrite @ 0x1408140F0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140814B00 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x140816558 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x140816704 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140819460 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x14081A034 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x14081CB20 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x14081EFA4 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x140824738 (PiGetDeviceRegistryProperty.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140825A20 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x140825AFC (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x140825D04 (PnpNotifyHwProfileChange.c)
 *     PiDmListRemoveObjectWorker @ 0x1408297C8 (PiDmListRemoveObjectWorker.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1408371A8 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E24 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x140839060 (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x140840A04 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x140840B40 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14086E010 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14086E440 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogResetInternalState @ 0x14086E768 (PopDripsWatchdogResetInternalState.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14086E94C (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x14086EA6C (PopDripsWatchdogStopWatchdog.c)
 *     PopCancelDripsWatchdog @ 0x1408793C4 (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C40 (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x14087A070 (PopSetDripsWatchdog.c)
 *     TtmpStopCallout @ 0x14087E6EC (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x14087F080 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x14087F2C0 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x14087F73C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x14087F8A8 (TtmInitCurrentSession.c)
 *     TtmpInitiateModernStandbyTransition @ 0x140880B20 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x140881038 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1408810E0 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x140881420 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408819A8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x140882250 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140882444 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408825B4 (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x140882780 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x140889C48 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x14088A3A0 (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x140895F50 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14089BD84 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14089C000 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x1408A2760 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408A2858 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408A2980 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1408A2B20 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x1408CC838 (ExpQuerySingleModuleInformation.c)
 *     AdtpBuildAccessesString @ 0x1408EFECC (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x1408F5B18 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140902ADC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140905E5C (PnpGetDeviceInstanceRegistryValue.c)
 *     MiUnlockBootPageSections @ 0x1409BCD50 (MiUnlockBootPageSections.c)
 *     PipResetDevices @ 0x1409CA1C0 (PipResetDevices.c)
 *     IopInitCrashDumpRegCallback @ 0x1409D2F70 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceExclusive @ 0x140050D30 (ExpTryAcquireResourceExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x1400D1BB8 (ExpApplyPrewaitBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140108250 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x1401138D0 (ExpWaitForResource.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140120D94 (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140164AB4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140313380 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140313848 (PerfLogExecutiveResourceWait.c)
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
