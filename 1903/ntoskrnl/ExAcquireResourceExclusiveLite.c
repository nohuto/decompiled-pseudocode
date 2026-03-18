/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x14003C350
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x140077D30 (CcAcquireByteRangeForWrite.c)
 *     SepDesktopAppxSubProcessToken @ 0x140084754 (SepDesktopAppxSubProcessToken.c)
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14011DBF8 (FsRtlAcquireFileForModWriteEx.c)
 *     SepQueueWorkItem @ 0x14012CD34 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x140132630 (SepRmCallLsa.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14013BA10 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x14013DCB0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiProcessLoaderEntry @ 0x140155004 (MiProcessLoaderEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140175244 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x140193100 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x14027D810 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140295788 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x1402A0F60 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1402A19E4 (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpAllocateHeap @ 0x14030E8E0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x140310A28 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x140311764 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14031C804 (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14031E560 (SeSetSecurityAttributesTokenEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14033A910 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1405A7988 (IoShutdownSystem.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5810 (FsRtlAcquireFileExclusiveCommon.c)
 *     PspLockJobExclusive @ 0x140611950 (PspLockJobExclusive.c)
 *     PspLockJobConditionally @ 0x140613668 (PspLockJobConditionally.c)
 *     PspLockJobChain @ 0x14061372C (PspLockJobChain.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x140615C20 (PspLockRootJobExclusive.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14061A518 (PspSetEnergyTrackingStateJobTree.c)
 *     SepReferenceLogonSessionSilo @ 0x14061B754 (SepReferenceLogonSessionSilo.c)
 *     NtAdjustGroupsToken @ 0x14061D860 (NtAdjustGroupsToken.c)
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpTransWriteLog @ 0x140633E50 (CmpTransWriteLog.c)
 *     PfSnCheckActionsNeeded @ 0x140659940 (PfSnCheckActionsNeeded.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140669D48 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyTargetDeviceChange @ 0x14066C01C (PnpNotifyTargetDeviceChange.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 *     NtAdjustPrivilegesToken @ 0x1406741A0 (NtAdjustPrivilegesToken.c)
 *     PiDrvDbUnloadNode @ 0x14067C5C0 (PiDrvDbUnloadNode.c)
 *     PiDrvDbLoadNode @ 0x14067C6D4 (PiDrvDbLoadNode.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 *     NtCreateTimer @ 0x1406842D0 (NtCreateTimer.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406950B0 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobsAndProcessExclusive @ 0x14069628C (PspLockJobsAndProcessExclusive.c)
 *     CmpStartRMLog @ 0x1406993A0 (CmpStartRMLog.c)
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x140699F80 (CmpAccountForLogReservation.c)
 *     CmpStopRMLog @ 0x14069BB48 (CmpStopRMLog.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069EF34 (FsRtlAcquireFileForCcFlushEx.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PopAcquireAdaptiveLock @ 0x1406A3C58 (PopAcquireAdaptiveLock.c)
 *     MmLockPagableDataSection @ 0x1406A5EC0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A5FC0 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x1406A6AC8 (MiCancelPhase0Locking.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7970 (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406A7C2C (PfSnPrefetchCacheEntryUpdate.c)
 *     NtGetMUIRegistryInfo @ 0x1406D0820 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406D223C (SepCreateLogonSessionTrack.c)
 *     IoOpenDeviceRegistryKey @ 0x1406D4A60 (IoOpenDeviceRegistryKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406D709C (_CmGetDeviceSoftwareKey.c)
 *     SepDeReferenceLogonSession @ 0x1406D75FC (SepDeReferenceLogonSession.c)
 *     PspSetQuotaLimits @ 0x1406D8200 (PspSetQuotaLimits.c)
 *     PspFreezeJobTree @ 0x1406DBB80 (PspFreezeJobTree.c)
 *     SeSetMandatoryPolicyToken @ 0x1406E31D8 (SeSetMandatoryPolicyToken.c)
 *     SepUpdateLogonSessionTrack @ 0x1406E3294 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x1406E5E90 (SeSetSessionIdToken.c)
 *     PspSetBackgroundJobTree @ 0x1406E8FEC (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x1406EC3B4 (SeSetVirtualizationToken.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406EF470 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1406F0700 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406F2010 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406F20A8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F5DA0 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F9440 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F9B64 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwProcessParentStartIrp @ 0x1406FE940 (PiSwProcessParentStartIrp.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140705EC0 (PipEnumerateCompleted.c)
 *     PiPnpRtlSetObjectProperty @ 0x140706204 (PiPnpRtlSetObjectProperty.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IopBootLog @ 0x140709A10 (IopBootLog.c)
 *     PpCheckInDriverDatabase @ 0x140709DAC (PpCheckInDriverDatabase.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407136D0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140714F18 (PiDmRemoveCacheReferenceForObject.c)
 *     IopDoDeferredSetInterfaceState @ 0x140718434 (IopDoDeferredSetInterfaceState.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140719994 (IopSetDeviceSecurityDescriptor.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14071AE20 (IoEnumerateRegisteredFiltersList.c)
 *     PiSwLock @ 0x14071F670 (PiSwLock.c)
 *     IopGetRootDevices @ 0x14072137C (IopGetRootDevices.c)
 *     PpDeviceRegistration @ 0x140722B18 (PpDeviceRegistration.c)
 *     PiDmListAddObjectWorker @ 0x140723A50 (PiDmListAddObjectWorker.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140725254 (WmiAcquireSmbiosLockExclusive.c)
 *     SepBlockAccessForLogonSession @ 0x140728ADC (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140729F9C (SepDeleteLogonSessionTrack.c)
 *     IoUnregisterFileSystem @ 0x14072DB10 (IoUnregisterFileSystem.c)
 *     PnpSetDevicePropertyData @ 0x14072DF98 (PnpSetDevicePropertyData.c)
 *     PnpChainDereferenceComplete @ 0x14072F02C (PnpChainDereferenceComplete.c)
 *     PnpDelayedRemoveWorker @ 0x14072F630 (PnpDelayedRemoveWorker.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14072F8C4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14072FA4C (PnpQueuePendingSurpriseRemoval.c)
 *     PiSwStopDestroy @ 0x140730CC8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140730D70 (PiSwProcessParentRemoveIrp.c)
 *     PnpDisableDeviceInterfaces @ 0x140730F74 (PnpDisableDeviceInterfaces.c)
 *     IoSetDeviceInterfaceState @ 0x140731A30 (IoSetDeviceInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     PnpNotifyDeviceClassChange @ 0x140735878 (PnpNotifyDeviceClassChange.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140735FE8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoRegisterFileSystem @ 0x1407395C0 (IoRegisterFileSystem.c)
 *     MiRememberUnloadedDriver @ 0x1407458D4 (MiRememberUnloadedDriver.c)
 *     MiWriteProtectSystemImages @ 0x14074E6AC (MiWriteProtectSystemImages.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x140754F9C (PpDevCfgProcessDevices.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140756E68 (DrvDbOpenDriverDatabaseRegKey.c)
 *     MmFreeBootDriverInitializationCode @ 0x14075743C (MmFreeBootDriverInitializationCode.c)
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     IoInitializeCrashDump @ 0x140771680 (IoInitializeCrashDump.c)
 *     PpReleaseBootDDB @ 0x140774AF4 (PpReleaseBootDDB.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14077BFC0 (SepRmGlobalSaclSetWrkr.c)
 *     IoReportRootDevice @ 0x14077EA20 (IoReportRootDevice.c)
 *     PiSwIrpSetLifetime @ 0x14077FA14 (PiSwIrpSetLifetime.c)
 *     SeExchangePrimaryToken @ 0x14078038C (SeExchangePrimaryToken.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14078292C (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140782B40 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140783E10 (IoOpenDeviceInterfaceRegistryKey.c)
 *     NtFlushInstallUILanguage @ 0x140786870 (NtFlushInstallUILanguage.c)
 *     PiSwIrpGetLifetime @ 0x1407888A0 (PiSwIrpGetLifetime.c)
 *     FsRtlCopyWrite @ 0x14084DB30 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084E560 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x140850058 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x140850200 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x1408536A0 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140853F14 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x140856B60 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140858F44 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14085EB68 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14085FF14 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14086012C (PnpNotifyHwProfileChange.c)
 *     PiDmListRemoveObjectWorker @ 0x140863F04 (PiDmListRemoveObjectWorker.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140871BB4 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140872974 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873C94 (PiCMUnregisterDeviceInterface.c)
 *     PipKsrNotifyDrivers @ 0x140876298 (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x14087C3E8 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x14087C524 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1408AAA90 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408AAEF0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408AB440 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408AB594 (PopDripsWatchdogStopWatchdog.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1408B28B4 (PopPowerAggregatorDisengageDirectedDrips.c)
 *     TtmpStopCallout @ 0x1408BC1EC (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x1408BCBD0 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408BCE10 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408BD2B8 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408BD418 (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x1408BE374 (TtmpAcquireSessionById.c)
 *     TtmpAcquireSessionLock @ 0x1408BE43C (TtmpAcquireSessionLock.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1408BE8DC (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1408BEDD0 (TtmpSessionPowerControl.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1408BF190 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BF718 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x1408BFF98 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1408C01D4 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408C0344 (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x1408C0510 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1408C7B68 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x1408C82D0 (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x1408D3EC0 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x1408DA644 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x1408DAA38 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x1408E1060 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408E115C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408E1284 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1408E140C (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x14090A130 (ExpQuerySingleModuleInformation.c)
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 *     AdtpBuildAccessesString @ 0x14092DB18 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x1409337A8 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940FC0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14094446C (PnpGetDeviceInstanceRegistryValue.c)
 *     MiUnlockBootPageSections @ 0x1409F14EC (MiUnlockBootPageSections.c)
 *     PipResetDevices @ 0x1409F7B38 (PipResetDevices.c)
 *     IopInitCrashDumpRegCallback @ 0x140A16910 (IopInitCrashDumpRegCallback.c)
 *     MiInitializeKernelCfg @ 0x140A22E18 (MiInitializeKernelCfg.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x14003DF80 (ExpTryAcquireResourceExclusive.c)
 *     ExpWaitForResource @ 0x140043230 (ExpWaitForResource.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpBoostIoAfterAcquire @ 0x1400B5640 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140121E54 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140123A4C (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14016AB48 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1403316D8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140331BF8 (PerfLogExecutiveResourceWait.c)
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
