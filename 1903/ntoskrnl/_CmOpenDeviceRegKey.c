/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1405C2B40
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1405C02CC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C23C4 (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C2C80 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpDispatchDevice @ 0x140624110 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     IoOpenDeviceRegistryKey @ 0x1406D4A60 (IoOpenDeviceRegistryKey.c)
 *     PiDevCfgInitDeviceContext @ 0x1406FD444 (PiDevCfgInitDeviceContext.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140701A0C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140702314 (PnpDeviceObjectToDeviceInstance.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     _CmSetDeviceRegPropWorker @ 0x140703D44 (_CmSetDeviceRegPropWorker.c)
 *     _CmGetDeviceCompoundFilters @ 0x140707510 (_CmGetDeviceCompoundFilters.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14071587C (PiDevCfgEnumDeviceKeys.c)
 *     PiCMOpenDeviceKey @ 0x140717D8C (PiCMOpenDeviceKey.c)
 *     _CmCreateDeviceWorker @ 0x14071973C (_CmCreateDeviceWorker.c)
 *     IopGetRootDevices @ 0x14072137C (IopGetRootDevices.c)
 *     PiQueryAndAllocateBootResources @ 0x140721F88 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x140722160 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140722514 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x140722880 (PiQueryResourceRequirements.c)
 *     PpForEachDeviceInstanceDriver @ 0x140722D58 (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14072304C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1407231B0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407233C4 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IopReleaseDeviceResources @ 0x140730810 (IopReleaseDeviceResources.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407363E8 (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x140737660 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x140751358 (IopIsReportedAlready.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140751E7C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140776120 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077A264 (PipApplyFunctionToServiceInstances.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140862D98 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x140867B54 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140869208 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086B200 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934D90 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140935264 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14093ABB8 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14093AD24 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14093D6CC (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14094446C (PnpGetDeviceInstanceRegistryValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C2C80 (_CmOpenDeviceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  PVOID PoolWithTag; // rax
  void *v14; // rdi
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v19; // eax
  int v20; // ecx
  int v21; // eax

  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x52504E50u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v14 + 6) = a5;
  *((_BYTE *)v14 + 28) = a6;
  *((_DWORD *)v14 + 4) = a3;
  *((_QWORD *)v14 + 4) = a7;
  *((_DWORD *)v14 + 5) = a4;
  if ( !v8 )
    goto LABEL_5;
  v15 = v8(a1, a2, 1LL);
  switch ( v15 )
  {
    case -1073741822:
      v8 = 0LL;
      goto LABEL_5;
    case -1073741536:
      goto LABEL_15;
    case 0:
LABEL_5:
      v16 = CmOpenDeviceRegKeyWorker(
              a1,
              a2,
              *((_DWORD *)v14 + 4),
              *((_DWORD *)v14 + 5),
              *((_DWORD *)v14 + 6),
              *((_BYTE *)v14 + 28),
              *((_QWORD *)v14 + 4),
              (__int64)v14 + 40);
      v17 = v16;
      if ( !v8 || (*(_DWORD *)v14 = v16, v19 = v8(a1, a2, 1LL), v20 = v19, v19 == -1073741822) )
      {
LABEL_6:
        if ( v17 >= 0 && a8 )
          *a8 = *((_DWORD *)v14 + 10);
        goto LABEL_9;
      }
      if ( v19 != -1073741536 )
      {
        v21 = v17;
        if ( v20 )
          v21 = -1073741595;
        v17 = v21;
        goto LABEL_6;
      }
LABEL_15:
      v17 = *(_DWORD *)v14;
      goto LABEL_6;
  }
  v17 = -1073741595;
LABEL_9:
  ExFreePoolWithTag(v14, 0);
  return (unsigned int)v17;
}
