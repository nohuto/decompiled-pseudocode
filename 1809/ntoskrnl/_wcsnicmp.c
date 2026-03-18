/*
 * XREFs of _wcsnicmp @ 0x140195A50
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1402891EC (PiDevCfgMatchDriverConfigurationId.c)
 *     PopDiagAreIdenticalWakeSources @ 0x1402DF468 (PopDiagAreIdenticalWakeSources.c)
 *     EtwpApplyContainerFilter @ 0x140583694 (EtwpApplyContainerFilter.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A4690 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1405B38C0 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x140681C04 (MiDriverLoadSucceeded.c)
 *     LocalGetAclForString @ 0x1406AFCAC (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x1406B0234 (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x1406B03C0 (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x1406B04FC (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x1406B071C (FContainCallBackAce.c)
 *     LocalGetSDControlForString @ 0x1406B0840 (LocalGetSDControlForString.c)
 *     PiSwIrpCleanup @ 0x1406D8A68 (PiSwIrpCleanup.c)
 *     PiSwFindSwDevice @ 0x1406ED36C (PiSwFindSwDevice.c)
 *     BiCleanupLoadedStores @ 0x1407116D0 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140712C24 (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x1407143DC (BiCreatePartitionDevice.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14071DA18 (WmipGetGuidObjectInstanceInfo.c)
 *     SdbpResolveMatchingFile @ 0x140721A94 (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x140721E90 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x140722254 (AslEnvVarQuery.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140757DC0 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     CmpPreserveSystemHiveData @ 0x1407FDCE4 (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x14080E0F4 (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x140819830 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x14081DAFC (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D808 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14083EE88 (PiDrvDbResolveSystemFilePath.c)
 *     punycode_decode @ 0x140896F9C (punycode_decode.c)
 *     punycode_encode @ 0x140897610 (punycode_encode.c)
 *     LookupAceFlagsInTable @ 0x1408A63B8 (LookupAceFlagsInTable.c)
 *     GetAttributeName @ 0x1408A7390 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408A7858 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408A7E7C (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1408A8A2C (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1408AA8F0 (LocalpGetStringForCondition.c)
 *     EtwpApplyExeFilter @ 0x1408C1B60 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C1CDC (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D5BE0 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x1408E7C50 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x1408E9F3C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x1408EBB58 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x1408F17A0 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x1408F59FC (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x1409F39B8 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
