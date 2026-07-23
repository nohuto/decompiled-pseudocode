/*
 * XREFs of _CmGetDeviceRegProp @ 0x1405C799C
 * Callers:
 *     PiControlGetPropertyData @ 0x1405884A0 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140588C10 (PiGetDeviceRegProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140590C40 (PiDcHandleCustomDeviceEvent.c)
 *     PiCMGetRegistryProperty @ 0x140595FA0 (PiCMGetRegistryProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059CFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x14059F508 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C7B1C (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406B3704 (_CmGetDeviceSoftwareKey.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1406DAC64 (_CmIsDeviceSafeRemovalRequired.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DB8EC (IopInitializeDeviceInstanceKey.c)
 *     _CmIsLocalMachineContainer @ 0x1406DC740 (_CmIsLocalMachineContainer.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E64F0 (PiPnpRtlSetObjectProperty.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E8D18 (PnpCallDriverQueryServiceHelper.c)
 *     PipProcessStartPhase3 @ 0x1406EBDB8 (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EC47C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDeviceRegistration @ 0x1406EF5F8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EF79C (PpForEachDeviceInstanceDriver.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F15C4 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x1406F1B6C (PipGetRegistryDwordWithFallback.c)
 *     PiDevCfgProcessDevice @ 0x1406F56C4 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F7BEC (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1406FB338 (PiDevCfgEnumDeviceKeys.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FF794 (PnpIsDeviceInstanceEnabled.c)
 *     PiQueryRemovableDeviceOverride @ 0x140701018 (PiQueryRemovableDeviceOverride.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1407015C0 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140701C00 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x140703DD0 (IopPnPDispatch.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140704B80 (PiPnpRtlServiceFilterCallback.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070C314 (PnpCheckDeviceIdsChanged.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14070E158 (PpDevCfgProcessDeviceOperations.c)
 *     IopIsReportedAlready @ 0x14072E8B8 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140751DB0 (PiDevCfgProcessDeviceCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14082A240 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14082AC40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14082AE94 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14082C75C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14082E3D0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140831A80 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceClass @ 0x140832934 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140832CA4 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1408333E0 (PpDevCfgProcessDeviceReset.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140841E00 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDeleteDeviceWorker @ 0x1408F887C (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x1408FB9B0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1408FBD20 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x1409F63F0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x1409F6578 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C7B1C (_CmGetDeviceRegPropWorker.c)
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
