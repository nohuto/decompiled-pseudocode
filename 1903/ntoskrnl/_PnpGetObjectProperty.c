/*
 * XREFs of _PnpGetObjectProperty @ 0x1405BC368
 * Callers:
 *     PiRebalanceOptOut @ 0x1402A1734 (PiRebalanceOptOut.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1405BBA54 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiDqPnPGetObjectProperty @ 0x1405BC098 (PiDqPnPGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x1405BC228 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1405BCB40 (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405BE420 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405BE74C (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C2020 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C23C4 (_CmGetDeviceRegPropWorker.c)
 *     PnpGetDevicePropertyData @ 0x1406230F8 (PnpGetDevicePropertyData.c)
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140625764 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14066A7A0 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14066BE30 (PiUEventCacheObjectProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F0460 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmGetDeviceParent @ 0x1406F1670 (_CmGetDeviceParent.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F5DA0 (IoGetDeviceInterfaceAlias.c)
 *     PiDevCfgProcessDevice @ 0x1406F952C (PiDevCfgProcessDevice.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406FA9C4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FACDC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FCD34 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     _CmUpdateDevicePanel @ 0x1406FF59C (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140700010 (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140700C4C (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140703680 (PnpCallDriverQueryServiceHelper.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x140706204 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140706B8C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiDcContainerRequiresConfiguration @ 0x14070B20C (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgCopyObjectProperties @ 0x140715C44 (PiDevCfgCopyObjectProperties.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140718FC8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x14071AAC8 (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x14071B85C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14071D154 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PnpAssignResourcesToDevices @ 0x140721938 (PnpAssignResourcesToDevices.c)
 *     PpForEachDeviceInstanceDriver @ 0x140722D58 (PpForEachDeviceInstanceDriver.c)
 *     PiDcHandleDeviceEvent @ 0x140723740 (PiDcHandleDeviceEvent.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14072A3B0 (PiPnpRtlServiceFilterCallback.c)
 *     IopProcessSetInterfaceState @ 0x140731AA8 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140735B00 (IopDeviceObjectFromSymbolicName.c)
 *     PiDcHandleInterfaceEvent @ 0x140737458 (PiDcHandleInterfaceEvent.c)
 *     PiDrvDbSetupNodes @ 0x1407561CC (PiDrvDbSetupNodes.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140756808 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDmListInitEnumCallback @ 0x140756B40 (PiDmListInitEnumCallback.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140862B14 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140863798 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408641A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14086792C (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140869208 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873C94 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x140878184 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x140878790 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140878A3C (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408795FC (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeleteDeviceWorker @ 0x140935264 (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x140936010 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140936F30 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14093B748 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14093C5AC (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14093D030 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140944340 (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x1405BC4EC (_PnpGetObjectPropertyWorker.c)
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
