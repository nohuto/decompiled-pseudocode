/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1405C7C40
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181D80 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059B600 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C63A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C7030 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406D3170 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EA3A8 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EA68C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406F17E8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiDevCfgInitMigrationContext @ 0x140700E14 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140702094 (PiDevCfgConfigureDeviceLocation.c)
 *     NtEnableLastKnownGood @ 0x140705C60 (NtEnableLastKnownGood.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1407062C0 (_PnpCtxOpenContextBaseKey.c)
 *     NtDisableLastKnownGood @ 0x140706AB0 (NtDisableLastKnownGood.c)
 *     PipOpenServiceEnumKeys @ 0x140709554 (PipOpenServiceEnumKeys.c)
 *     PipMakeGloballyUniqueId @ 0x14070BF10 (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigOpenKey @ 0x14073C3D8 (PipHardwareConfigOpenKey.c)
 *     PnpOpenCCSPnpRegKey @ 0x14073C52C (PnpOpenCCSPnpRegKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140749E10 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x140749FF4 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x14074A234 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074A2C0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14074A704 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140822DC4 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140827968 (PnpCheckDriverDependencies.c)
 *     PiDevCfgMigrateService @ 0x14082D998 (PiDevCfgMigrateService.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14082DAFC (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x140834BE4 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1408375AC (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140837C9C (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F640C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F6A54 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F710C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F8A70 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1408F9470 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1408F98F4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FB864 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FC1C8 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408FC594 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1408FD0B8 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1408FF6CC (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigInit @ 0x1409C63FC (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     PipMigratePnpState @ 0x1409C8678 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1409C8B40 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409C8BCC (PipProcessPendingOsExtensionResources.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F5A60 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F5C70 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405C7CAC (_PnpCtxGetCachedNodeBaseKey.c)
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
