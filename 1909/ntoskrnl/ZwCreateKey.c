/*
 * XREFs of ZwCreateKey @ 0x1401C0FF0
 * Callers:
 *     BiZwCreateKey @ 0x1401781E0 (BiZwCreateKey.c)
 *     KvfCommitFeatureStates @ 0x14018140C (KvfCommitFeatureStates.c)
 *     PopOpenKey @ 0x140182C28 (PopOpenKey.c)
 *     BapdpMarshallBootDataToRegistry @ 0x14018C8E0 (BapdpMarshallBootDataToRegistry.c)
 *     PopOpenThermalLoggingKey @ 0x14019C06C (PopOpenThermalLoggingKey.c)
 *     BapdGetISRegistryKey @ 0x14059E8CC (BapdGetISRegistryKey.c)
 *     BapdpWriteEventDataToRegistry @ 0x14059EEF0 (BapdpWriteEventDataToRegistry.c)
 *     RtlpGetRegistryHandle @ 0x1405C38F8 (RtlpGetRegistryHandle.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14063F8A0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14068BE4C (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x14068C204 (CmpAddToHiveFileList.c)
 *     PspReadUserQuotaLimits @ 0x140694974 (PspReadUserQuotaLimits.c)
 *     sub_1406A3E90 @ 0x1406A3E90 (sub_1406A3E90.c)
 *     IopCreateRegistryKeyEx @ 0x1406E96F0 (IopCreateRegistryKeyEx.c)
 *     _RegRtlCreateKeyTransacted @ 0x1406F4448 (_RegRtlCreateKeyTransacted.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     IopOpenRegistryKey @ 0x14070A534 (IopOpenRegistryKey.c)
 *     ExpSetPendingUILanguage @ 0x14074593C (ExpSetPendingUILanguage.c)
 *     PopInitializePowerPolicySimulate @ 0x140748C24 (PopInitializePowerPolicySimulate.c)
 *     CmSetAcpiHwProfile @ 0x140760D08 (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x1407620D4 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x140762BC4 (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x140762F6C (CmpSetVersionData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x14076541C (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     ArbBuildAssignmentOrdering @ 0x140767418 (ArbBuildAssignmentOrdering.c)
 *     EtwStartAutoLogger @ 0x140770860 (EtwStartAutoLogger.c)
 *     IoOpenDriverRegistryKey @ 0x14077F430 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x14077F688 (PiCreateDriverRedirectedStateKey.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140784980 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140787CB8 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     CmpRecordShutdownStopTime @ 0x140827230 (CmpRecordShutdownStopTime.c)
 *     CmpSyncNextBackupHive @ 0x14082D3B4 (CmpSyncNextBackupHive.c)
 *     CmInitializeProcessor @ 0x14082F818 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x140833D98 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140834008 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x14084007C (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140843020 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     PiCreateRegistryPath @ 0x14085EE48 (PiCreateRegistryPath.c)
 *     KsepRegistryCreateKey @ 0x140883B44 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x1408A1770 (PfpParametersWatcher.c)
 *     PopDirectedDripsRefreshActions @ 0x1408A4150 (PopDirectedDripsRefreshActions.c)
 *     SmcCacheManagerStart @ 0x1408EB42C (SmcCacheManagerStart.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408F6A78 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408F6C60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408F7758 (EtwpFindMatchingPmcRegistryGroup.c)
 *     ExpUpdateComPlusPackage @ 0x14090A0A0 (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x14090BDE0 (ExUpdateOsPfnInRegistry.c)
 *     CMFRegisterEventTime @ 0x140915FC4 (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140918F4C (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheapWriteTriageDump @ 0x14091A4DC (WheapWriteTriageDump.c)
 *     LogFwpRegisterWorker @ 0x140990760 (LogFwpRegisterWorker.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
 *     SaveNodeDistanceInformation @ 0x1409FCEDC (SaveNodeDistanceInformation.c)
 *     SepSecureBootSetRegistryKey @ 0x140A09A34 (SepSecureBootSetRegistryKey.c)
 *     BapdpRegisterBitlockerStatus @ 0x140A0A4C0 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x140A0A610 (BapdpRegisterResumeInformation.c)
 *     CmpCreateControlSet @ 0x140A0B32C (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x140A0B7D8 (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x140A0BD3C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0BE88 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 *     PfpParametersInitialize @ 0x140A19358 (PfpParametersInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x140A1D898 (PiLastGoodCopyKeyContents.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140A1FB64 (ArbInitializeOsInaccessibleRange.c)
 *     MfgInitSystem @ 0x140A223F4 (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x140A381D0 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x140A384C0 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x140A388E8 (CmpAddAliasEntry.c)
 *     CmpInitializeSystemBiosInformation @ 0x140A38BF4 (CmpInitializeSystemBiosInformation.c)
 *     CmpSetNetworkValue @ 0x140A38D64 (CmpSetNetworkValue.c)
 *     BapdpRegisterEDrvHintInfo @ 0x140A3E5A4 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A3E70C (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x140A3E918 (BapdpRegisterWmdResult.c)
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
