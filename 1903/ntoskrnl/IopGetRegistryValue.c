/*
 * XREFs of IopGetRegistryValue @ 0x14069A450
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140189294 (IopInitializeOfflineCrashDump.c)
 *     PnpBootDeviceWait @ 0x14018D970 (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x140193270 (IopReadDumpRegistry.c)
 *     PipDmaGuardGetRegistryPolicy @ 0x140194A70 (PipDmaGuardGetRegistryPolicy.c)
 *     SecureDump_ReadRegistry @ 0x14019B644 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x14019CDBC (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x14029C038 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x14029F7E0 (PiDevCfgQueryResolveValue.c)
 *     NtEnableLastKnownGood @ 0x1406990D0 (NtEnableLastKnownGood.c)
 *     PiDevCfgBuildIndirectString @ 0x1406FC8B8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x1406FDE58 (PiDevCfgResolveVariable.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     PnpPrepareDriverLoading @ 0x140709CE8 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x14070D600 (IopBuildFullDriverPath.c)
 *     PiDevCfgMigrateDevice @ 0x14071B85C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071CAE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140722514 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1407231B0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14072B300 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgVerifyService @ 0x14072C4F0 (PiDevCfgVerifyService.c)
 *     PiFindDevInstMatch @ 0x14073402C (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140734234 (PiRearrangeDeviceInstances.c)
 *     PipCheckForDenyExecute @ 0x140735748 (PipCheckForDenyExecute.c)
 *     IopGetRegistryValues @ 0x140742E60 (IopGetRegistryValues.c)
 *     IopIsReportedAlready @ 0x140751358 (IopIsReportedAlready.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140775330 (PnpCheckPossibleBootStartDriver.c)
 *     PnpReadDeviceConfiguration @ 0x140775DD0 (PnpReadDeviceConfiguration.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077A264 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x14077CB10 (IoOpenDriverRegistryKey.c)
 *     PipUpdateSetupInProgress @ 0x140788C48 (PipUpdateSetupInProgress.c)
 *     PnpDriverLoadingFailed @ 0x140788FD4 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140854720 (IopSafebootDriverLoad.c)
 *     PiGetDeviceRegistryProperty @ 0x14085EB68 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140861A70 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x140864060 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140866EC0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140867EA0 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408680E4 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140868888 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140868D18 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140868D8C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x140869730 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x140869800 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14086AAE0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14086B120 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086B200 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14086B9D0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14086BBB0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140879CC4 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14094446C (PnpGetDeviceInstanceRegistryValue.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409F6E88 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140A10210 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140A10D48 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140A10E54 (PipCheckDependencies.c)
 *     PipGetDriverTagPriority @ 0x140A10EAC (PipGetDriverTagPriority.c)
 *     PiInitCacheGroupInformation @ 0x140A1719C (PiInitCacheGroupInformation.c)
 *     PipHardwareConfigInit @ 0x140A1C298 (PipHardwareConfigInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A226C4 (IopQueryDeviceResetRegistrySettings.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  int v10; // ebx
  ULONG Length; // ebx
  PVOID Pool_0; // rdi
  NTSTATUS v13; // ebx
  PVOID v14; // rbx
  NTSTATUS v15; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = (2 * v9 + 31) & 0xFFFFFFF8;
    if ( a3 )
      Length = (a3 + v10 + 7) & 0xFFFFFFF8;
    else
      Length = v10 + 4;
    Pool_0 = IopVerifierExAllocatePool_0(PagedPool, Length);
    if ( Pool_0 )
    {
      v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool_0, Length, &ResultLength);
      if ( v13 >= 0 )
      {
        *a4 = Pool_0;
        return 0;
      }
      ExFreePoolWithTag(Pool_0, 0);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        return v13;
      v14 = IopVerifierExAllocatePool_0(PagedPool, ResultLength);
      if ( v14 )
      {
        v15 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v14, ResultLength, &ResultLength);
        if ( v15 < 0 )
        {
          ExFreePoolWithTag(v14, 0);
          return v15;
        }
        *a4 = v14;
        return 0;
      }
    }
    return -1073741670;
  }
  return result;
}
