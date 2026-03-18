/*
 * XREFs of IopGetRegistryValue @ 0x1406804F4
 * Callers:
 *     PipDmaGuardGetRegistryPolicy @ 0x14016AB9C (PipDmaGuardGetRegistryPolicy.c)
 *     IopInitializeOfflineCrashDump @ 0x140180C60 (IopInitializeOfflineCrashDump.c)
 *     PnpBootDeviceWait @ 0x1401823CC (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x1401885F4 (IopReadDumpRegistry.c)
 *     SecureDump_ReadRegistry @ 0x140191560 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x140192B3C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140284D84 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x1402894BC (PiDevCfgQueryResolveValue.c)
 *     PnpPrepareDriverLoading @ 0x14067F038 (PnpPrepareDriverLoading.c)
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680360 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14068063C (IopBuildFullDriverPath.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA66C (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CF4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x1406F341C (PiDevCfgResolveVariable.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F5774 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DD0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FB8C0 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FE69C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgMigrateDevice @ 0x140700D30 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgVerifyService @ 0x1407051F8 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140705840 (PiDevCfgResolveMultiSzValue.c)
 *     NtEnableLastKnownGood @ 0x140705C60 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x140706130 (PiRearrangeDeviceInstances.c)
 *     PiFindDevInstMatch @ 0x1407097AC (PiFindDevInstMatch.c)
 *     PipCheckForDenyExecute @ 0x140709F70 (PipCheckForDenyExecute.c)
 *     IopGetRegistryValues @ 0x140719910 (IopGetRegistryValues.c)
 *     IopIsReportedAlready @ 0x14072D6E8 (IopIsReportedAlready.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     PnpReadDeviceConfiguration @ 0x140750AA8 (PnpReadDeviceConfiguration.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140750D80 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x140754F14 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x140756F40 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x1407630D0 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x14081A7F0 (IopSafebootDriverLoad.c)
 *     PiGetDeviceRegistryProperty @ 0x140824738 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408276D0 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x140829930 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C68C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14082D670 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14082D8AC (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E028 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14082E4B8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082E52C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14082EE80 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF50 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140830120 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140830760 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830840 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140831010 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408311F0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PnpUpdateSetupInProgressConfiguration @ 0x140832CB4 (PnpUpdateSetupInProgressConfiguration.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5DC (PiDrvDbResolveFilePathKeyValues.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BC0 (PiCreateDriverSwDeviceCallback.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140905E5C (PnpGetDeviceInstanceRegistryValue.c)
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
 *     IopVerifierExAllocatePool_0 @ 0x1400DD83C (IopVerifierExAllocatePool_0.c)
 *     ZwQueryValueKey @ 0x1401B8450 (ZwQueryValueKey.c)
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
