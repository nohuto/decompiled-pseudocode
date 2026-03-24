/*
 * XREFs of _wcsicmp @ 0x140195930
 * Callers:
 *     LdrRscIsTypeExist @ 0x1400F3D38 (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x1400FDA0C (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x140177BF8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     PipUpdateDeviceProducts @ 0x140181DA0 (PipUpdateDeviceProducts.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018267C (RtlpMuiRegAddAlternateCodePage.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x14018D260 (-CompareLangName@@YAHPEBX0@Z.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1402890C8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14028913C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402D82CC (PopFxIsDevicePotentialDripsConstraint.c)
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
 *     EtwpStartLogger @ 0x1406591A0 (EtwpStartLogger.c)
 *     LdrpSearchResourceSection_U @ 0x14067AEF0 (LdrpSearchResourceSection_U.c)
 *     PiDmCompareObjects @ 0x14069B220 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406AF360 (PiPnpRtlObjectEventCompareObjects.c)
 *     ConstraintEval @ 0x1406BDD90 (ConstraintEval.c)
 *     GetPropertyFromPropArray @ 0x1406C5410 (GetPropertyFromPropArray.c)
 *     PiSwUpdateArrayProperties @ 0x1406D7A70 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1406D7B84 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1406D87C0 (PiSwDeviceMakeCompatibleIds.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DACD4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqActionDataGetChangedProperties @ 0x1406DB244 (PiDqActionDataGetChangedProperties.c)
 *     _CmIsLocalMachineContainer @ 0x1406DB4A0 (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x1406DBA20 (PiSwDeviceCompareObjects.c)
 *     _CmUpdateDevicePanel @ 0x1406E85D8 (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EB1DC (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwStopDestroy @ 0x1406ED198 (PiSwStopDestroy.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406F161C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406F2B90 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x1406F33FC (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F6C70 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F7878 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406F9FA4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FE934 (PiBuildDeviceNodeInstancePath.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1406FEED4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiDevCfgMigrateDevice @ 0x140700D10 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140701624 (PiDevCfgEnforceDevicePolicy.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706068 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PipCheckForDenyExecute @ 0x140709F50 (PipCheckForDenyExecute.c)
 *     IopErrorLogThread @ 0x14070C390 (IopErrorLogThread.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14070EC64 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     BiGetNtPartitionPath @ 0x140711D44 (BiGetNtPartitionPath.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14071F4E0 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x14071FB38 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x14071FDCC (AslpFileGetVersionBlock.c)
 *     SdbpFindMatchingName @ 0x140721664 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407228D8 (SdbFindFirstNamedTag.c)
 *     DrvDbSuspendDatabase @ 0x14073A9B4 (DrvDbSuspendDatabase.c)
 *     RtlpLangNameInMultiSzString @ 0x14073E7C8 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14073EE60 (RtlpMuiRegGetStringIndexInPool.c)
 *     ArbShareDriverExclusive @ 0x14073F2A4 (ArbShareDriverExclusive.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14075393C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140753ABC (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140757DA0 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140761FB8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x140763800 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140763870 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x140827948 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140828AA0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140829C94 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C66C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E008 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14082ED10 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830820 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083DD8C (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5BC (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x14083F0F8 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BA0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14087A830 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E6168 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x1408E79A4 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1408E7A4C (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x1408F566C (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x1408F59DC (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x1408F5A88 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x1408F8330 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindInstallerClassFilterInflectionPoint @ 0x1408FD45C (_CmFindInstallerClassFilterInflectionPoint.c)
 *     _CmGetInstallerClassCompoundFilterList @ 0x1408FE038 (_CmGetInstallerClassCompoundFilterList.c)
 *     _CmMergeInstallerClassFilterLists @ 0x1408FF010 (_CmMergeInstallerClassFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x140900410 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902120 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140902ABC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409032E4 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x140905B8C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140906A18 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140907190 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x14092BA28 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409502A4 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CD3F0 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x1409F53F0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x1409F5FE0 (PipPendingServicesFilter.c)
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
