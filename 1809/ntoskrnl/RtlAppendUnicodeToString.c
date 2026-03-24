/*
 * XREFs of RtlAppendUnicodeToString @ 0x140015E00
 * Callers:
 *     LdrpGetResourceFileName @ 0x1401779C0 (LdrpGetResourceFileName.c)
 *     QueryFeatureOverride @ 0x1401B37B4 (QueryFeatureOverride.c)
 *     KsepEvntLogShimsApplied @ 0x14029FC88 (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326154 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326BD8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140326F90 (AdtpFormatPrefix.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14065A5A0 (RtlFormatCurrentUserKeyPath.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680340 (IopGetDriverNameFromKeyNode.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE58 (IopSymlinkRememberJunction.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406C8EC4 (CmpQueryHiveRedirectionFileList.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706068 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14070FDCC (IopBuildGlobalSymbolicLinkString.c)
 *     pIoQueryDeviceDescription @ 0x140719010 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140719594 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x14071B6FC (MmCallDllInitialize.c)
 *     AslRegistryBuildMachinePath @ 0x1407234FC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407235B0 (AslRegistryBuildUserPath.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceList @ 0x14072E7C0 (PnpBuildCmResourceList.c)
 *     CmpFinishSystemHivesLoad @ 0x140732580 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407357E0 (CmpMountPreloadedHives.c)
 *     PiDrvDbCreateNode @ 0x14073AB48 (PiDrvDbCreateNode.c)
 *     CmpInitializeSystemHivesLoad @ 0x140756824 (CmpInitializeSystemHivesLoad.c)
 *     IoReportRootDevice @ 0x140758BF0 (IoReportRootDevice.c)
 *     CmRealKCBToVirtualPath @ 0x1407F1FA8 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1407F3544 (CmpGetVirtualizationID.c)
 *     CmpFlushBackupHive @ 0x1407F4050 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14080B764 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14080DFDC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14081A7D0 (IopSafebootDriverLoad.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14083EE68 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14083F0F8 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DAC (RtlpGetTokenNamedObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1408B2430 (IoWMISuggestInstanceName.c)
 *     ExpValidateLocale @ 0x1408CCDF8 (ExpValidateLocale.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DB730 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x1408DD6E4 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x1408E84B0 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x1408EBD04 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x1408EF728 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1408EFA4C (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x1408EFEAC (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1408F0530 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F05CC (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x1408F11C0 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x1409C3CAC (CmpInitializePreloadedHive.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CC4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x1409CD9F8 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F584C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x1401D1540 (memmove.c)
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
