/*
 * XREFs of _wcsnicmp @ 0x1401A0240
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14029F4FC (PiDevCfgMatchDriverConfigurationId.c)
 *     PopDiagAreIdenticalWakeSources @ 0x1402FC648 (PopDiagAreIdenticalWakeSources.c)
 *     EtwpApplyContainerFilter @ 0x1405B1EEC (EtwpApplyContainerFilter.c)
 *     LookupAceFlagsInTable @ 0x1405B2F68 (LookupAceFlagsInTable.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406617B0 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406D5A64 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     LookupSidInTable @ 0x1406DC7D4 (LookupSidInTable.c)
 *     LookupAccessMaskInTable @ 0x1406DD874 (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1406EA660 (LookupAceTypeInTable.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406F2794 (_RegRtlCreateTreeTransacted.c)
 *     LocalGetAclForString @ 0x1406F85C8 (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x1406F8D78 (FContainCallBackAce.c)
 *     LocalGetSDControlForString @ 0x1406F8E9C (LocalGetSDControlForString.c)
 *     MiDriverLoadSucceeded @ 0x14070E4FC (MiDriverLoadSucceeded.c)
 *     WmipPrepareWnodeSI @ 0x140711A20 (WmipPrepareWnodeSI.c)
 *     PiSwFindSwDevice @ 0x140730E84 (PiSwFindSwDevice.c)
 *     BiCleanupLoadedStores @ 0x14073B7DC (BiCleanupLoadedStores.c)
 *     BiIsValidDiskDevice @ 0x14073C270 (BiIsValidDiskDevice.c)
 *     BiOpenSystemStore @ 0x14073CF6C (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x14073E7CC (BiCreatePartitionDevice.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140746170 (WmipGetGuidObjectInstanceInfo.c)
 *     SdbpResolveMatchingFile @ 0x14074BB34 (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x14074BF18 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x14074C2CC (AslEnvVarQuery.c)
 *     PiSwIrpCleanup @ 0x14074D3EC (PiSwIrpCleanup.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14077DF88 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     CmpPreserveSystemHiveData @ 0x140837104 (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x140847924 (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x140853A7C (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140857A24 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140878C3C (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1408D579C (punycode_decode.c)
 *     punycode_encode @ 0x1408D5E10 (punycode_encode.c)
 *     GetAttributeName @ 0x1408E46E8 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408E4BB8 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408E51B4 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1408E5CD4 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1408E7AA0 (LocalpGetStringForCondition.c)
 *     EtwpApplyExeFilter @ 0x1408FED80 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1408FEE9C (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140913490 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x1409243B0 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x140926D0C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140928890 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x14092F410 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x14093368C (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A38E04 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
