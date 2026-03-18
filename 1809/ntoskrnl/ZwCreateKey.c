/*
 * XREFs of ZwCreateKey @ 0x1401B8510
 * Callers:
 *     BiZwCreateKey @ 0x14016E5F8 (BiZwCreateKey.c)
 *     KvfCommitFeatureStates @ 0x14017741C (KvfCommitFeatureStates.c)
 *     PopOpenKey @ 0x140178B34 (PopOpenKey.c)
 *     BapdpMarshallBootDataToRegistry @ 0x14018629C (BapdpMarshallBootDataToRegistry.c)
 *     PopOpenThermalLoggingKey @ 0x140191FE4 (PopOpenThermalLoggingKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x14031F8A8 (OpenOrCreateKeyWithFlags.c)
 *     BapdGetISRegistryKey @ 0x14056EEC8 (BapdGetISRegistryKey.c)
 *     BapdpWriteEventDataToRegistry @ 0x14056F4B0 (BapdpWriteEventDataToRegistry.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1405A2404 (ExpPutLicenseDataIntoRegistry.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1405AAB0C (ExpWnfGetNameStoreRegistryRoot.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 *     PspReadUserQuotaLimits @ 0x14065A44C (PspReadUserQuotaLimits.c)
 *     IopOpenRegistryKey @ 0x1406C68D0 (IopOpenRegistryKey.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406C8EE4 (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x1406CCFA0 (CmpAddToHiveFileList.c)
 *     _RegRtlCreateKeyTransacted @ 0x1406D37DC (_RegRtlCreateKeyTransacted.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CF4 (PiDevCfgCopyDeviceKey.c)
 *     IopCreateRegistryKeyEx @ 0x1407096E4 (IopCreateRegistryKeyEx.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A914 (ExpSetCurrentUserUILanguage.c)
 *     PopInitializePowerPolicySimulate @ 0x14071E394 (PopInitializePowerPolicySimulate.c)
 *     CmSetAcpiHwProfile @ 0x140730EF0 (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x140732218 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x1407325A0 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x140732D4C (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x140733098 (CmpSetVersionData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140735664 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     ArbBuildAssignmentOrdering @ 0x140739458 (ArbBuildAssignmentOrdering.c)
 *     EtwStartAutoLogger @ 0x140741E88 (EtwStartAutoLogger.c)
 *     IoOpenDriverRegistryKey @ 0x140756F40 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x140757218 (PiCreateDriverRedirectedStateKey.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x14075D754 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075E830 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 *     CmpRecordShutdownStopTime @ 0x1407ED0B8 (CmpRecordShutdownStopTime.c)
 *     CmpSyncNextBackupHive @ 0x1407F4558 (CmpSyncNextBackupHive.c)
 *     CmInitializeProcessor @ 0x1407F6D00 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x1407FB398 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407FB5FC (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x140807234 (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14080A10C (VrpCreateNamespaceNodePlaceholderKey.c)
 *     PiCreateRegistryPath @ 0x1408252D0 (PiCreateRegistryPath.c)
 *     KsepRegistryCreateKey @ 0x140848F74 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x140865A30 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x1408AEB20 (SmcCacheManagerStart.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BA5F0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BA7C0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408BB274 (EtwpFindMatchingPmcRegistryGroup.c)
 *     ExpUpdateComPlusPackage @ 0x1408CCD78 (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x1408CED60 (ExUpdateOsPfnInRegistry.c)
 *     CMFRegisterEventTime @ 0x1408D92A8 (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DB750 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheapWriteTriageDump @ 0x1408DC808 (WheapWriteTriageDump.c)
 *     LogFwpRegisterWorker @ 0x140950710 (LogFwpRegisterWorker.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 *     CmpCreateControlSet @ 0x1409C12B4 (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x1409C172C (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x1409C1C54 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C1D98 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     BapdpRegisterBitlockerStatus @ 0x1409D16E4 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x1409D1824 (BapdpRegisterResumeInformation.c)
 *     PfpParametersInitialize @ 0x1409D472C (PfpParametersInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DABA4 (PiLastGoodCopyKeyContents.c)
 *     SepSecureBootSetRegistryKey @ 0x1409DC258 (SepSecureBootSetRegistryKey.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1409DCFA0 (ArbInitializeOsInaccessibleRange.c)
 *     SaveNodeDistanceInformation @ 0x1409DE6C4 (SaveNodeDistanceInformation.c)
 *     MfgInitSystem @ 0x1409DF10C (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x1409F3078 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x1409F3340 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x1409F3728 (CmpAddAliasEntry.c)
 *     CmpInitializeSystemBiosInformation @ 0x1409F3A28 (CmpInitializeSystemBiosInformation.c)
 *     CmpSetNetworkValue @ 0x1409F3B88 (CmpSetNetworkValue.c)
 *     BapdpRegisterEDrvHintInfo @ 0x1409F8C70 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x1409F8DC8 (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x1409F8FC0 (BapdpRegisterWmdResult.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
