/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1405C3CAC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C0408 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C3150 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140629324 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     NtEnableLastKnownGood @ 0x1406DA230 (NtEnableLastKnownGood.c)
 *     NtDisableLastKnownGood @ 0x1406E95F0 (NtDisableLastKnownGood.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406F2CD4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406F3DC8 (DrvDbLoadDatabaseNode.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140700010 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14070D310 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDevCfgInitMigrationContext @ 0x14071D730 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14071EE88 (PiDevCfgConfigureDeviceLocation.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14072EFD4 (_PnpCtxOpenContextBaseKey.c)
 *     PipOpenServiceEnumKeys @ 0x1407360F0 (PipOpenServiceEnumKeys.c)
 *     PipMakeGloballyUniqueId @ 0x1407398BC (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigOpenKey @ 0x140755338 (PipHardwareConfigOpenKey.c)
 *     PnpOpenCCSPnpRegKey @ 0x140755570 (PnpOpenCCSPnpRegKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14076C314 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14076C4F8 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x14076C72C (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14076C7B8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14076CBC0 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14085C7E0 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140861428 (PnpCheckDriverDependencies.c)
 *     PiDevCfgMigrateService @ 0x1408678DC (PiDevCfgMigrateService.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x140867A40 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x14086EC54 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x140871708 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140871E48 (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140933B20 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140934184 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934804 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1409361A4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140936B40 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140936FC4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140938F98 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140939900 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140939C9C (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14093A8C0 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14093D518 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409F81B4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1409F8240 (PipProcessPendingServices.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140A1C474 (PipHardwareConfigInit.c)
 *     PipMigratePnpState @ 0x140A212F4 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3AE40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B050 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405C3D18 (_PnpCtxGetCachedNodeBaseKey.c)
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
