/*
 * XREFs of RtlStringCchCopyW @ 0x140153F64
 * Callers:
 *     PopLogNotifyDevice @ 0x1402FB5CC (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x140345630 (SdbpGetPathAppPatchPreRS3.c)
 *     AslStringDuplicate @ 0x14070B328 (AslStringDuplicate.c)
 *     AslPathSplit @ 0x14070B3EC (AslPathSplit.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14070B530 (_CmGetDeviceContainerIdFromBase.c)
 *     SdbpCreateSearchDBContext @ 0x14070CB08 (SdbpCreateSearchDBContext.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14072EB0C (PnpNotifyUserModeDeviceRemoval.c)
 *     WmipMangleInstanceName @ 0x1407332E8 (WmipMangleInstanceName.c)
 *     PipMakeGloballyUniqueId @ 0x140737660 (PipMakeGloballyUniqueId.c)
 *     AslpEnvResolveVars @ 0x14074BF18 (AslpEnvResolveVars.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140768220 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140768580 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140768870 (_CmDeviceClassesSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x14077D144 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084BF40 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5B10 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1408BAAC0 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1408BBD64 (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x140921C40 (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x140927004 (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x1409272DC (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140928BD4 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140928E3C (AslEnvGetSystem32DirPathBuf.c)
 *     AslpFileQueryVersionString @ 0x14092B470 (AslpFileQueryVersionString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140940590 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x1409F5770 (IopStoreSystemPartitionInformation.c)
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
