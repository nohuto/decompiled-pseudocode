/*
 * XREFs of IopGetRegistryValue @ 0x1406804D4
 * Callers:
 *     PipDmaGuardGetRegistryPolicy @ 0x14016ABBC (PipDmaGuardGetRegistryPolicy.c)
 *     IopInitializeOfflineCrashDump @ 0x140180C80 (IopInitializeOfflineCrashDump.c)
 *     PnpBootDeviceWait @ 0x1401823EC (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x140188614 (IopReadDumpRegistry.c)
 *     SecureDump_ReadRegistry @ 0x140191580 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x140192B5C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140284E84 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x1402895BC (PiDevCfgQueryResolveValue.c)
 *     PnpPrepareDriverLoading @ 0x14067F018 (PnpPrepareDriverLoading.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680340 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14068061C (IopBuildFullDriverPath.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA64C (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CD4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x1406F33FC (PiDevCfgResolveVariable.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F5754 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DB0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FB8A0 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FE67C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgMigrateDevice @ 0x140700D10 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgVerifyService @ 0x1407051D8 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140705820 (PiDevCfgResolveMultiSzValue.c)
 *     NtEnableLastKnownGood @ 0x140705C40 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x140706110 (PiRearrangeDeviceInstances.c)
 *     PiFindDevInstMatch @ 0x14070978C (PiFindDevInstMatch.c)
 *     PipCheckForDenyExecute @ 0x140709F50 (PipCheckForDenyExecute.c)
 *     IopGetRegistryValues @ 0x1407198F0 (IopGetRegistryValues.c)
 *     IopIsReportedAlready @ 0x14072D6C8 (IopIsReportedAlready.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745708 (IopCopyBootLogRegistryToFile.c)
 *     PnpReadDeviceConfiguration @ 0x140750A88 (PnpReadDeviceConfiguration.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140750D60 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x140754EF4 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x140756F20 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x1407630B0 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x14081A7D0 (IopSafebootDriverLoad.c)
 *     PiGetDeviceRegistryProperty @ 0x140824718 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408276B0 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x140829910 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C66C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14082D650 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14082D88C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E008 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14082E498 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082E50C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14082EE60 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF30 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140830100 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140830740 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830820 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140830FF0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408311D0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PnpUpdateSetupInProgressConfiguration @ 0x140832C94 (PnpUpdateSetupInProgressConfiguration.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5BC (PiDrvDbResolveFilePathKeyValues.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BA0 (PiCreateDriverSwDeviceCallback.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140905E3C (PnpGetDeviceInstanceRegistryValue.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1409C636C (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x1409C63FC (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CA088 (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x1409CA3F8 (PiInitCacheGroupInformation.c)
 *     IopInitializeSystemDrivers @ 0x1409CACC4 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1409CAF08 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x1409CBF98 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1409CC0A0 (PipCheckDependencies.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD85C (IopVerifierExAllocatePool_0.c)
 *     ZwQueryValueKey @ 0x1401B8470 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
