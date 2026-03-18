/*
 * XREFs of IopGetRegistryValue @ 0x1406DA724
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140189844 (IopInitializeOfflineCrashDump.c)
 *     PnpBootDeviceWait @ 0x14018E280 (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x140193A50 (IopReadDumpRegistry.c)
 *     PipDmaGuardGetRegistryPolicy @ 0x140195250 (PipDmaGuardGetRegistryPolicy.c)
 *     SecureDump_ReadRegistry @ 0x14019BCA4 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x14019D53C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x14029BD98 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x14029F540 (PiDevCfgQueryResolveValue.c)
 *     NtEnableLastKnownGood @ 0x1406DA230 (NtEnableLastKnownGood.c)
 *     PiDevCfgBuildIndirectString @ 0x1406FE698 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x1406FFC38 (PiDevCfgResolveVariable.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x14070B658 (IopGetDriverNameFromKeyNode.c)
 *     PnpPrepareDriverLoading @ 0x14070BAC8 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x14070F3E0 (IopBuildFullDriverPath.c)
 *     PiDevCfgMigrateDevice @ 0x14071D64C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071E970 (PiDevCfgResolveVariableDeviceProperty.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407243B4 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140725050 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14072D1A0 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgVerifyService @ 0x14072E390 (PiDevCfgVerifyService.c)
 *     PiFindDevInstMatch @ 0x14073628C (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140736494 (PiRearrangeDeviceInstances.c)
 *     PipCheckForDenyExecute @ 0x1407379A8 (PipCheckForDenyExecute.c)
 *     IopGetRegistryValues @ 0x140744D60 (IopGetRegistryValues.c)
 *     IopIsReportedAlready @ 0x140751DE8 (IopIsReportedAlready.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140778910 (PnpCheckPossibleBootStartDriver.c)
 *     PnpReadDeviceConfiguration @ 0x1407793B0 (PnpReadDeviceConfiguration.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077D2B4 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x14077F430 (IoOpenDriverRegistryKey.c)
 *     PipUpdateSetupInProgress @ 0x14078B0A8 (PipUpdateSetupInProgress.c)
 *     PnpDriverLoadingFailed @ 0x14078B434 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140853E20 (IopSafebootDriverLoad.c)
 *     PiGetDeviceRegistryProperty @ 0x14085E268 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140861170 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x140863760 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408665C0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408675A0 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408677E4 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140867F88 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140868418 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14086848C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x140868E30 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x140868F00 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14086A1E0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14086A820 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086A900 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14086B0D0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14086B2B0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408793C4 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140943EDC (PnpGetDeviceInstanceRegistryValue.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409F6D98 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140A109A8 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140A114E0 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140A115EC (PipCheckDependencies.c)
 *     PipGetDriverTagPriority @ 0x140A11644 (PipGetDriverTagPriority.c)
 *     PiInitCacheGroupInformation @ 0x140A1765C (PiInitCacheGroupInformation.c)
 *     PipHardwareConfigInit @ 0x140A1C474 (PipHardwareConfigInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A227A4 (IopQueryDeviceResetRegistrySettings.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
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
