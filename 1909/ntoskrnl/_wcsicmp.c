/*
 * XREFs of _wcsicmp @ 0x1401A0820
 * Callers:
 *     LdrRscIsTypeExist @ 0x1400DF690 (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x1400E00CC (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x140181658 (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018E614 (RtlpMuiRegAddAlternateCodePage.c)
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14029F038 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14029F0AC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402F34B8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     ConstraintEval @ 0x1405B5F80 (ConstraintEval.c)
 *     StringListContains @ 0x1405B6240 (StringListContains.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B6594 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PropertyEval @ 0x1405B7E10 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1405BB670 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C24F0 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpHashStringToAtom @ 0x1405EC4C0 (RtlpHashStringToAtom.c)
 *     LdrpSearchResourceSection_U @ 0x140675740 (LdrpSearchResourceSection_U.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14068B714 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140697168 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1406990D0 (PiUEventNotifyTargetDeviceChange.c)
 *     sub_1406A1AF0 @ 0x1406A1AF0 (sub_1406A1AF0.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     PiDmCompareObjects @ 0x1406BEF50 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406D2D90 (PiPnpRtlObjectEventCompareObjects.c)
 *     GetPropertyFromPropArray @ 0x1406E9870 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406ED4CC (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     _CmIsLocalMachineContainer @ 0x1406F4B8C (_CmIsLocalMachineContainer.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FD584 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406FF350 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x1406FFC38 (PiDevCfgResolveVariable.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140700574 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmUpdateDevicePanel @ 0x14070137C (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14070C918 (PiDcUpdateDeviceContainerMembership.c)
 *     WmipPrepareWnodeSI @ 0x140713800 (WmipPrepareWnodeSI.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407157F4 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140717A20 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14071C62C (PiBuildDeviceNodeInstancePath.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14071D0B8 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiDevCfgMigrateDevice @ 0x14071D64C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14071E358 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDqActionDataGetChangedProperties @ 0x14071FD08 (PiDqActionDataGetChangedProperties.c)
 *     PiSwDeviceCompareObjects @ 0x1407203B0 (PiSwDeviceCompareObjects.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14072255C (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwStopDestroy @ 0x140732F28 (PiSwStopDestroy.c)
 *     PipCheckForDenyExecute @ 0x1407379A8 (PipCheckForDenyExecute.c)
 *     IopErrorLogThread @ 0x140739D70 (IopErrorLogThread.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14073CCC4 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     BiGetNtPartitionPath @ 0x14073DD94 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x14073E170 (BiIsValidDiskDevice.c)
 *     PiSwUpdateArrayProperties @ 0x14074433C (PiSwUpdateArrayProperties.c)
 *     SdbpFindMatchingName @ 0x14074D26C (SdbpFindMatchingName.c)
 *     DrvDbSuspendDatabase @ 0x140756E44 (DrvDbSuspendDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140757390 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407578F8 (DrvDbOpenDriverDatabaseRegKey.c)
 *     ArbShareDriverExclusive @ 0x140760218 (ArbShareDriverExclusive.c)
 *     RtlpLangNameInMultiSzString @ 0x14076AF24 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14076B5D0 (RtlpMuiRegGetStringIndexInPool.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14077AA60 (PiSwDeviceFindInterfaceEntry.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1407809A8 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x14078B368 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x14078C700 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14078C770 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x140861428 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140862780 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408638A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140863B00 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408665C0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140867F88 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x140868CD0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086A900 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408788D4 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408793C4 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A094 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408B66DC (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1409222A8 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140923AB8 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x140923B5C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140923C24 (SdbpFindNextNamedTag.c)
 *     AslpFileGetVersionBlock @ 0x14092A0CC (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x14092B114 (AslpFileVerQueryBlock.c)
 *     SiGetEspFromFirmware @ 0x140932D8C (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140933100 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x1409331AC (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x140935A80 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindFilterListInflectionPoint @ 0x14093ACA8 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x14093ADA4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14093CE84 (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x14093E268 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140940000 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940A30 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409412DC (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x140943C1C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140944AEC (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140945290 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x14096A298 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409902F4 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13ADC (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140A3A780 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140A3B3B0 (PipPendingServicesFilter.c)
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
