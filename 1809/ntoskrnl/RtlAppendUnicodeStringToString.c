/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1400F5250
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14029FE78 (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326DC8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140327180 (AdtpFormatPrefix.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     CmpNameFromAttributes @ 0x1405B8860 (CmpNameFromAttributes.c)
 *     RtlpGetRegistryHandle @ 0x1405C8774 (RtlpGetRegistryHandle.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     IopQueryRegistryKeySystemPath @ 0x140681304 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x1406817DC (IopBuildFullDriverPath.c)
 *     MiGenerateSystemImageNames @ 0x140682C2C (MiGenerateSystemImageNames.c)
 *     CmpQueryNameString @ 0x140684814 (CmpQueryNameString.c)
 *     IopSymlinkRememberJunction @ 0x1406AD0F8 (IopSymlinkRememberJunction.c)
 *     IopBootLog @ 0x1406D04D4 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140707308 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140707814 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14070FA2C (CmpStartCLFSLog.c)
 *     pIoQueryDeviceDescription @ 0x14071A2B0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14071A720 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14071A834 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x14071C99C (MmCallDllInitialize.c)
 *     AslRegistryBuildMachinePath @ 0x14072479C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140724850 (AslRegistryBuildUserPath.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     IoReportRootDevice @ 0x140759DE0 (IoReportRootDevice.c)
 *     CmRealKCBToVirtualPath @ 0x1407F31A8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14080F1DC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14081B9D0 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x14081C8BC (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408295DC (PnpQueryRemoveLockedDeviceNode.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408400C8 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x140840358 (PiDrvDbSetupNodeHive.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140888C7C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140895DF0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 *     SdbResolveDatabaseEx @ 0x1408E9770 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x1408F09E8 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1408F0D0C (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x1408F0F78 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1408F17F0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F188C (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409074D8 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x1409C2534 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CD4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x1409CE9F8 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F684C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
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
