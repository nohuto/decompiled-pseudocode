/*
 * XREFs of ZwDeleteValueKey @ 0x1401B9D10
 * Callers:
 *     BiZwDeleteValueKey @ 0x14016E778 (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x140180F94 (CmpSetSystemRegistryString.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401829A0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     VfClearVerifierSettings @ 0x140309998 (VfClearVerifierSettings.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     ExpWnfDeletePermanentName @ 0x1406ACE34 (ExpWnfDeletePermanentName.c)
 *     RtlDeleteRegistryValue @ 0x1406D0A10 (RtlDeleteRegistryValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x1406E3E28 (_CmSetDeviceRegPropWorker.c)
 *     IopReleaseDeviceResources @ 0x1406EE924 (IopReleaseDeviceResources.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406F2A68 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FC58C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FCE98 (PiQueryResourceRequirements.c)
 *     PiDevCfgMigrateDevice @ 0x140701FB0 (PiDevCfgMigrateDevice.c)
 *     _PnpDeletePropertyWorker @ 0x140702234 (_PnpDeletePropertyWorker.c)
 *     NtEnableLastKnownGood @ 0x140706EE0 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x1407073B0 (PiRearrangeDeviceInstances.c)
 *     PiProcessDriverInstance @ 0x14070A040 (PiProcessDriverInstance.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071BB94 (ExpSetCurrentUserUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14072F28C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x140730D98 (IopWriteResourceList.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     WdipSemLoadConfigInfo @ 0x140744874 (WdipSemLoadConfigInfo.c)
 *     PopThermalHandlePreviousShutdown @ 0x140761A04 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x1407642A0 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x1408084E0 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140823EB0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x140828A14 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140828A74 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14082CDF0 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082FB98 (PiDevCfgResetDeviceDriverSettings.c)
 *     SmKmKeyGenNewKey @ 0x1408AE350 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x1408DC7E0 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x1408F7174 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408F980C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1408FAB94 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408FD834 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408FDE34 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1408FE0E4 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408FE238 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1408FE358 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1408FE3CC (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1408FE58C (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140903824 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140904B78 (DrvDbSetRegValueMappedProperty.c)
 *     PipHardwareConfigInit @ 0x1409C73FC (PipHardwareConfigInit.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D22A0 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
