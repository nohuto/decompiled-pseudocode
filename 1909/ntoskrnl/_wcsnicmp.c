/*
 * XREFs of _wcsnicmp @ 0x1401A0960
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14029F25C (PiDevCfgMatchDriverConfigurationId.c)
 *     PopDiagAreIdenticalWakeSources @ 0x1402FC0F8 (PopDiagAreIdenticalWakeSources.c)
 *     EtwpApplyContainerFilter @ 0x1405B225C (EtwpApplyContainerFilter.c)
 *     LookupAceFlagsInTable @ 0x1405B3344 (LookupAceFlagsInTable.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140690460 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406D5298 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     LookupSidInTable @ 0x1406DD454 (LookupSidInTable.c)
 *     LookupAccessMaskInTable @ 0x1406DEC64 (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1406EB850 (LookupAceTypeInTable.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406F4234 (_RegRtlCreateTreeTransacted.c)
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x1406FAB54 (FContainCallBackAce.c)
 *     LocalGetSDControlForString @ 0x1406FAC78 (LocalGetSDControlForString.c)
 *     MiDriverLoadSucceeded @ 0x1407102DC (MiDriverLoadSucceeded.c)
 *     WmipPrepareWnodeSI @ 0x140713800 (WmipPrepareWnodeSI.c)
 *     PiSwFindSwDevice @ 0x1407330E4 (PiSwFindSwDevice.c)
 *     BiCleanupLoadedStores @ 0x14073D6DC (BiCleanupLoadedStores.c)
 *     BiIsValidDiskDevice @ 0x14073E170 (BiIsValidDiskDevice.c)
 *     BiOpenSystemStore @ 0x14073EE6C (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x1407406CC (BiCreatePartitionDevice.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140748070 (WmipGetGuidObjectInstanceInfo.c)
 *     SdbpResolveMatchingFile @ 0x14074C5C4 (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x14074C9A8 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x14074CD5C (AslEnvVarQuery.c)
 *     PiSwIrpCleanup @ 0x14074DE7C (PiSwIrpCleanup.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1407809A8 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     CmpPreserveSystemHiveData @ 0x140836764 (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x14084702C (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x14085317C (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140857124 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14087833C (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1408D509C (punycode_decode.c)
 *     punycode_encode @ 0x1408D5710 (punycode_encode.c)
 *     GetAttributeName @ 0x1408E3FF0 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408E44C0 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408E4ABC (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1408E55DC (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1408E73A8 (LocalpGetStringForCondition.c)
 *     EtwpApplyExeFilter @ 0x1408FE6D4 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1408FE7F0 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140912EF0 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x140923E10 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x14092676C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x1409282F0 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x14092EE84 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140933100 (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A38B84 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = Str2;
  if ( MaxCount )
  {
    v6 = (char *)Str1 - (char *)Str2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
