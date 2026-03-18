/*
 * XREFs of _PnpGetObjectProperty @ 0x1405BC748
 * Callers:
 *     PiRebalanceOptOut @ 0x1402A1494 (PiRebalanceOptOut.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1405BBE34 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiDqPnPGetObjectProperty @ 0x1405BC478 (PiDqPnPGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x1405BC608 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1405BCF20 (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405BE8F0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405BEC1C (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C24F0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C2894 (_CmGetDeviceRegPropWorker.c)
 *     PnpGetDevicePropertyData @ 0x140626FA8 (PnpGetDevicePropertyData.c)
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406283AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140629614 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140697670 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x140698D00 (PiUEventCacheObjectProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F1F00 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmGetDeviceParent @ 0x1406F3110 (_CmGetDeviceParent.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F7B60 (IoGetDeviceInterfaceAlias.c)
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406FC7A4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FCABC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     _CmUpdateDevicePanel @ 0x14070137C (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140701DF0 (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140702A2C (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140705460 (PnpCallDriverQueryServiceHelper.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x140707FE4 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14070896C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiDcContainerRequiresConfiguration @ 0x14070CFEC (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgCopyObjectProperties @ 0x140717F04 (PiDevCfgCopyObjectProperties.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14071ADB8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x14071C8B8 (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x14071D64C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14071EFE4 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PnpAssignResourcesToDevices @ 0x1407237D8 (PnpAssignResourcesToDevices.c)
 *     PpForEachDeviceInstanceDriver @ 0x140724BF8 (PpForEachDeviceInstanceDriver.c)
 *     PiDcHandleDeviceEvent @ 0x1407255E0 (PiDcHandleDeviceEvent.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14072C250 (PiPnpRtlServiceFilterCallback.c)
 *     IopProcessSetInterfaceState @ 0x140733D08 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140737D60 (IopDeviceObjectFromSymbolicName.c)
 *     PiDcHandleInterfaceEvent @ 0x140739690 (PiDcHandleInterfaceEvent.c)
 *     PiDrvDbSetupNodes @ 0x140756C5C (PiDrvDbSetupNodes.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140757298 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDmListInitEnumCallback @ 0x1407575D0 (PiDmListInitEnumCallback.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140862214 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140862E98 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408638A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14086702C (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140868908 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873394 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x140877884 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x140877E90 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14087813C (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140878CFC (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeleteDeviceWorker @ 0x140934CD8 (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x140935A80 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x1409369A0 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14093B1B8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14093C01C (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14093CAA0 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140943DB0 (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x1405BC8CC (_PnpGetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  unsigned int v11; // r14d
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int ObjectPropertyWorker; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _QWORD v22[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v23; // [rsp+78h] [rbp-31h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A4h] [rbp-5h]
  __int64 v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+B0h] [rbp+7h]
  int v32; // [rsp+B4h] [rbp+Bh]

  v11 = a3;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v29 = 0;
  v32 = 0;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 488);
  v24 = a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  v28 = a9;
  v30 = a10;
  v31 = a11;
  v23 = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 8LL, 1, v22);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(v22[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyWorker = PnpGetObjectPropertyWorker(a1, a2, v11, v23, v24, v25, v26, v27, v28, v30, v31);
  v17 = ObjectPropertyWorker;
  if ( !v14 )
    return v17;
  LODWORD(v22[0]) = ObjectPropertyWorker;
  v18 = v14(a1, a2, v11, 8LL, 2, v22);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v17;
  if ( v18 == -1073741536 )
    return LODWORD(v22[0]);
  v20 = v17;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
