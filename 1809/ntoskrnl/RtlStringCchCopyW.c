/*
 * XREFs of RtlStringCchCopyW @ 0x140092360
 * Callers:
 *     PopLogNotifyDevice @ 0x1402DE85C (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x140324070 (SdbpGetPathAppPatchPreRS3.c)
 *     AslStringDuplicate @ 0x14067D684 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14067D760 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x14067F7B8 (AslPathSplit.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EB90C (_CmGetDeviceContainerIdFromBase.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1406F1394 (PnpNotifyUserModeDeviceRemoval.c)
 *     WmipMangleInstanceName @ 0x1407096A0 (WmipMangleInstanceName.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     AslpFileQueryVersionString @ 0x140720CA4 (AslpFileQueryVersionString.c)
 *     AslpEnvResolveVars @ 0x140723110 (AslpEnvResolveVars.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074BA40 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14074BD90 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074C070 (_CmDeviceClassesSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x140757D74 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14086A8F0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x14087E220 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x14087F4A0 (TtmpPublishDeviceEvent.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E7428 (SdbpCheckMatchingRegistryValue.c)
 *     AslPathCombine @ 0x1408EB4D4 (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x1408EB7A8 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1408ED134 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1408ED390 (AslEnvGetSystem32DirPathBuf.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409033E0 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x1409D72F4 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax
  NTSTRSAFE_PWSTR v7; // rax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    if ( cchDest )
    {
      v4 = 2147483646 - cchDest;
      v5 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v4 + cchDest) )
          break;
        v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
        if ( !v6 )
          break;
        *pszDest++ = v6;
        --cchDest;
      }
      while ( cchDest );
    }
    v7 = pszDest - 1;
    if ( cchDest )
      v7 = pszDest;
    v3 = cchDest == 0 ? 0x80000005 : 0;
    *v7 = 0;
  }
  return v3;
}
