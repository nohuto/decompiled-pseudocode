/*
 * XREFs of _CmGetDeviceRegProp @ 0x1405C699C
 * Callers:
 *     PiControlGetPropertyData @ 0x1405874A0 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x1405876E0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140587C10 (PiGetDeviceRegProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14058FC40 (PiDcHandleCustomDeviceEvent.c)
 *     PiCMGetRegistryProperty @ 0x140594FA0 (PiCMGetRegistryProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059BFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059C504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x14059E508 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C6B1C (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406B2484 (_CmGetDeviceSoftwareKey.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1406D99E4 (_CmIsDeviceSafeRemovalRequired.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA66C (IopInitializeDeviceInstanceKey.c)
 *     _CmIsLocalMachineContainer @ 0x1406DB4C0 (_CmIsLocalMachineContainer.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E5270 (PiPnpRtlSetObjectProperty.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E7A98 (PnpCallDriverQueryServiceHelper.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EB1FC (PiDcUpdateDeviceContainerMembership.c)
 *     PiDeviceRegistration @ 0x1406EE378 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE51C (PpForEachDeviceInstanceDriver.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F0344 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x1406F08EC (PipGetRegistryDwordWithFallback.c)
 *     PiDevCfgProcessDevice @ 0x1406F4444 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F696C (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1406FA0B8 (PiDevCfgEnumDeviceKeys.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FE514 (PnpIsDeviceInstanceEnabled.c)
 *     PiQueryRemovableDeviceOverride @ 0x1406FFD98 (PiQueryRemovableDeviceOverride.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140700340 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140700980 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x140702B50 (IopPnPDispatch.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140703900 (PiPnpRtlServiceFilterCallback.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070B094 (PnpCheckDeviceIdsChanged.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14070CED8 (PpDevCfgProcessDeviceOperations.c)
 *     IopIsReportedAlready @ 0x14072D6E8 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140750BE0 (PiDevCfgProcessDeviceCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140829060 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A60 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140829CB4 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14082B57C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14082D1C0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830840 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceClass @ 0x1408316F4 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140831A64 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1408321A0 (PpDevCfgProcessDeviceReset.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140838654 (PiCMQueryRemove.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BC0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDeleteDeviceWorker @ 0x1408F75DC (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x1408FA710 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1408FAA80 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x1409F53E0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x1409F5568 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C6B1C (_CmGetDeviceRegPropWorker.c)
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
