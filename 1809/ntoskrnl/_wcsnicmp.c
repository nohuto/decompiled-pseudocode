/*
 * XREFs of _wcsnicmp @ 0x140195BB0
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1402894DC (PiDevCfgMatchDriverConfigurationId.c)
 *     PopDiagAreIdenticalWakeSources @ 0x1402DF758 (PopDiagAreIdenticalWakeSources.c)
 *     EtwpApplyContainerFilter @ 0x140584694 (EtwpApplyContainerFilter.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A5690 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1405B48C0 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x1406B14B4 (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x1406B1640 (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x1406B177C (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x1406B199C (FContainCallBackAce.c)
 *     LocalGetSDControlForString @ 0x1406B1AC0 (LocalGetSDControlForString.c)
 *     PiSwIrpCleanup @ 0x1406D9CE8 (PiSwIrpCleanup.c)
 *     PiSwFindSwDevice @ 0x1406EE5EC (PiSwFindSwDevice.c)
 *     BiCleanupLoadedStores @ 0x140712950 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x14071565C (BiCreatePartitionDevice.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14071EC98 (WmipGetGuidObjectInstanceInfo.c)
 *     SdbpResolveMatchingFile @ 0x140722D14 (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x140723110 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x1407234D4 (AslEnvVarQuery.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140758F90 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     CmpPreserveSystemHiveData @ 0x1407FEEC4 (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x14080F2D4 (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x14081AA10 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x14081ECDC (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408400C8 (PiDrvDbResolveSystemFilePath.c)
 *     punycode_decode @ 0x1408981DC (punycode_decode.c)
 *     punycode_encode @ 0x140898850 (punycode_encode.c)
 *     LookupAceFlagsInTable @ 0x1408A75F8 (LookupAceFlagsInTable.c)
 *     GetAttributeName @ 0x1408A85D0 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408A8A98 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408A90BC (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1408A9C6C (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1408ABB30 (LocalpGetStringForCondition.c)
 *     EtwpApplyExeFilter @ 0x1408C2E00 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C2F7C (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D6E80 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x1408E8EF0 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x1408EB1DC (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x1408ECDF8 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x1408F2A40 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x1408F6C9C (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x1409F49C0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
