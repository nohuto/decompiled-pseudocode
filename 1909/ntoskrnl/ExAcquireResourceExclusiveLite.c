/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x14003C090
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x1400780F0 (CcAcquireByteRangeForWrite.c)
 *     SepDesktopAppxSubProcessToken @ 0x140084B54 (SepDesktopAppxSubProcessToken.c)
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14011D3E8 (FsRtlAcquireFileForModWriteEx.c)
 *     SepQueueWorkItem @ 0x14012D804 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x140133120 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14013C030 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x14013E1F0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiProcessLoaderEntry @ 0x1401556A4 (MiProcessLoaderEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140175974 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x1401938E0 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x14027D570 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1402954E8 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x1402A0CC0 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1402A1744 (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpAllocateHeap @ 0x14030E330 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x140310478 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1403111B4 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14031C254 (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14031DFB0 (SeSetSecurityAttributesTokenEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14033A370 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1405A7968 (IoShutdownSystem.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5FD0 (FsRtlAcquireFileExclusiveCommon.c)
 *     PspLockJobExclusive @ 0x140613460 (PspLockJobExclusive.c)
 *     PspLockJobConditionally @ 0x140615178 (PspLockJobConditionally.c)
 *     PspLockJobChain @ 0x14061523C (PspLockJobChain.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x140617730 (PspLockRootJobExclusive.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14061C028 (PspSetEnergyTrackingStateJobTree.c)
 *     SepReferenceLogonSessionSilo @ 0x14061D264 (SepReferenceLogonSessionSilo.c)
 *     NtAdjustGroupsToken @ 0x14061F370 (NtAdjustGroupsToken.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140624A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     NtCreateTimer @ 0x14064A240 (NtCreateTimer.c)
 *     PfSnCheckActionsNeeded @ 0x14066C960 (PfSnCheckActionsNeeded.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406700E0 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 *     PiDrvDbUnloadNode @ 0x140677938 (PiDrvDbUnloadNode.c)
 *     PiDrvDbLoadNode @ 0x140677A54 (PiDrvDbLoadNode.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     NtAdjustPrivilegesToken @ 0x1406798B0 (NtAdjustPrivilegesToken.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140688620 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobsAndProcessExclusive @ 0x1406897FC (PspLockJobsAndProcessExclusive.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140697168 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyTargetDeviceChange @ 0x140698EEC (PnpNotifyTargetDeviceChange.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 *     MmLockPagableDataSection @ 0x1406A5750 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A5850 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x1406A6358 (MiCancelPhase0Locking.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406A74BC (PfSnPrefetchCacheEntryUpdate.c)
 *     CmpStopRMLog @ 0x1406BAA78 (CmpStopRMLog.c)
 *     CmpTransWriteLog @ 0x1406BB81C (CmpTransWriteLog.c)
 *     CmpCleanupTransactionState @ 0x1406BBB5C (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x1406BBCB8 (CmpAccountForLogReservation.c)
 *     CmpStartRMLog @ 0x1406BC0BC (CmpStartRMLog.c)
 *     NtGetMUIRegistryInfo @ 0x1406CFA90 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406D159C (SepCreateLogonSessionTrack.c)
 *     IoOpenDeviceRegistryKey @ 0x1406D4140 (IoOpenDeviceRegistryKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406D6E7C (_CmGetDeviceSoftwareKey.c)
 *     SepDeReferenceLogonSession @ 0x1406D73DC (SepDeReferenceLogonSession.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 *     PspFreezeJobTree @ 0x1406DC808 (PspFreezeJobTree.c)
 *     SeSetMandatoryPolicyToken @ 0x1406E4688 (SeSetMandatoryPolicyToken.c)
 *     SepUpdateLogonSessionTrack @ 0x1406E4744 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x1406E6D14 (SeSetSessionIdToken.c)
 *     PspSetBackgroundJobTree @ 0x1406EA40C (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x1406ED674 (SeSetVirtualizationToken.c)
 *     PopAcquireAdaptiveLock @ 0x1406EF0C8 (PopAcquireAdaptiveLock.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406F10C0 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1406F21A0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406F3AB0 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406F3B48 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F7B60 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406FB220 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406FB944 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwProcessParentStartIrp @ 0x140700720 (PiSwProcessParentStartIrp.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140707CA0 (PipEnumerateCompleted.c)
 *     PiPnpRtlSetObjectProperty @ 0x140707FE4 (PiPnpRtlSetObjectProperty.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IopBootLog @ 0x14070B7F0 (IopBootLog.c)
 *     PpCheckInDriverDatabase @ 0x14070BB8C (PpCheckInDriverDatabase.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407171D8 (PiDmRemoveCacheReferenceForObject.c)
 *     IopDoDeferredSetInterfaceState @ 0x14071A224 (IopDoDeferredSetInterfaceState.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14071B784 (IopSetDeviceSecurityDescriptor.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14071CC10 (IoEnumerateRegisteredFiltersList.c)
 *     PiSwLock @ 0x140721510 (PiSwLock.c)
 *     IopGetRootDevices @ 0x14072321C (IopGetRootDevices.c)
 *     PpDeviceRegistration @ 0x1407249B8 (PpDeviceRegistration.c)
 *     PiDmListAddObjectWorker @ 0x1407258F0 (PiDmListAddObjectWorker.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1407270F4 (WmiAcquireSmbiosLockExclusive.c)
 *     SepBlockAccessForLogonSession @ 0x140729E4C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14072BE34 (SepDeleteLogonSessionTrack.c)
 *     IoUnregisterFileSystem @ 0x14072F9E0 (IoUnregisterFileSystem.c)
 *     PnpSetDevicePropertyData @ 0x14072FE68 (PnpSetDevicePropertyData.c)
 *     PnpChainDereferenceComplete @ 0x14073128C (PnpChainDereferenceComplete.c)
 *     PnpDelayedRemoveWorker @ 0x140731890 (PnpDelayedRemoveWorker.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140731B24 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731CAC (PnpQueuePendingSurpriseRemoval.c)
 *     PiSwStopDestroy @ 0x140732F28 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140732FD0 (PiSwProcessParentRemoveIrp.c)
 *     PnpDisableDeviceInterfaces @ 0x1407331D4 (PnpDisableDeviceInterfaces.c)
 *     IoSetDeviceInterfaceState @ 0x140733C90 (IoSetDeviceInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     PnpNotifyDeviceClassChange @ 0x140737AD8 (PnpNotifyDeviceClassChange.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140738248 (PnpSetDeviceInterfacePropertyData.c)
 *     IoRegisterFileSystem @ 0x14073B850 (IoRegisterFileSystem.c)
 *     MiRememberUnloadedDriver @ 0x1407477D4 (MiRememberUnloadedDriver.c)
 *     SeExchangePrimaryToken @ 0x14074AC24 (SeExchangePrimaryToken.c)
 *     MiWriteProtectSystemImages @ 0x14074F13C (MiWriteProtectSystemImages.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x140755A2C (PpDevCfgProcessDevices.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407578F8 (DrvDbOpenDriverDatabaseRegKey.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     SepRmCommandServerThread @ 0x1407683E0 (SepRmCommandServerThread.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407689EC (MmFreeBootDriverInitializationCode.c)
 *     IoInitializeCrashDump @ 0x140774C60 (IoInitializeCrashDump.c)
 *     PpReleaseBootDDB @ 0x1407780D4 (PpReleaseBootDDB.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14077E890 (SepRmGlobalSaclSetWrkr.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 *     PiSwIrpSetLifetime @ 0x140782434 (PiSwIrpSetLifetime.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x140784BFC (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140784E10 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140786170 (IoOpenDeviceInterfaceRegistryKey.c)
 *     NtFlushInstallUILanguage @ 0x140788BD0 (NtFlushInstallUILanguage.c)
 *     PiSwIrpGetLifetime @ 0x14078AD00 (PiSwIrpGetLifetime.c)
 *     FsRtlCopyWrite @ 0x14084D230 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084DC60 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x14084F758 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14084F900 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140852DA0 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140853614 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x140856260 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140858644 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14085E268 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14085F614 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14085F82C (PnpNotifyHwProfileChange.c)
 *     PiDmListRemoveObjectWorker @ 0x140863604 (PiDmListRemoveObjectWorker.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140872074 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873394 (PiCMUnregisterDeviceInterface.c)
 *     PipKsrNotifyDrivers @ 0x140875998 (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x14087BAE8 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x14087BC24 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1408AA2F0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408AA750 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408AACA0 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408AADF4 (PopDripsWatchdogStopWatchdog.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1408B2114 (PopPowerAggregatorDisengageDirectedDrips.c)
 *     TtmpStopCallout @ 0x1408BBABC (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x1408BC4A0 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408BC6E0 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408BCB88 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408BCCE8 (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmpAcquireSessionLock @ 0x1408BDD0C (TtmpAcquireSessionLock.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1408BE1AC (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1408BE6A0 (TtmpSessionPowerControl.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1408BEA60 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BEFE8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x1408BF868 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1408BFAA4 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408BFC14 (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x1408BFDE0 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1408C7448 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x1408C7BB0 (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x1408D37C0 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x1408D9F44 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x1408DA338 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x1408E0960 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408E0A5C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408E0B84 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1408E0D0C (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x140909B90 (ExpQuerySingleModuleInformation.c)
 *     NtMapCMFModule @ 0x140916960 (NtMapCMFModule.c)
 *     AdtpBuildAccessesString @ 0x14092D58C (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x14093321C (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940A30 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140943EDC (PnpGetDeviceInstanceRegistryValue.c)
 *     MiUnlockBootPageSections @ 0x1409F13FC (MiUnlockBootPageSections.c)
 *     PipResetDevices @ 0x1409F7A48 (PipResetDevices.c)
 *     IopInitCrashDumpRegCallback @ 0x140A16DD0 (IopInitCrashDumpRegCallback.c)
 *     MiInitializeKernelCfg @ 0x140A22EF8 (MiInitializeKernelCfg.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x14003DCC0 (ExpTryAcquireResourceExclusive.c)
 *     ExpWaitForResource @ 0x140042F70 (ExpWaitForResource.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpBoostIoAfterAcquire @ 0x140100ED8 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140122CA4 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x1401246D4 (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14016B238 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140331138 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140331658 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  unsigned __int8 v4; // cl
  __int16 v5; // ax
  struct _KTHREAD *v6; // rbp
  bool v7; // si
  __int64 v8; // rcx
  BOOLEAN v9; // di
  ULONG v10; // ecx
  unsigned __int8 OldIrql; // bp
  ULONG v13; // edi
  ULONG v14; // edi
  unsigned __int8 v15; // bp
  unsigned __int8 v16; // di
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v19; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v22; // rcx
  struct _KPRCB *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v27[8]; // [rsp+48h] [rbp-40h] BYREF

  v4 = (Wait == 0) + 1;
  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v5 = Resource->Flag & 1;
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > v4 )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v4, 0LL);
    if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v5 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    memset(v27, 0, 48);
    v6 = KeGetCurrentThread();
    v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    __incgsdword(0x6378u);
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    v9 = ExpTryAcquireResourceExclusive(Resource);
    if ( v9 )
    {
      v10 = Resource->OwnerEntry.TableSize & 7;
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v6;
      Resource->OwnerEntry.TableSize = v10 | 8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      __incgsdword(0x637Cu);
      __incgsdword(0x6364u);
      if ( v7 )
        PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
      return v9;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == v6 )
    {
      v13 = Resource->OwnerEntry.TableSize + 8;
      Resource->OwnerEntry.TableSize = v13;
      v14 = v13 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v15 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
      }
      __writecr8(v15);
      __incgsdword(0x6380u);
      __incgsdword(0x6364u);
      if ( !v7 )
        return 1;
      v24 = v14;
      v25 = 65585LL;
    }
    else
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v19 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v22 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v22);
        }
        __writecr8(v19);
        __incgsdword(0x6388u);
        return 0;
      }
      ExpPrepareToWaitForResourceExclusive(v8, v6, v27);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v16 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v23 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v23);
      }
      __writecr8(v16);
      __incgsdword(0x6384u);
      if ( v7 )
        PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
      ExpApplyPrewaitBoost(Resource);
      ExpWaitForResource(Resource, v27, 66084LL, ExpApplyRewaitBoost);
      ExpBoostIoAfterAcquire(Resource, v6, 0LL);
      __incgsdword(0x637Cu);
      __incgsdword(0x6364u);
      if ( !v7 )
        return 1;
      v24 = 1LL;
      v25 = 65569LL;
    }
    PerfLogExecutiveResourceAcquire(v25, Resource, v24, Resource->ContentionCount);
    return 1;
  }
  return ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
}
