/*
 * XREFs of RtlAppendUnicodeToString @ 0x140002BC0
 * Callers:
 *     LdrpGetResourceFileName @ 0x14017FB10 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x1402B7098 (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14033F578 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034793C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1403483F4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1403487AC (AdtpFormatPrefix.c)
 *     RtlpGetRegistryHandle @ 0x1405C3428 (RtlpGetRegistryHandle.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1406676F0 (RtlFormatCurrentUserKeyPath.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1406981A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopSymlinkRememberJunction @ 0x1406CEA0C (IopSymlinkRememberJunction.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406E97F4 (CmpQueryHiveRedirectionFileList.c)
 *     CmRealKCBToVirtualPath @ 0x1406F507C (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1406F5290 (CmpGetVirtualizationID.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140731F98 (IopBuildGlobalSymbolicLinkString.c)
 *     pIoQueryDeviceDescription @ 0x14074257C (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140742B00 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x1407441F0 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceList @ 0x1407525C0 (PnpBuildCmResourceList.c)
 *     PiDrvDbCreateNode @ 0x1407565AC (PiDrvDbCreateNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 *     CmpInitializeSystemHivesLoad @ 0x14076AB90 (CmpInitializeSystemHivesLoad.c)
 *     AslRegistryBuildMachinePath @ 0x140772708 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407727BC (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x14077EA20 (IoReportRootDevice.c)
 *     CmpFlushBackupHive @ 0x14083126C (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x140845104 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x140847854 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140854720 (IopSafebootDriverLoad.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A994 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D2CBC (RtlpGetTokenNamedObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1408EF910 (IoWMISuggestInstanceName.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1409194EC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x14091B408 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x140924C00 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x140928A68 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x14092D39C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14092D6A8 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x14092DB18 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14092E1D4 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14092E270 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14092EE3C (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x140A0B094 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140A0D63C (CmpInitializePreloadedHive.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A11A10 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140A128D8 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3AE14 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
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
