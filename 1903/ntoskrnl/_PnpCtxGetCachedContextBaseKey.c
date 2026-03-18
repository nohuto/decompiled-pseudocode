/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405BFF38 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C2C80 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140625474 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     NtEnableLastKnownGood @ 0x1406990D0 (NtEnableLastKnownGood.c)
 *     NtDisableLastKnownGood @ 0x1406E8550 (NtDisableLastKnownGood.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406F1234 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406F2328 (DrvDbLoadDatabaseNode.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406FE230 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14070B530 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDevCfgInitMigrationContext @ 0x14071B940 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14071CFF8 (PiDevCfgConfigureDeviceLocation.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14072D10C (_PnpCtxOpenContextBaseKey.c)
 *     PipOpenServiceEnumKeys @ 0x140733E90 (PipOpenServiceEnumKeys.c)
 *     PipMakeGloballyUniqueId @ 0x140737660 (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigOpenKey @ 0x1407548A8 (PipHardwareConfigOpenKey.c)
 *     PnpOpenCCSPnpRegKey @ 0x140754AE0 (PnpOpenCCSPnpRegKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140767814 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1407679F8 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x140767C2C (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140767CB8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1407680C0 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14085D0E0 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140861D28 (PnpCheckDriverDependencies.c)
 *     PiDevCfgMigrateService @ 0x1408681DC (PiDevCfgMigrateService.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x140868340 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x14086F554 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x140872008 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140872748 (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1409340AC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140934710 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934D90 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140936734 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1409370D0 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140937554 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140939528 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140939E90 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14093A22C (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14093AE50 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14093DAA8 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409F82A4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1409F8330 (PipProcessPendingServices.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140A1C298 (PipHardwareConfigInit.c)
 *     PipMigratePnpState @ 0x140A21114 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3B070 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B280 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405C3848 (_PnpCtxGetCachedNodeBaseKey.c)
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
