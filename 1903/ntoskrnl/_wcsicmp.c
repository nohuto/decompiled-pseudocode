/*
 * XREFs of _wcsicmp @ 0x1401A0100
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400AFFDC (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x14011D38C (LdrRscIsTypeExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x140180F68 (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018DD04 (RtlpMuiRegAddAlternateCodePage.c)
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14029F2D8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14029F34C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402F3758 (PopFxIsDevicePotentialDripsConstraint.c)
 *     ConstraintEval @ 0x1405B5BA0 (ConstraintEval.c)
 *     StringListContains @ 0x1405B5E60 (StringListContains.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B61B4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PropertyEval @ 0x1405B7A30 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1405BB290 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C2020 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpHashStringToAtom @ 0x1405EBCF0 (RtlpHashStringToAtom.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140669D48 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14066C200 (PiUEventNotifyTargetDeviceChange.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1406981A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     sub_1406AB150 @ 0x1406AB150 (sub_1406AB150.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     PiDmCompareObjects @ 0x1406C00F0 (PiDmCompareObjects.c)
 *     LdrpSearchResourceSection_U @ 0x1406C5CD0 (LdrpSearchResourceSection_U.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406D38E0 (PiPnpRtlObjectEventCompareObjects.c)
 *     GetPropertyFromPropArray @ 0x1406E87D0 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406EC20C (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     _CmIsLocalMachineContainer @ 0x1406F30EC (_CmIsLocalMachineContainer.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FB7A4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406FD570 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x1406FDE58 (PiDevCfgResolveVariable.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406FE794 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmUpdateDevicePanel @ 0x1406FF59C (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14070AB38 (PiDcUpdateDeviceContainerMembership.c)
 *     WmipPrepareWnodeSI @ 0x140711A20 (WmipPrepareWnodeSI.c)
 *     PiDqQueryApplyObjectEvent @ 0x140713A14 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140715760 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14071A83C (PiBuildDeviceNodeInstancePath.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14071B2C8 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiDevCfgMigrateDevice @ 0x14071B85C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14071C568 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDqActionDataGetChangedProperties @ 0x14071DE78 (PiDqActionDataGetChangedProperties.c)
 *     PiSwDeviceCompareObjects @ 0x14071E520 (PiSwDeviceCompareObjects.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1407206BC (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwStopDestroy @ 0x140730CC8 (PiSwStopDestroy.c)
 *     PipCheckForDenyExecute @ 0x140735748 (PipCheckForDenyExecute.c)
 *     IopErrorLogThread @ 0x140737B10 (IopErrorLogThread.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14073AD64 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     BiGetNtPartitionPath @ 0x14073BE94 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x14073C270 (BiIsValidDiskDevice.c)
 *     PiSwUpdateArrayProperties @ 0x14074243C (PiSwUpdateArrayProperties.c)
 *     SdbpFindMatchingName @ 0x14074C7DC (SdbpFindMatchingName.c)
 *     DrvDbSuspendDatabase @ 0x1407563B4 (DrvDbSuspendDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140756900 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140756E68 (DrvDbOpenDriverDatabaseRegKey.c)
 *     ArbShareDriverExclusive @ 0x14075BA98 (ArbShareDriverExclusive.c)
 *     RtlpLangNameInMultiSzString @ 0x140766424 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x140766AD0 (RtlpMuiRegGetStringIndexInPool.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x140777480 (PiSwDeviceFindInterfaceEntry.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14077DF88 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140788F08 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x14078A2A0 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14078A310 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x140861D28 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140863080 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408641A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140864400 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140866EC0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140868888 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1408695D0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086B200 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408791D4 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140879CC4 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A994 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408B6E0C (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140922848 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140924058 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1409240FC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409241C4 (SdbpFindNextNamedTag.c)
 *     AslpFileGetVersionBlock @ 0x14092A66C (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x14092B6A0 (AslpFileVerQueryBlock.c)
 *     SiGetEspFromFirmware @ 0x140933318 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x14093368C (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140933738 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x140936010 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindFilterListInflectionPoint @ 0x14093B238 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x14093B334 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14093D414 (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x14093E7F8 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140940590 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940FC0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14094186C (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x1409441AC (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14094507C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140945820 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x14096A298 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409902F4 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13344 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140A3A9B0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140A3B5E0 (PipPendingServicesFilter.c)
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
