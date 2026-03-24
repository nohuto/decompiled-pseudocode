/*
 * XREFs of RtlStringCchCopyW @ 0x140092420
 * Callers:
 *     PopLogNotifyDevice @ 0x1402DE66C (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x140323E80 (SdbpGetPathAppPatchPreRS3.c)
 *     AslStringDuplicate @ 0x14067C4C4 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14067C5A0 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x14067E5F8 (AslPathSplit.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EA66C (_CmGetDeviceContainerIdFromBase.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1406F00F4 (PnpNotifyUserModeDeviceRemoval.c)
 *     WmipMangleInstanceName @ 0x140708400 (WmipMangleInstanceName.c)
 *     PipMakeGloballyUniqueId @ 0x14070BEF0 (PipMakeGloballyUniqueId.c)
 *     AslpFileQueryVersionString @ 0x14071FA04 (AslpFileQueryVersionString.c)
 *     AslpEnvResolveVars @ 0x140721E70 (AslpEnvResolveVars.c)
 *     SdbQueryDataExTagID @ 0x140722984 (SdbQueryDataExTagID.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074A850 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14074ABA0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074AE80 (_CmDeviceClassesSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x140756B84 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408124F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140869690 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x14087CFC0 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x14087E240 (TtmpPublishDeviceEvent.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E6168 (SdbpCheckMatchingRegistryValue.c)
 *     AslPathCombine @ 0x1408EA214 (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x1408EA4E8 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1408EBE74 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1408EC0D0 (AslEnvGetSystem32DirPathBuf.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902120 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x1409D62F4 (IopStoreSystemPartitionInformation.c)
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
