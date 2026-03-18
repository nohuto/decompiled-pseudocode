/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1405C6EF0
 * Callers:
 *     _PnpDispatchDevice @ 0x14059AFF0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059BFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059C504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C6B1C (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C7030 (_CmOpenDeviceRegKeyWorker.c)
 *     PiCMOpenDeviceKey @ 0x1406A6ED8 (PiCMOpenDeviceKey.c)
 *     IoOpenDeviceRegistryKey @ 0x1406B3C50 (IoOpenDeviceRegistryKey.c)
 *     IopGetRootDevices @ 0x1406DA414 (IopGetRootDevices.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DC21C (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x1406E2BA8 (_CmSetDeviceRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406E9870 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1406EB4C0 (PnpDeviceObjectToDeviceInstance.c)
 *     IopReleaseDeviceResources @ 0x1406ED6A4 (IopReleaseDeviceResources.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE51C (PpForEachDeviceInstanceDriver.c)
 *     PiDevCfgInitDeviceContext @ 0x1406F4A38 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1406FA0B8 (PiDevCfgEnumDeviceKeys.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FB30C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1406FB514 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FB8C0 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1406FBC18 (PiQueryResourceRequirements.c)
 *     _CmCreateDeviceWorker @ 0x1406FD518 (_CmCreateDeviceWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FE514 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FE69C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070B094 (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x14070BF10 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14072D6E8 (IopIsReportedAlready.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14072E0BC (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140750BE0 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x140754F14 (PipApplyFunctionToServiceInstances.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14082887C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14082D314 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082E988 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830840 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F710C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1408F75DC (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1408FCE44 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408FCF98 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408FF2F0 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140905E5C (PnpGetDeviceInstanceRegistryValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C7030 (_CmOpenDeviceRegKeyWorker.c)
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
