/*
 * XREFs of ZwCreateKey @ 0x1401B8530
 * Callers:
 *     BiZwCreateKey @ 0x14016E618 (BiZwCreateKey.c)
 *     KvfCommitFeatureStates @ 0x14017743C (KvfCommitFeatureStates.c)
 *     PopOpenKey @ 0x140178B54 (PopOpenKey.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1401862BC (BapdpMarshallBootDataToRegistry.c)
 *     PopOpenThermalLoggingKey @ 0x140192004 (PopOpenThermalLoggingKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x14031F9A8 (OpenOrCreateKeyWithFlags.c)
 *     BapdGetISRegistryKey @ 0x14056EEC8 (BapdGetISRegistryKey.c)
 *     BapdpWriteEventDataToRegistry @ 0x14056F4B0 (BapdpWriteEventDataToRegistry.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1405A2404 (ExpPutLicenseDataIntoRegistry.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1405AAB0C (ExpWnfGetNameStoreRegistryRoot.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 *     PspReadUserQuotaLimits @ 0x14065A42C (PspReadUserQuotaLimits.c)
 *     IopOpenRegistryKey @ 0x1406C68B0 (IopOpenRegistryKey.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406C8EC4 (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x1406CCF80 (CmpAddToHiveFileList.c)
 *     _RegRtlCreateKeyTransacted @ 0x1406D37BC (_RegRtlCreateKeyTransacted.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CD4 (PiDevCfgCopyDeviceKey.c)
 *     IopCreateRegistryKeyEx @ 0x1407096C4 (IopCreateRegistryKeyEx.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A8F4 (ExpSetCurrentUserUILanguage.c)
 *     PopInitializePowerPolicySimulate @ 0x14071E374 (PopInitializePowerPolicySimulate.c)
 *     CmSetAcpiHwProfile @ 0x140730ED0 (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x1407321F8 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x140732580 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x140732D2C (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x140733078 (CmpSetVersionData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140735644 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     ArbBuildAssignmentOrdering @ 0x140739438 (ArbBuildAssignmentOrdering.c)
 *     EtwStartAutoLogger @ 0x140741E68 (EtwStartAutoLogger.c)
 *     IoOpenDriverRegistryKey @ 0x140756F20 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407571F8 (PiCreateDriverRedirectedStateKey.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x14075D734 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075E810 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpSaveBootControlSet @ 0x1407E88D0 (CmpSaveBootControlSet.c)
 *     CmpRecordShutdownStopTime @ 0x1407ED098 (CmpRecordShutdownStopTime.c)
 *     CmpSyncNextBackupHive @ 0x1407F4538 (CmpSyncNextBackupHive.c)
 *     CmInitializeProcessor @ 0x1407F6CE0 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x1407FB378 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x140807214 (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14080A0EC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     PiCreateRegistryPath @ 0x1408252B0 (PiCreateRegistryPath.c)
 *     KsepRegistryCreateKey @ 0x140848F54 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x140865A10 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x1408AEB00 (SmcCacheManagerStart.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BA5D0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BA7A0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408BB254 (EtwpFindMatchingPmcRegistryGroup.c)
 *     ExpUpdateComPlusPackage @ 0x1408CCD58 (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x1408CED40 (ExUpdateOsPfnInRegistry.c)
 *     CMFRegisterEventTime @ 0x1408D9288 (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DB730 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheapWriteTriageDump @ 0x1408DC7E8 (WheapWriteTriageDump.c)
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
 *     CreateMiniNtBootKey @ 0x1409F3080 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x1409F3348 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x1409F3730 (CmpAddAliasEntry.c)
 *     CmpInitializeSystemBiosInformation @ 0x1409F3A30 (CmpInitializeSystemBiosInformation.c)
 *     CmpSetNetworkValue @ 0x1409F3B90 (CmpSetNetworkValue.c)
 *     BapdpRegisterEDrvHintInfo @ 0x1409F8C80 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x1409F8DD8 (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x1409F8FD0 (BapdpRegisterWmdResult.c)
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
