/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1400F51B0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14029FB88 (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326054 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326AD8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140326E90 (AdtpFormatPrefix.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     CmpNameFromAttributes @ 0x1405B7860 (CmpNameFromAttributes.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 *     MiResolveImageReferences @ 0x140678FD0 (MiResolveImageReferences.c)
 *     CmpInitCmRM @ 0x14067F308 (CmpInitCmRM.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680164 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680360 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14068063C (IopBuildFullDriverPath.c)
 *     MiGenerateSystemImageNames @ 0x140681A8C (MiGenerateSystemImageNames.c)
 *     CmpQueryNameString @ 0x140683674 (CmpQueryNameString.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE78 (IopSymlinkRememberJunction.c)
 *     IopBootLog @ 0x1406CF254 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706088 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706594 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14070E7AC (CmpStartCLFSLog.c)
 *     pIoQueryDeviceDescription @ 0x140719030 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x1407194A0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407195B4 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x14071B71C (MmCallDllInitialize.c)
 *     AslRegistryBuildMachinePath @ 0x14072351C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407235D0 (AslRegistryBuildUserPath.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PopCreateHiberFile @ 0x140746730 (PopCreateHiberFile.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 *     CmRealKCBToVirtualPath @ 0x1407F1FC8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1407F21C0 (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14080B784 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14080DFFC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14081A7F0 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x14081B6DC (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408283FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14083EE88 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14083F118 (PiDrvDbSetupNodeHive.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A3C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140894BB0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DCC (RtlpGetTokenNamedObjectPath.c)
 *     SdbResolveDatabaseEx @ 0x1408E84D0 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x1408EF748 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1408EFA6C (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x1408EFCD8 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1408EFECC (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1408F0550 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F05EC (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF48 (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906238 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CC4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x1409CD9F8 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F583C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
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
