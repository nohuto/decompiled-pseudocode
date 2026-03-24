/*
 * XREFs of ZwDeleteValueKey @ 0x1401B9BB0
 * Callers:
 *     BiZwDeleteValueKey @ 0x14016E678 (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x140180E54 (CmpSetSystemRegistryString.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140182860 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     VfClearVerifierSettings @ 0x1403097A8 (VfClearVerifierSettings.c)
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     RtlpQueryRegistryValues @ 0x1405C58AC (RtlpQueryRegistryValues.c)
 *     ExpWnfDeletePermanentName @ 0x1406ABB94 (ExpWnfDeletePermanentName.c)
 *     RtlDeleteRegistryValue @ 0x1406CF770 (RtlDeleteRegistryValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x1406E2B88 (_CmSetDeviceRegPropWorker.c)
 *     IopReleaseDeviceResources @ 0x1406ED684 (IopReleaseDeviceResources.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406F17C8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CD4 (PiDevCfgCopyDeviceKey.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FB2EC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FBBF8 (PiQueryResourceRequirements.c)
 *     PiDevCfgMigrateDevice @ 0x140700D10 (PiDevCfgMigrateDevice.c)
 *     _PnpDeletePropertyWorker @ 0x140700F94 (_PnpDeletePropertyWorker.c)
 *     NtEnableLastKnownGood @ 0x140705C40 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x140706110 (PiRearrangeDeviceInstances.c)
 *     PiProcessDriverInstance @ 0x140708DA0 (PiProcessDriverInstance.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A8F4 (ExpSetCurrentUserUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14072E09C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x14072FBA8 (IopWriteResourceList.c)
 *     CmpSetVersionData @ 0x140733078 (CmpSetVersionData.c)
 *     WdipSemLoadConfigInfo @ 0x140743684 (WdipSemLoadConfigInfo.c)
 *     PopThermalHandlePreviousShutdown @ 0x140760814 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x1407630B0 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x1408072E0 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140822CB0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x140827814 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140827874 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14082BBF0 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082E968 (PiDevCfgResetDeviceDriverSettings.c)
 *     SmKmKeyGenNewKey @ 0x1408AD0F0 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x1408DB520 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x1408F5EB4 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408F854C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1408F98D4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408FC574 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408FCB74 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1408FCE24 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408FCF78 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1408FD098 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1408FD10C (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1408FD2CC (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900EB4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902564 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1409038B8 (DrvDbSetRegValueMappedProperty.c)
 *     PipHardwareConfigInit @ 0x1409C63FC (PipHardwareConfigInit.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D12A0 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, ValueName, v2);
}
