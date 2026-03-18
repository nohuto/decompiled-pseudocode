/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1400EC910
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1402B6DF8 (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14033EFD8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140347E54 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14034820C (AdtpFormatPrefix.c)
 *     RtlpGetRegistryHandle @ 0x1405C38F8 (RtlpGetRegistryHandle.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     CmpNameFromAttributes @ 0x14063D5C0 (CmpNameFromAttributes.c)
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14068B714 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14068BA6C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpQueryNameString @ 0x14068BC28 (CmpQueryNameString.c)
 *     CmpStartCLFSLog @ 0x1406BC550 (CmpStartCLFSLog.c)
 *     IopSymlinkRememberJunction @ 0x1406CD7AC (IopSymlinkRememberJunction.c)
 *     CmRealKCBToVirtualPath @ 0x1406F6DEC (CmRealKCBToVirtualPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14070B658 (IopGetDriverNameFromKeyNode.c)
 *     IopBootLog @ 0x14070B7F0 (IopBootLog.c)
 *     IopBuildFullDriverPath @ 0x14070F3E0 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070F670 (IopQueryRegistryKeySystemPath.c)
 *     MiGenerateSystemImageNames @ 0x140710164 (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 *     pIoQueryDeviceDescription @ 0x14074447C (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x1407448F0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140744A00 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x1407460F0 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PopCreateHiberFile @ 0x14075A430 (PopCreateHiberFile.c)
 *     AslRegistryBuildMachinePath @ 0x140775CE8 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140775D9C (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x14082B9DC (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x140846F5C (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140853E20 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x140854DCC (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140861FC8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140878F64 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140879CE0 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A094 (PiDrvDbSetupNodeHive.c)
 *     PopDeleteHiberFile @ 0x1408A7724 (PopDeleteHiberFile.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C56C4 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1408D23A0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 *     SdbResolveDatabaseEx @ 0x140924660 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x14092CE10 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14092D11C (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x14092D384 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x14092D58C (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14092DC48 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14092DCE4 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093DD88 (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409442CC (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140A0B5C0 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A121A8 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140A13070 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3ABE4 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned __int16 Length; // si
  unsigned __int64 v4; // rcx
  wchar_t *v5; // r14

  Length = Source->Length;
  if ( !Source->Length )
    return 0;
  v4 = Destination->Length;
  if ( (unsigned int)v4 + Length <= Destination->MaximumLength )
  {
    v5 = &Destination->Buffer[v4 >> 1];
    memmove(v5, Source->Buffer, Length);
    Destination->Length += Length;
    if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
      v5[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
