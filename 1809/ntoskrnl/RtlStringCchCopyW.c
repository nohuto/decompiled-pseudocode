/*
 * XREFs of RtlStringCchCopyW @ 0x140092420
 * Callers:
 *     PopLogNotifyDevice @ 0x1402DE56C (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x140323D80 (SdbpGetPathAppPatchPreRS3.c)
 *     AslStringDuplicate @ 0x14067C4E4 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14067C5C0 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x14067E618 (AslPathSplit.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EA68C (_CmGetDeviceContainerIdFromBase.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1406F0114 (PnpNotifyUserModeDeviceRemoval.c)
 *     WmipMangleInstanceName @ 0x140708420 (WmipMangleInstanceName.c)
 *     PipMakeGloballyUniqueId @ 0x14070BF10 (PipMakeGloballyUniqueId.c)
 *     AslpFileQueryVersionString @ 0x14071FA24 (AslpFileQueryVersionString.c)
 *     AslpEnvResolveVars @ 0x140721E90 (AslpEnvResolveVars.c)
 *     SdbQueryDataExTagID @ 0x1407229A4 (SdbQueryDataExTagID.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074A870 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14074ABC0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074AEA0 (_CmDeviceClassesSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x140756BA4 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140812510 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408696B0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x14087CFE0 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x14087E260 (TtmpPublishDeviceEvent.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E6188 (SdbpCheckMatchingRegistryValue.c)
 *     AslPathCombine @ 0x1408EA234 (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x1408EA508 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1408EBE94 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1408EC0F0 (AslEnvGetSystem32DirPathBuf.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902140 (DrvDbGetObjectSubKeyCallback.c)
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
