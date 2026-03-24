/*
 * XREFs of _wcsnicmp @ 0x140195A70
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1402892EC (PiDevCfgMatchDriverConfigurationId.c)
 *     PopDiagAreIdenticalWakeSources @ 0x1402DF568 (PopDiagAreIdenticalWakeSources.c)
 *     EtwpApplyContainerFilter @ 0x140583694 (EtwpApplyContainerFilter.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A4690 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1405B38C0 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x140681BE4 (MiDriverLoadSucceeded.c)
 *     LocalGetAclForString @ 0x1406AFC8C (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x1406B0214 (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x1406B03A0 (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x1406B04DC (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x1406B06FC (FContainCallBackAce.c)
 *     LocalGetSDControlForString @ 0x1406B0820 (LocalGetSDControlForString.c)
 *     PiSwIrpCleanup @ 0x1406D8A48 (PiSwIrpCleanup.c)
 *     PiSwFindSwDevice @ 0x1406ED34C (PiSwFindSwDevice.c)
 *     BiCleanupLoadedStores @ 0x1407116B0 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140712C04 (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x1407143BC (BiCreatePartitionDevice.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14071D9F8 (WmipGetGuidObjectInstanceInfo.c)
 *     SdbpResolveMatchingFile @ 0x140721A74 (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x140721E70 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x140722234 (AslEnvVarQuery.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140757DA0 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     CmpPreserveSystemHiveData @ 0x1407FDCC4 (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x14080E0D4 (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x140819810 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x14081DADC (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D7E8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14083EE68 (PiDrvDbResolveSystemFilePath.c)
 *     punycode_decode @ 0x140896F7C (punycode_decode.c)
 *     punycode_encode @ 0x1408975F0 (punycode_encode.c)
 *     LookupAceFlagsInTable @ 0x1408A6398 (LookupAceFlagsInTable.c)
 *     GetAttributeName @ 0x1408A7370 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408A7838 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408A7E5C (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1408A8A0C (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1408AA8D0 (LocalpGetStringForCondition.c)
 *     EtwpApplyExeFilter @ 0x1408C1B40 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C1CBC (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D5BC0 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x1408E7C30 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x1408E9F1C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x1408EBB38 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x1408F1780 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x1408F59DC (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x1409F39C0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
