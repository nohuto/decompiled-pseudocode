/*
 * XREFs of _wcsicmp @ 0x140195A70
 * Callers:
 *     LdrRscIsTypeExist @ 0x1400F3DB8 (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x1400FDA8C (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x140177CF8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401827BC (RtlpMuiRegAddAlternateCodePage.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x14018D3A0 (-CompareLangName@@YAHPEBX0@Z.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1402892B8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14028932C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402D84BC (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140590668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140590C40 (PiDcHandleCustomDeviceEvent.c)
 *     StringListContains @ 0x140590E1C (StringListContains.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PropertyEval @ 0x140592A70 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x140596AB0 (PiDqPropertyCallback.c)
 *     ExQueryLicenseValueInternal @ 0x1405A1260 (ExQueryLicenseValueInternal.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C66A0 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpHashStringToAtom @ 0x1405F64C0 (RtlpHashStringToAtom.c)
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     LdrpSearchResourceSection_U @ 0x14067C0B0 (LdrpSearchResourceSection_U.c)
 *     PiDmCompareObjects @ 0x14069C3E0 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406B0600 (PiPnpRtlObjectEventCompareObjects.c)
 *     ConstraintEval @ 0x1406BF030 (ConstraintEval.c)
 *     GetPropertyFromPropArray @ 0x1406C66B0 (GetPropertyFromPropArray.c)
 *     PiSwUpdateArrayProperties @ 0x1406D8D10 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1406D8E24 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1406D9A60 (PiSwDeviceMakeCompatibleIds.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DBF74 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqActionDataGetChangedProperties @ 0x1406DC4E4 (PiDqActionDataGetChangedProperties.c)
 *     _CmIsLocalMachineContainer @ 0x1406DC740 (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x1406DCCC0 (PiSwDeviceCompareObjects.c)
 *     _CmUpdateDevicePanel @ 0x1406E9878 (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EC47C (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwStopDestroy @ 0x1406EE438 (PiSwStopDestroy.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406F28BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406F3E30 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F7F10 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F8B18 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406FB244 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FFBD4 (PiBuildDeviceNodeInstancePath.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140700174 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiDevCfgMigrateDevice @ 0x140701FB0 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1407028C4 (PiDevCfgEnforceDevicePolicy.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140707308 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PipCheckForDenyExecute @ 0x14070B1F0 (PipCheckForDenyExecute.c)
 *     IopErrorLogThread @ 0x14070D630 (IopErrorLogThread.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14070FF04 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     BiGetNtPartitionPath @ 0x140712FE4 (BiGetNtPartitionPath.c)
 *     AslpFileMakeStringVersionAttributes @ 0x140720780 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x140720DD8 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x14072106C (AslpFileGetVersionBlock.c)
 *     SdbpFindMatchingName @ 0x140722904 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x140723B78 (SdbFindFirstNamedTag.c)
 *     DrvDbSuspendDatabase @ 0x14073BBA4 (DrvDbSuspendDatabase.c)
 *     RtlpLangNameInMultiSzString @ 0x14073F9B8 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x140740050 (RtlpMuiRegGetStringIndexInPool.c)
 *     ArbShareDriverExclusive @ 0x140740494 (ArbShareDriverExclusive.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140754B2C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140754CAC (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140758F90 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1407631A8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x1407649F0 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140764A60 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x140828B48 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140829CA0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14082AC40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14082AE94 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082D898 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082F238 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14082FF40 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140831A80 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083EFEC (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083F81C (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x140840358 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140841E00 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14087BA90 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E7428 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x1408E8C64 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1408E8D0C (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x1408F692C (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x1408F6C9C (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x1408F6D48 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x1408F95F0 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindInstallerClassFilterInflectionPoint @ 0x1408FE71C (_CmFindInstallerClassFilterInflectionPoint.c)
 *     _CmGetInstallerClassCompoundFilterList @ 0x1408FF2F8 (_CmGetInstallerClassCompoundFilterList.c)
 *     _CmMergeInstallerClassFilterLists @ 0x1409002D0 (_CmMergeInstallerClassFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x1409016D0 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409033E0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140903D7C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409045A4 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x140906E4C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140907CD8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140908450 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x14092CA28 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409512A4 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CE3F0 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x1409F63F0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x1409F6FE0 (PipPendingServicesFilter.c)
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
