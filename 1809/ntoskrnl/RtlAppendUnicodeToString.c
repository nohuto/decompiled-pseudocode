/*
 * XREFs of RtlAppendUnicodeToString @ 0x140015E00
 * Callers:
 *     LdrpGetResourceFileName @ 0x1401779A0 (LdrpGetResourceFileName.c)
 *     QueryFeatureOverride @ 0x1401B3794 (QueryFeatureOverride.c)
 *     KsepEvntLogShimsApplied @ 0x14029FB88 (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326054 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326AD8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140326E90 (AdtpFormatPrefix.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14065A5C0 (RtlFormatCurrentUserKeyPath.c)
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680360 (IopGetDriverNameFromKeyNode.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE78 (IopSymlinkRememberJunction.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406C8EE4 (CmpQueryHiveRedirectionFileList.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706088 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14070FDEC (IopBuildGlobalSymbolicLinkString.c)
 *     pIoQueryDeviceDescription @ 0x140719030 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407195B4 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x14071B71C (MmCallDllInitialize.c)
 *     AslRegistryBuildMachinePath @ 0x14072351C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407235D0 (AslRegistryBuildUserPath.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceList @ 0x14072E7E0 (PnpBuildCmResourceList.c)
 *     CmpFinishSystemHivesLoad @ 0x1407325A0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     PiDrvDbCreateNode @ 0x14073AB68 (PiDrvDbCreateNode.c)
 *     CmpInitializeSystemHivesLoad @ 0x140756844 (CmpInitializeSystemHivesLoad.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 *     CmRealKCBToVirtualPath @ 0x1407F1FC8 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1407F3564 (CmpGetVirtualizationID.c)
 *     CmpFlushBackupHive @ 0x1407F4070 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14080B784 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14080DFFC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14081A7F0 (IopSafebootDriverLoad.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14083EE88 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14083F118 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DCC (RtlpGetTokenNamedObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1408B2450 (IoWMISuggestInstanceName.c)
 *     ExpValidateLocale @ 0x1408CCE18 (ExpValidateLocale.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DB750 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x1408DD704 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x1408E84D0 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x1408EBD24 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x1408EF748 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1408EFA6C (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x1408EFECC (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1408F0550 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F05EC (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x1408F11E0 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x1409C3CAC (CmpInitializePreloadedHive.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CC4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x1409CD9F8 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F583C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int16 Length; // bp
  wchar_t *v5; // r14
  UNICODE_STRING v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !Source )
    return 0;
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
