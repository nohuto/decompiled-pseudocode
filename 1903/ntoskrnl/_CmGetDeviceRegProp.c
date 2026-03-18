/*
 * XREFs of _CmGetDeviceRegProp @ 0x1405C2244
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 *     IoGetDeviceProperty @ 0x1405BF670 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1405BFBC8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1405C02CC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C23C4 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x140625EA8 (_CmGetDeviceStatus.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140669D48 (PiDcHandleCustomDeviceEvent.c)
 *     PiControlGetPropertyData @ 0x1406A02E0 (PiControlGetPropertyData.c)
 *     PiCMGetRegistryProperty @ 0x1406D3B4C (PiCMGetRegistryProperty.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406D709C (_CmGetDeviceSoftwareKey.c)
 *     _CmIsLocalMachineContainer @ 0x1406F30EC (_CmIsLocalMachineContainer.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F9440 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgProcessDevice @ 0x1406F952C (PiDevCfgProcessDevice.c)
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140700188 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x140700814 (PipGetRegistryDwordWithFallback.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140703680 (PnpCallDriverQueryServiceHelper.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140706204 (PiPnpRtlSetObjectProperty.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14070AB38 (PiDcUpdateDeviceContainerMembership.c)
 *     PiQueryRemovableDeviceOverride @ 0x1407127B4 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14071587C (PiDevCfgEnumDeviceKeys.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140718FC8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14071B3AC (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x14071BAF8 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x140720F00 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     PiDeviceRegistration @ 0x140722BA8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140722D58 (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14072304C (PnpIsDeviceInstanceEnabled.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14072A3B0 (PiPnpRtlServiceFilterCallback.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407363E8 (PnpCheckDeviceIdsChanged.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1407391D8 (PpDevCfgProcessDeviceOperations.c)
 *     IopIsReportedAlready @ 0x140751358 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140776120 (PiDevCfgProcessDeviceCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140863640 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408641A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140864400 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865D60 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x140867A00 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086B200 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceClass @ 0x14086C08C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14086C408 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14086CB44 (PpDevCfgProcessDeviceReset.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDeleteDeviceWorker @ 0x140935264 (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x140938340 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140938700 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140A3A9B0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140A3AB28 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C23C4 (_CmGetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmGetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, int, _QWORD *); // r12
  int v12; // eax
  unsigned int DeviceRegPropWorker; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _QWORD v20[12]; // [rsp+50h] [rbp-71h] BYREF

  memset(v20, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
  v20[2] = a3;
  LODWORD(v20[3]) = a4;
  v20[5] = a6;
  v20[6] = a7;
  v20[4] = a5;
  LODWORD(v20[7]) = a8;
  if ( v11 )
  {
    v12 = v11(a1, a2, 1LL, 9LL, 1, v20);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  DeviceRegPropWorker = CmGetDeviceRegPropWorker(a1, a2, v20[2], LODWORD(v20[3]), v20[4], v20[5], v20[6], v20[7]);
  v14 = DeviceRegPropWorker;
  if ( !v11 )
    return v14;
  LODWORD(v20[0]) = DeviceRegPropWorker;
  v15 = v11(a1, a2, 1LL, 9LL, 2, v20);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return LODWORD(v20[0]);
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
