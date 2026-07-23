/*
 * XREFs of ZwDeleteValueKey @ 0x1401C1B10
 * Callers:
 *     BiZwDeleteValueKey @ 0x140177B50 (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x14018CFF8 (CmpSetSystemRegistryString.c)
 *     VfClearVerifierSettings @ 0x140327288 (VfClearVerifierSettings.c)
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     NtEnableLastKnownGood @ 0x1406990D0 (NtEnableLastKnownGood.c)
 *     ExpWnfDeletePermanentName @ 0x1406EEFC0 (ExpWnfDeletePermanentName.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406FE230 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetDeviceRegPropWorker @ 0x140703D44 (_CmSetDeviceRegPropWorker.c)
 *     PiDevCfgMigrateDevice @ 0x14071B85C (PiDevCfgMigrateDevice.c)
 *     _PnpDeletePropertyWorker @ 0x14071C104 (_PnpDeletePropertyWorker.c)
 *     PiQueryAndAllocateBootResources @ 0x140721F88 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140722880 (PiQueryResourceRequirements.c)
 *     IopReleaseDeviceResources @ 0x140730810 (IopReleaseDeviceResources.c)
 *     PiProcessDriverInstance @ 0x140733830 (PiProcessDriverInstance.c)
 *     PiRearrangeDeviceInstances @ 0x140734234 (PiRearrangeDeviceInstances.c)
 *     RtlDeleteRegistryValue @ 0x14073ACC0 (RtlDeleteRegistryValue.c)
 *     ExpSetPendingUILanguage @ 0x140743A3C (ExpSetPendingUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140751E7C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x140753994 (IopWriteResourceList.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075B3AC (PopThermalHandlePreviousShutdown.c)
 *     CmpSetVersionData @ 0x14075E648 (CmpSetVersionData.c)
 *     WdipSemDeleteValueFromRegistry @ 0x14076CC58 (WdipSemDeleteValueFromRegistry.c)
 *     PnpDriverLoadingFailed @ 0x140788FD4 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x140840B44 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14085CFE0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x140861BE0 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140861C4C (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14086640C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140869208 (PiDevCfgResetDeviceDriverSettings.c)
 *     SmKmKeyGenNewKey @ 0x1408EA048 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x1409192DC (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x140933B6C (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14093622C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140937554 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14093A22C (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x14093A900 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14093ABB8 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14093AD24 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14093AE50 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14093AED0 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14093B0A4 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140940A6C (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140941E84 (DrvDbSetRegValueMappedProperty.c)
 *     PipInitComputerIds @ 0x1409F5B3C (PipInitComputerIds.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A09B80 (BapdpProcessVsmKeyBlobs.c)
 *     PipHardwareConfigInit @ 0x140A1C298 (PipHardwareConfigInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
