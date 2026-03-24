/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1400F51D0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14029FC88 (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326154 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326BD8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140326F90 (AdtpFormatPrefix.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     CmpNameFromAttributes @ 0x1405B7860 (CmpNameFromAttributes.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 *     MiResolveImageReferences @ 0x140678FB0 (MiResolveImageReferences.c)
 *     CmpInitCmRM @ 0x14067F2E8 (CmpInitCmRM.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680144 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680340 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14068061C (IopBuildFullDriverPath.c)
 *     MiGenerateSystemImageNames @ 0x140681A6C (MiGenerateSystemImageNames.c)
 *     CmpQueryNameString @ 0x140683654 (CmpQueryNameString.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE58 (IopSymlinkRememberJunction.c)
 *     IopBootLog @ 0x1406CF234 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706068 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706574 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14070E78C (CmpStartCLFSLog.c)
 *     pIoQueryDeviceDescription @ 0x140719010 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140719480 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140719594 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x14071B6FC (MmCallDllInitialize.c)
 *     AslRegistryBuildMachinePath @ 0x1407234FC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407235B0 (AslRegistryBuildUserPath.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PopCreateHiberFile @ 0x140746710 (PopCreateHiberFile.c)
 *     IoReportRootDevice @ 0x140758BF0 (IoReportRootDevice.c)
 *     CmRealKCBToVirtualPath @ 0x1407F1FA8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1407F21A0 (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14080B764 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14080DFDC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14081A7D0 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x14081B6BC (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408283DC (PnpQueryRemoveLockedDeviceNode.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14083EE68 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14083F0F8 (PiDrvDbSetupNodeHive.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A1C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140894B90 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DAC (RtlpGetTokenNamedObjectPath.c)
 *     SdbResolveDatabaseEx @ 0x1408E84B0 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x1408EF728 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1408EFA4C (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x1408EFCB8 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1408EFEAC (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1408F0530 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F05CC (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF28 (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906218 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CC4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x1409CD9F8 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F584C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
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
