/*
 * XREFs of RtlStringCchCopyW @ 0x140154604
 * Callers:
 *     PopLogNotifyDevice @ 0x1402FB07C (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x140345090 (SdbpGetPathAppPatchPreRS3.c)
 *     AslStringDuplicate @ 0x14070D108 (AslStringDuplicate.c)
 *     AslPathSplit @ 0x14070D1CC (AslPathSplit.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14070D310 (_CmGetDeviceContainerIdFromBase.c)
 *     SdbpCreateSearchDBContext @ 0x14070E8E8 (SdbpCreateSearchDBContext.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140730D6C (PnpNotifyUserModeDeviceRemoval.c)
 *     WmipMangleInstanceName @ 0x140735548 (WmipMangleInstanceName.c)
 *     PipMakeGloballyUniqueId @ 0x1407398BC (PipMakeGloballyUniqueId.c)
 *     AslpEnvResolveVars @ 0x14074C9A8 (AslpEnvResolveVars.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14076CD20 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14076D080 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14076D370 (_CmDeviceClassesSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x14077FA64 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084B640 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5370 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1408BA390 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1408BB634 (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x1409216A0 (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x140926A64 (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x140926D3C (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140928634 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14092889C (AslEnvGetSystem32DirPathBuf.c)
 *     AslpFileQueryVersionString @ 0x14092AEE4 (AslpFileQueryVersionString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140940000 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x1409F5680 (IopStoreSystemPartitionInformation.c)
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
