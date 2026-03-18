/*
 * XREFs of RtlAppendUnicodeToString @ 0x140002BC0
 * Callers:
 *     LdrpGetResourceFileName @ 0x140180200 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x1402B6DF8 (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14033EFD8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140347E54 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14034820C (AdtpFormatPrefix.c)
 *     RtlpGetRegistryHandle @ 0x1405C38F8 (RtlpGetRegistryHandle.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14068B714 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14068BE4C (CmpQueryHiveRedirectionFileList.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140694B10 (RtlFormatCurrentUserKeyPath.c)
 *     IopSymlinkRememberJunction @ 0x1406CD7AC (IopSymlinkRememberJunction.c)
 *     CmRealKCBToVirtualPath @ 0x1406F6DEC (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1406F7000 (CmpGetVirtualizationID.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x14070B658 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407341F8 (IopBuildGlobalSymbolicLinkString.c)
 *     pIoQueryDeviceDescription @ 0x14074447C (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140744A00 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x1407460F0 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceList @ 0x140753050 (PnpBuildCmResourceList.c)
 *     PiDrvDbCreateNode @ 0x14075703C (PiDrvDbCreateNode.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407586EC (CmpInitializeSystemHivesLoad.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 *     AslRegistryBuildMachinePath @ 0x140775CE8 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140775D9C (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x140846F5C (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140853E20 (IopSafebootDriverLoad.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A094 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1408EF220 (IoWMISuggestInstanceName.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140918F4C (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x14091AE68 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x140924660 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x1409284C8 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x14092CE10 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14092D11C (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x14092D58C (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14092DC48 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14092DCE4 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14092E8B0 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x140A0B5C0 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140A0DDBC (CmpInitializePreloadedHive.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A121A8 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140A13070 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3ABE4 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int16 Length; // bp
  wchar_t *v5; // r14
  UNICODE_STRING v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !Source )
    return 0;
  *(_QWORD *)&v7.Length = 0LL;
  v7.Buffer = 0LL;
  if ( RtlInitUnicodeStringEx(&v7, Source) >= 0 )
  {
    Length = v7.Length;
    if ( Destination->Length + (unsigned int)v7.Length <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, v7.Length);
      Destination->Length += Length;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)Length >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
