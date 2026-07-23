/*
 * XREFs of ZwDeleteValueKey @ 0x1401C2690
 * Callers:
 *     BiZwDeleteValueKey @ 0x140178240 (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x14018D878 (CmpSetSystemRegistryString.c)
 *     VfClearVerifierSettings @ 0x140326CD8 (VfClearVerifierSettings.c)
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     CmpCompleteUnloadKey @ 0x1406B9974 (CmpCompleteUnloadKey.c)
 *     NtEnableLastKnownGood @ 0x1406DA230 (NtEnableLastKnownGood.c)
 *     ExpWnfDeletePermanentName @ 0x1406F0C80 (ExpWnfDeletePermanentName.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140700010 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetDeviceRegPropWorker @ 0x140705B24 (_CmSetDeviceRegPropWorker.c)
 *     PiDevCfgMigrateDevice @ 0x14071D64C (PiDevCfgMigrateDevice.c)
 *     _PnpDeletePropertyWorker @ 0x14071DEF4 (_PnpDeletePropertyWorker.c)
 *     PiQueryAndAllocateBootResources @ 0x140723E28 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140724720 (PiQueryResourceRequirements.c)
 *     IopReleaseDeviceResources @ 0x140732A70 (IopReleaseDeviceResources.c)
 *     PiProcessDriverInstance @ 0x140735A90 (PiProcessDriverInstance.c)
 *     PiRearrangeDeviceInstances @ 0x140736494 (PiRearrangeDeviceInstances.c)
 *     RtlDeleteRegistryValue @ 0x14073CC20 (RtlDeleteRegistryValue.c)
 *     ExpSetPendingUILanguage @ 0x14074593C (ExpSetPendingUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14075290C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x140754424 (IopWriteResourceList.c)
 *     CmpSetVersionData @ 0x140762F6C (CmpSetVersionData.c)
 *     WdipSemDeleteValueFromRegistry @ 0x14076FAAC (WdipSemDeleteValueFromRegistry.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407898F8 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x14078B434 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x1408401A4 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14085C6E0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x1408612E0 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x14086134C (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140865B0C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140868908 (PiDevCfgResetDeviceDriverSettings.c)
 *     SmKmKeyGenNewKey @ 0x1408E9950 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x140918D3C (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x1409335E0 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140935C9C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140936FC4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140939C9C (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x14093A370 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14093A628 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14093A794 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14093A8C0 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14093A940 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14093AB14 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1409404DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1409418F4 (DrvDbSetRegValueMappedProperty.c)
 *     PipInitComputerIds @ 0x1409F5A4C (PipInitComputerIds.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A0A0AC (BapdpProcessVsmKeyBlobs.c)
 *     PipHardwareConfigInit @ 0x140A1C474 (PipHardwareConfigInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
