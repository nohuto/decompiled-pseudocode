/*
 * XREFs of _PnpGetObjectProperty @ 0x14059B008
 * Callers:
 *     PiRebalanceOptOut @ 0x14028B8A0 (PiRebalanceOptOut.c)
 *     PnpGetDevicePropertyData @ 0x1405879C8 (PnpGetDevicePropertyData.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058FB9C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x140590280 (PiUEventCacheObjectProperties.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140596EDC (PiPnpRtlIsDeviceValidForSession.c)
 *     PiDqPnPGetObjectProperty @ 0x1405982F0 (PiDqPnPGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x140598750 (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405993A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405996C4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14059CAB4 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C66A0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C7B1C (_CmGetDeviceRegPropWorker.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140681F20 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D6540 (IoGetDeviceInterfaceAlias.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1406DAC64 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E64F0 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406E6E60 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E8D18 (PnpCallDriverQueryServiceHelper.c)
 *     _CmUpdateDevicePanel @ 0x1406E9878 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1406EA2CC (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetDeviceParent @ 0x1406EA8C4 (_CmGetDeviceParent.c)
 *     PiDcContainerRequiresConfiguration @ 0x1406EC624 (PiDcContainerRequiresConfiguration.c)
 *     PiDcHandleDeviceEvent @ 0x1406ED140 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1406ED310 (PiDcHandleInterfaceEvent.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EF79C (PpForEachDeviceInstanceDriver.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1406F1F90 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406F2C4C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgProcessDevice @ 0x1406F56C4 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F5DDC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FB6E4 (PiDevCfgCopyObjectProperties.c)
 *     PnpAssignResourcesToDevices @ 0x1406FBF44 (PnpAssignResourcesToDevices.c)
 *     PiUEventDeviceNeedsInstall @ 0x1406FFEFC (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x140701FB0 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140703220 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140704B80 (PiPnpRtlServiceFilterCallback.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070B9DC (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 *     PiDmListInitEnumCallback @ 0x14072D940 (PiDmListInitEnumCallback.c)
 *     PiDrvDbSetupNodes @ 0x14073B9B4 (PiDrvDbSetupNodes.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14073BF7C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082982C (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14082A358 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14082AC40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14082E2F4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082FB98 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x14083A2A0 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x14083E1F8 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x14083E7D0 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14083E918 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083F388 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeleteDeviceWorker @ 0x1408F887C (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x1408F95F0 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x1408FA570 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1408FFEEC (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140906FD0 (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _PnpGetObjectPropertyWorker @ 0x14059B194 (_PnpGetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v16; // eax
  unsigned int ObjectPropertyWorker; // eax
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _QWORD v23[10]; // [rsp+68h] [rbp-41h] BYREF

  memset(v23, 0, sizeof(v23));
  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 488);
  v23[3] = a5;
  v23[4] = a6;
  v23[5] = a7;
  v23[6] = a8;
  LODWORD(v23[7]) = a9;
  v23[8] = a10;
  LODWORD(v23[9]) = a11;
  v23[2] = a4;
  if ( v15 )
  {
    v16 = v15(a1, a2, a3, 8LL, 1, v23);
    if ( v16 == -1073741822 )
    {
      v15 = 0LL;
    }
    else
    {
      if ( v16 == -1073741536 )
        return LODWORD(v23[0]);
      if ( v16 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                           a1,
                           a2,
                           a3,
                           v23[2],
                           v23[3],
                           v23[4],
                           v23[5],
                           v23[6],
                           v23[7],
                           v23[8],
                           v23[9]);
  v18 = ObjectPropertyWorker;
  if ( !v15 )
    return v18;
  LODWORD(v23[0]) = ObjectPropertyWorker;
  v19 = v15(a1, a2, a3, 8LL, 2, v23);
  v20 = v19;
  if ( v19 == -1073741822 )
    return v18;
  if ( v19 == -1073741536 )
    return LODWORD(v23[0]);
  v21 = v18;
  if ( v20 )
    return (unsigned int)-1073741595;
  return v21;
}
