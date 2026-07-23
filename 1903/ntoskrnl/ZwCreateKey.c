/*
 * XREFs of ZwCreateKey @ 0x1401C0470
 * Callers:
 *     BiZwCreateKey @ 0x140177AF0 (BiZwCreateKey.c)
 *     KvfCommitFeatureStates @ 0x140180D1C (KvfCommitFeatureStates.c)
 *     PopOpenKey @ 0x140182538 (PopOpenKey.c)
 *     PopOpenThermalLoggingKey @ 0x14018BE34 (PopOpenThermalLoggingKey.c)
 *     BapdpMarshallBootDataToRegistry @ 0x14018C068 (BapdpMarshallBootDataToRegistry.c)
 *     BapdGetISRegistryKey @ 0x14059E8EC (BapdGetISRegistryKey.c)
 *     BapdpWriteEventDataToRegistry @ 0x14059EF10 (BapdpWriteEventDataToRegistry.c)
 *     RtlpGetRegistryHandle @ 0x1405C3428 (RtlpGetRegistryHandle.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14063C7F0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     PspReadUserQuotaLimits @ 0x140667554 (PspReadUserQuotaLimits.c)
 *     sub_1406AD4E0 @ 0x1406AD4E0 (sub_1406AD4E0.c)
 *     IopCreateRegistryKeyEx @ 0x1406E8650 (IopCreateRegistryKeyEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406E97F4 (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x1406EC454 (CmpAddToHiveFileList.c)
 *     _RegRtlCreateKeyTransacted @ 0x1406F29A8 (_RegRtlCreateKeyTransacted.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     IopOpenRegistryKey @ 0x140708754 (IopOpenRegistryKey.c)
 *     ExpSetPendingUILanguage @ 0x140743A3C (ExpSetPendingUILanguage.c)
 *     PopInitializePowerPolicySimulate @ 0x140746D24 (PopInitializePowerPolicySimulate.c)
 *     CmSetAcpiHwProfile @ 0x14075C588 (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x14075D954 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x14075E2E8 (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x14075E648 (CmpSetVersionData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140760A14 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     ArbBuildAssignmentOrdering @ 0x140762A08 (ArbBuildAssignmentOrdering.c)
 *     EtwStartAutoLogger @ 0x14076DA0C (EtwStartAutoLogger.c)
 *     IoOpenDriverRegistryKey @ 0x14077CB10 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x14077CD68 (PiCreateDriverRedirectedStateKey.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407826B0 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140785958 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     CmpRecordShutdownStopTime @ 0x140827B30 (CmpRecordShutdownStopTime.c)
 *     CmInitializeProcessor @ 0x14082F9A8 (CmInitializeProcessor.c)
 *     CmpSyncNextBackupHive @ 0x140831844 (CmpSyncNextBackupHive.c)
 *     CmpAddAcpiAliasEntry @ 0x140834738 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x140840A1C (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x1408439AC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     PiCreateRegistryPath @ 0x14085F748 (PiCreateRegistryPath.c)
 *     KsepRegistryCreateKey @ 0x140884444 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x1408A1F30 (PfpParametersWatcher.c)
 *     PopDirectedDripsRefreshActions @ 0x1408A4910 (PopDirectedDripsRefreshActions.c)
 *     SmcCacheManagerStart @ 0x1408EBB24 (SmcCacheManagerStart.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408F7108 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408F72F0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408F7DE8 (EtwpFindMatchingPmcRegistryGroup.c)
 *     ExpUpdateComPlusPackage @ 0x14090A640 (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x14090C380 (ExUpdateOsPfnInRegistry.c)
 *     CMFRegisterEventTime @ 0x140916564 (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1409194EC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheapWriteTriageDump @ 0x14091AA7C (WheapWriteTriageDump.c)
 *     LogFwpRegisterWorker @ 0x140990760 (LogFwpRegisterWorker.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     EmInitSystem @ 0x1409F94D0 (EmInitSystem.c)
 *     SaveNodeDistanceInformation @ 0x1409FC9C0 (SaveNodeDistanceInformation.c)
 *     SepSecureBootSetRegistryKey @ 0x140A09508 (SepSecureBootSetRegistryKey.c)
 *     BapdpRegisterBitlockerStatus @ 0x140A09F94 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x140A0A0E4 (BapdpRegisterResumeInformation.c)
 *     CmpCreateControlSet @ 0x140A0AE00 (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x140A0B2AC (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x140A0B810 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0B95C (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 *     PfpParametersInitialize @ 0x140A18E98 (PfpParametersInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x140A1D6BC (PiLastGoodCopyKeyContents.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140A1F984 (ArbInitializeOsInaccessibleRange.c)
 *     MfgInitSystem @ 0x140A22314 (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x140A38450 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x140A38740 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x140A38B68 (CmpAddAliasEntry.c)
 *     CmpInitializeSystemBiosInformation @ 0x140A38E74 (CmpInitializeSystemBiosInformation.c)
 *     CmpSetNetworkValue @ 0x140A38FE4 (CmpSetNetworkValue.c)
 *     BapdpRegisterEDrvHintInfo @ 0x140A3E7D4 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A3E93C (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x140A3EB48 (BapdpRegisterWmdResult.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
