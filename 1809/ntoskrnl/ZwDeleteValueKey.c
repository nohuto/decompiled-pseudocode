/*
 * XREFs of ZwDeleteValueKey @ 0x1401B9B90
 * Callers:
 *     BiZwDeleteValueKey @ 0x14016E658 (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x140180E34 (CmpSetSystemRegistryString.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140182840 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     VfClearVerifierSettings @ 0x1403096A8 (VfClearVerifierSettings.c)
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     RtlpQueryRegistryValues @ 0x1405C58AC (RtlpQueryRegistryValues.c)
 *     ExpWnfDeletePermanentName @ 0x1406ABBB4 (ExpWnfDeletePermanentName.c)
 *     RtlDeleteRegistryValue @ 0x1406CF790 (RtlDeleteRegistryValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x1406E2BA8 (_CmSetDeviceRegPropWorker.c)
 *     IopReleaseDeviceResources @ 0x1406ED6A4 (IopReleaseDeviceResources.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406F17E8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CF4 (PiDevCfgCopyDeviceKey.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FB30C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FBC18 (PiQueryResourceRequirements.c)
 *     PiDevCfgMigrateDevice @ 0x140700D30 (PiDevCfgMigrateDevice.c)
 *     _PnpDeletePropertyWorker @ 0x140700FB4 (_PnpDeletePropertyWorker.c)
 *     NtEnableLastKnownGood @ 0x140705C60 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x140706130 (PiRearrangeDeviceInstances.c)
 *     PiProcessDriverInstance @ 0x140708DC0 (PiProcessDriverInstance.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A914 (ExpSetCurrentUserUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14072E0BC (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x14072FBC8 (IopWriteResourceList.c)
 *     CmpSetVersionData @ 0x140733098 (CmpSetVersionData.c)
 *     WdipSemLoadConfigInfo @ 0x1407436A4 (WdipSemLoadConfigInfo.c)
 *     PopThermalHandlePreviousShutdown @ 0x140760834 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x1407630D0 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x140807300 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140822CD0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x140827834 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140827894 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14082BC10 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082E988 (PiDevCfgResetDeviceDriverSettings.c)
 *     SmKmKeyGenNewKey @ 0x1408AD110 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x1408DB540 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x1408F5ED4 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408F856C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1408F98F4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408FC594 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408FCB94 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1408FCE44 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408FCF98 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1408FD0B8 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1408FD12C (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1408FD2EC (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900ED4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902584 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1409038D8 (DrvDbSetRegValueMappedProperty.c)
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
