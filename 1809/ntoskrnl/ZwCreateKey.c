/*
 * XREFs of ZwCreateKey @ 0x1401B8690
 * Callers:
 *     BiZwCreateKey @ 0x14016E718 (BiZwCreateKey.c)
 *     KvfCommitFeatureStates @ 0x14017753C (KvfCommitFeatureStates.c)
 *     PopOpenKey @ 0x140178C54 (PopOpenKey.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1401863FC (BapdpMarshallBootDataToRegistry.c)
 *     PopOpenThermalLoggingKey @ 0x140192144 (PopOpenThermalLoggingKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x14031FB98 (OpenOrCreateKeyWithFlags.c)
 *     BapdGetISRegistryKey @ 0x14056FEC8 (BapdGetISRegistryKey.c)
 *     BapdpWriteEventDataToRegistry @ 0x1405704B0 (BapdpWriteEventDataToRegistry.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1405A3404 (ExpPutLicenseDataIntoRegistry.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1405ABB0C (ExpWnfGetNameStoreRegistryRoot.c)
 *     RtlpGetRegistryHandle @ 0x1405C8774 (RtlpGetRegistryHandle.c)
 *     PspReadUserQuotaLimits @ 0x14065B5EC (PspReadUserQuotaLimits.c)
 *     IopOpenRegistryKey @ 0x1406C7B50 (IopOpenRegistryKey.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406CA164 (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x1406CE220 (CmpAddToHiveFileList.c)
 *     _RegRtlCreateKeyTransacted @ 0x1406D4A5C (_RegRtlCreateKeyTransacted.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     IopCreateRegistryKeyEx @ 0x14070A964 (IopCreateRegistryKeyEx.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071BB94 (ExpSetCurrentUserUILanguage.c)
 *     PopInitializePowerPolicySimulate @ 0x14071F614 (PopInitializePowerPolicySimulate.c)
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x1407333E8 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x140733F1C (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140736834 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     ArbBuildAssignmentOrdering @ 0x14073A628 (ArbBuildAssignmentOrdering.c)
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 *     IoOpenDriverRegistryKey @ 0x140758110 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407583E8 (PiCreateDriverRedirectedStateKey.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x14075E924 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075FA00 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     CmpRecordShutdownStopTime @ 0x1407EE298 (CmpRecordShutdownStopTime.c)
 *     CmpSyncNextBackupHive @ 0x1407F5738 (CmpSyncNextBackupHive.c)
 *     CmInitializeProcessor @ 0x1407F7EE0 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x1407FC578 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x140808414 (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14080B2EC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     PiCreateRegistryPath @ 0x1408264B0 (PiCreateRegistryPath.c)
 *     KsepRegistryCreateKey @ 0x14084A1B4 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x140866C70 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x1408AFD60 (SmcCacheManagerStart.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BB890 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BBA60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408BC514 (EtwpFindMatchingPmcRegistryGroup.c)
 *     ExpUpdateComPlusPackage @ 0x1408CE018 (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x1408D0000 (ExUpdateOsPfnInRegistry.c)
 *     CMFRegisterEventTime @ 0x1408DA548 (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DC9F0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheapWriteTriageDump @ 0x1408DDAA8 (WheapWriteTriageDump.c)
 *     LogFwpRegisterWorker @ 0x140951710 (LogFwpRegisterWorker.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 *     CmpCreateControlSet @ 0x1409C22B4 (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x1409C272C (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x1409C2C54 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C2D98 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     BapdpRegisterBitlockerStatus @ 0x1409D26E4 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x1409D2824 (BapdpRegisterResumeInformation.c)
 *     PfpParametersInitialize @ 0x1409D572C (PfpParametersInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DBBA4 (PiLastGoodCopyKeyContents.c)
 *     SepSecureBootSetRegistryKey @ 0x1409DD258 (SepSecureBootSetRegistryKey.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1409DDFA0 (ArbInitializeOsInaccessibleRange.c)
 *     SaveNodeDistanceInformation @ 0x1409DF6C4 (SaveNodeDistanceInformation.c)
 *     MfgInitSystem @ 0x1409E010C (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x1409F4080 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x1409F4348 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x1409F4730 (CmpAddAliasEntry.c)
 *     CmpInitializeSystemBiosInformation @ 0x1409F4A30 (CmpInitializeSystemBiosInformation.c)
 *     CmpSetNetworkValue @ 0x1409F4B90 (CmpSetNetworkValue.c)
 *     BapdpRegisterEDrvHintInfo @ 0x1409F9C80 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x1409F9DD8 (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x1409F9FD0 (BapdpRegisterWmdResult.c)
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
