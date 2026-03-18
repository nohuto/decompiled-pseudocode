/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1400E7910
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1402B7098 (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14033F578 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034793C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1403483F4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1403487AC (AdtpFormatPrefix.c)
 *     RtlpGetRegistryHandle @ 0x1405C3428 (RtlpGetRegistryHandle.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     CmpNameFromAttributes @ 0x14063A530 (CmpNameFromAttributes.c)
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1406981A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406984FC (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpQueryNameString @ 0x1406986B8 (CmpQueryNameString.c)
 *     CmpStartCLFSLog @ 0x140698B48 (CmpStartCLFSLog.c)
 *     IopSymlinkRememberJunction @ 0x1406CEA0C (IopSymlinkRememberJunction.c)
 *     CmRealKCBToVirtualPath @ 0x1406F507C (CmRealKCBToVirtualPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     IopBootLog @ 0x140709A10 (IopBootLog.c)
 *     IopBuildFullDriverPath @ 0x14070D600 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070D890 (IopQueryRegistryKeySystemPath.c)
 *     MiGenerateSystemImageNames @ 0x14070E384 (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 *     pIoQueryDeviceDescription @ 0x14074257C (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x1407429F0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140742B00 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x1407441F0 (MmCallDllInitialize.c)
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x140772708 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407727BC (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x14077EA20 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x14082C2DC (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x140845104 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x140847854 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140854720 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x1408556CC (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408628C8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140879864 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14087A5E0 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A994 (PiDrvDbSetupNodeHive.c)
 *     PopDeleteHiberFile @ 0x1408A7EC4 (PopDeleteHiberFile.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C5DE4 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1408D2AA0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D2CBC (RtlpGetTokenNamedObjectPath.c)
 *     SdbResolveDatabaseEx @ 0x140924C00 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x14092D39C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14092D6A8 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x14092D910 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x14092DB18 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14092E1D4 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14092E270 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093E318 (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x14094485C (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140A0B094 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A11A10 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140A128D8 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3AE14 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
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
