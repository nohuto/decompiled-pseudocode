/*
 * XREFs of _CmGetDeviceRegProp @ 0x1405C2714
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     IoGetDeviceProperty @ 0x1405BFB40 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1405C0098 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1405C079C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C2894 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406283AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x140629D58 (_CmGetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140671A60 (PiControlGetPropertyData.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140697168 (PiDcHandleCustomDeviceEvent.c)
 *     PiCMGetRegistryProperty @ 0x1406D2E3C (PiCMGetRegistryProperty.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406D6E7C (_CmGetDeviceSoftwareKey.c)
 *     _CmIsLocalMachineContainer @ 0x1406F4B8C (_CmIsLocalMachineContainer.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406FB220 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140701F68 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x1407025F4 (PipGetRegistryDwordWithFallback.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140705460 (PnpCallDriverQueryServiceHelper.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140707FE4 (PiPnpRtlSetObjectProperty.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14070C918 (PiDcUpdateDeviceContainerMembership.c)
 *     PiQueryRemovableDeviceOverride @ 0x140714594 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140717B3C (PiDevCfgEnumDeviceKeys.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14071ADB8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14071D19C (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x14071D8E8 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x140722DA0 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     PiDeviceRegistration @ 0x140724A48 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140724BF8 (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140724EEC (PnpIsDeviceInstanceEnabled.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14072C250 (PiPnpRtlServiceFilterCallback.c)
 *     PnpCheckDeviceIdsChanged @ 0x140738648 (PnpCheckDeviceIdsChanged.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073B468 (PpDevCfgProcessDeviceOperations.c)
 *     IopIsReportedAlready @ 0x140751DE8 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140779700 (PiDevCfgProcessDeviceCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140862D40 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408638A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140863B00 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865460 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x140867100 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086A900 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceClass @ 0x14086B78C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14086BB08 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14086C244 (PpDevCfgProcessDeviceReset.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDeleteDeviceWorker @ 0x140934CD8 (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x140937DB0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140938170 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140A3A780 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140A3A8F8 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C2894 (_CmGetDeviceRegPropWorker.c)
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
