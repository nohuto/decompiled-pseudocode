/*
 * XREFs of _PnpGetObjectProperty @ 0x14059A008
 * Callers:
 *     PiRebalanceOptOut @ 0x14028B5B0 (PiRebalanceOptOut.c)
 *     PnpGetDevicePropertyData @ 0x1405869C8 (PnpGetDevicePropertyData.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058EB9C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14058F280 (PiUEventCacheObjectProperties.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140595EDC (PiPnpRtlIsDeviceValidForSession.c)
 *     PiDqPnPGetObjectProperty @ 0x1405972F0 (PiDqPnPGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x140597750 (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405983A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405986C4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PnpGetObjectProperty @ 0x140599EC8 (PnpGetObjectProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14059BAB4 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059C504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C56A0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C6B1C (_CmGetDeviceRegPropWorker.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140680D80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D52C0 (IoGetDeviceInterfaceAlias.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1406D99E4 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E54 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E5270 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406E5BE0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E7A98 (PnpCallDriverQueryServiceHelper.c)
 *     _CmUpdateDevicePanel @ 0x1406E85F8 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1406E904C (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetDeviceParent @ 0x1406E9644 (_CmGetDeviceParent.c)
 *     PiDcContainerRequiresConfiguration @ 0x1406EB3A4 (PiDcContainerRequiresConfiguration.c)
 *     PiDcHandleDeviceEvent @ 0x1406EBEC0 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1406EC090 (PiDcHandleInterfaceEvent.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE51C (PpForEachDeviceInstanceDriver.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1406F0D10 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406F19CC (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CF4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgProcessDevice @ 0x1406F4444 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F4B5C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F6260 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FA464 (PiDevCfgCopyObjectProperties.c)
 *     PnpAssignResourcesToDevices @ 0x1406FACC4 (PnpAssignResourcesToDevices.c)
 *     PiUEventDeviceNeedsInstall @ 0x1406FEC7C (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x140700D30 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140701FA0 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140703900 (PiPnpRtlServiceFilterCallback.c)
 *     IopRegisterDeviceInterface @ 0x140709AF4 (IopRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070A75C (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x14070F918 (IopProcessSetInterfaceState.c)
 *     PiDmListInitEnumCallback @ 0x14072C770 (PiDmListInitEnumCallback.c)
 *     PiDrvDbSetupNodes @ 0x14073A7E4 (PiDrvDbSetupNodes.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14073ADAC (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082864C (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140829178 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A60 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14082D0E8 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082E988 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x140839060 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x14083CFB8 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x14083D590 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14083D6D8 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083E148 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeleteDeviceWorker @ 0x1408F75DC (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x1408F8350 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x1408F92D0 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1408FEC4C (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140905D30 (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     _PnpGetObjectPropertyWorker @ 0x14059A194 (_PnpGetObjectPropertyWorker.c)
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
