/*
 * XREFs of _wcsicmp @ 0x140195910
 * Callers:
 *     LdrRscIsTypeExist @ 0x1400F3D18 (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x1400FD9EC (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x140177BD8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     PipUpdateDeviceProducts @ 0x140181D80 (PipUpdateDeviceProducts.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018265C (RtlpMuiRegAddAlternateCodePage.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x14018D240 (-CompareLangName@@YAHPEBX0@Z.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x140288FC8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14028903C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402D81CC (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14058F668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14058FC40 (PiDcHandleCustomDeviceEvent.c)
 *     StringListContains @ 0x14058FE1C (StringListContains.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405902D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PropertyEval @ 0x140591A70 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x140595AB0 (PiDqPropertyCallback.c)
 *     ExQueryLicenseValueInternal @ 0x1405A0260 (ExQueryLicenseValueInternal.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C56A0 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpHashStringToAtom @ 0x1405F54C0 (RtlpHashStringToAtom.c)
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     LdrpSearchResourceSection_U @ 0x14067AF10 (LdrpSearchResourceSection_U.c)
 *     PiDmCompareObjects @ 0x14069B240 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406AF380 (PiPnpRtlObjectEventCompareObjects.c)
 *     ConstraintEval @ 0x1406BDDB0 (ConstraintEval.c)
 *     GetPropertyFromPropArray @ 0x1406C5430 (GetPropertyFromPropArray.c)
 *     PiSwUpdateArrayProperties @ 0x1406D7A90 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1406D7BA4 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1406D87E0 (PiSwDeviceMakeCompatibleIds.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DACF4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqActionDataGetChangedProperties @ 0x1406DB264 (PiDqActionDataGetChangedProperties.c)
 *     _CmIsLocalMachineContainer @ 0x1406DB4C0 (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x1406DBA40 (PiSwDeviceCompareObjects.c)
 *     _CmUpdateDevicePanel @ 0x1406E85F8 (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EB1FC (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwStopDestroy @ 0x1406ED1B8 (PiSwStopDestroy.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406F163C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406F2BB0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x1406F341C (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F6C90 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F7898 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406F9FC4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FE954 (PiBuildDeviceNodeInstancePath.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1406FEEF4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiDevCfgMigrateDevice @ 0x140700D30 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140701644 (PiDevCfgEnforceDevicePolicy.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706088 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PipCheckForDenyExecute @ 0x140709F70 (PipCheckForDenyExecute.c)
 *     IopErrorLogThread @ 0x14070C3B0 (IopErrorLogThread.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14070EC84 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     BiGetNtPartitionPath @ 0x140711D64 (BiGetNtPartitionPath.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14071F500 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x14071FB58 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x14071FDEC (AslpFileGetVersionBlock.c)
 *     SdbpFindMatchingName @ 0x140721684 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407228F8 (SdbFindFirstNamedTag.c)
 *     DrvDbSuspendDatabase @ 0x14073A9D4 (DrvDbSuspendDatabase.c)
 *     RtlpLangNameInMultiSzString @ 0x14073E7E8 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14073EE80 (RtlpMuiRegGetStringIndexInPool.c)
 *     ArbShareDriverExclusive @ 0x14073F2C4 (ArbShareDriverExclusive.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14075395C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140753ADC (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140757DC0 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140761FD8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x140763820 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140763890 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x140827968 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140828AC0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A60 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140829CB4 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C68C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E028 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14082ED30 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830840 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083DDAC (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5DC (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x14083F118 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BC0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14087A850 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E6188 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x1408E79C4 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1408E7A6C (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x1408F568C (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x1408F59FC (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x1408F5AA8 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x1408F8350 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindInstallerClassFilterInflectionPoint @ 0x1408FD47C (_CmFindInstallerClassFilterInflectionPoint.c)
 *     _CmGetInstallerClassCompoundFilterList @ 0x1408FE058 (_CmGetInstallerClassCompoundFilterList.c)
 *     _CmMergeInstallerClassFilterLists @ 0x1408FF030 (_CmMergeInstallerClassFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x140900430 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902140 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140902ADC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140903304 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x140905BAC (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140906A38 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1409071B0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x14092BA28 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409502A4 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CD3F0 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x1409F53E0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x1409F5FD0 (PipPendingServicesFilter.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = Str2;
  v3 = (char *)Str1 - (char *)Str2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
