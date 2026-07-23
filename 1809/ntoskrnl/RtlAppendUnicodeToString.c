/*
 * XREFs of RtlAppendUnicodeToString @ 0x140015E00
 * Callers:
 *     LdrpGetResourceFileName @ 0x140177AC0 (LdrpGetResourceFileName.c)
 *     QueryFeatureOverride @ 0x1401B4090 (QueryFeatureOverride.c)
 *     KsepEvntLogShimsApplied @ 0x14029FE78 (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326DC8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140327180 (AdtpFormatPrefix.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     RtlpGetRegistryHandle @ 0x1405C8774 (RtlpGetRegistryHandle.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14065B760 (RtlFormatCurrentUserKeyPath.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     IopSymlinkRememberJunction @ 0x1406AD0F8 (IopSymlinkRememberJunction.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406CA164 (CmpQueryHiveRedirectionFileList.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140707308 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14071106C (IopBuildGlobalSymbolicLinkString.c)
 *     pIoQueryDeviceDescription @ 0x14071A2B0 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14071A834 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x14071C99C (MmCallDllInitialize.c)
 *     AslRegistryBuildMachinePath @ 0x14072479C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140724850 (AslRegistryBuildUserPath.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceList @ 0x14072F9B0 (PnpBuildCmResourceList.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     PiDrvDbCreateNode @ 0x14073BD38 (PiDrvDbCreateNode.c)
 *     CmpInitializeSystemHivesLoad @ 0x140757A14 (CmpInitializeSystemHivesLoad.c)
 *     IoReportRootDevice @ 0x140759DE0 (IoReportRootDevice.c)
 *     CmRealKCBToVirtualPath @ 0x1407F31A8 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1407F4744 (CmpGetVirtualizationID.c)
 *     CmpFlushBackupHive @ 0x1407F5250 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14080F1DC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14081B9D0 (IopSafebootDriverLoad.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408400C8 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x140840358 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1408B3690 (IoWMISuggestInstanceName.c)
 *     ExpValidateLocale @ 0x1408CE0B8 (ExpValidateLocale.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DC9F0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x1408DE9A4 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x1408E9770 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x1408ECFC4 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x1408F09E8 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1408F0D0C (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1408F17F0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F188C (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x1408F2480 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x1409C2534 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x1409C4CAC (CmpInitializePreloadedHive.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CD4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x1409CE9F8 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F684C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
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
