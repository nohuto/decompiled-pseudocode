/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059C600 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C73A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C8030 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406D43F0 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EB628 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EB90C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406F2A68 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiDevCfgInitMigrationContext @ 0x140702094 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140703314 (PiDevCfgConfigureDeviceLocation.c)
 *     NtEnableLastKnownGood @ 0x140706EE0 (NtEnableLastKnownGood.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140707540 (_PnpCtxOpenContextBaseKey.c)
 *     NtDisableLastKnownGood @ 0x140707D30 (NtDisableLastKnownGood.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigOpenKey @ 0x14073D5A8 (PipHardwareConfigOpenKey.c)
 *     PnpOpenCCSPnpRegKey @ 0x14073D6FC (PnpOpenCCSPnpRegKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14074AFE0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14074B1C4 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x14074B404 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074B490 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14074B8D4 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140823FA4 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140828B48 (PnpCheckDriverDependencies.c)
 *     PiDevCfgMigrateService @ 0x14082EBA8 (PiDevCfgMigrateService.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14082ED0C (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x140835E24 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1408387EC (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140838EDC (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F76AC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F7CF4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F83AC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F9D10 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1408FA710 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1408FAB94 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FCB04 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FD468 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408FD834 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1408FE358 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14090096C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigInit @ 0x1409C73FC (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     PipMigratePnpState @ 0x1409C9678 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1409C9B40 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409C9BCC (PipProcessPendingOsExtensionResources.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F6A70 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F6C80 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405C8CAC (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r8

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 11 )
    {
      if ( a2 <= 13 || a2 > 15 )
        goto LABEL_9;
    }
    else if ( a2 < 9 && a2 != 5 )
    {
      goto LABEL_9;
    }
    v6 = *(_QWORD *)(a1 + 56);
    v4 = v6 - 16;
    if ( v6 != a1 + 56 )
    {
LABEL_10:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
    }
LABEL_9:
    v4 = *(_QWORD *)(a1 + 88);
    goto LABEL_10;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
}
