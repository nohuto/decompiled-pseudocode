/*
 * XREFs of ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037404
 * Callers:
 *     ?get_DisplayInfo@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x180025FC0 (-get_DisplayInfo@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDis.c)
 *     ?LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x180026070 (-LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyncOpe.c)
 *     ?get_Category@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListCategory@2345@@Z @ 0x180026140 (-get_Category@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListCate.c)
 *     ?get_Properties@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x1800261F0 (-get_Properties@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IMapVi.c)
 *     ?SetCategoryAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800262A0 (-SetCategoryAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCat.c)
 *     ?get_LaunchableState@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x180026360 (-get_LaunchableState@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameL.c)
 *     ?get_LauncherExecutable@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIStorageFile@Storage@5@@Z @ 0x180026410 (-get_LauncherExecutable@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU.c)
 *     ?get_LaunchParameters@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800264C0 (-get_LaunchParameters@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHS.c)
 *     ?SetLauncherExecutableFileAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180026570 (-SetLauncherExecutableFileAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAA.c)
 *     ?SetLauncherExecutableFileWithParamsAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180026630 (-SetLauncherExecutableFileWithParamsAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Win.c)
 *     ?get_TitleId@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180026700 (-get_TitleId@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@.c)
 *     ?SetTitleIdAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800267B0 (-SetTitleIdAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@.c)
 *     ?get_GameModeConfiguration@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeConfiguration@2345@@Z @ 0x180026870 (-get_GameModeConfiguration@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAP.c)
 *     ?GetTrustLevel@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAW4TrustLevel@@@Z @ 0x180036680 (-GetTrustLevel@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Mic_ea_180036680.c)
 *     ?GetRuntimeClassName@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180036700 (-GetRuntimeClassName@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@W_ea_180036700.c)
 *     ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036790 (-GetIids@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft_ea_180036790.c)
 *     ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x180041C30 (-Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFTMCrossProcClientImpl::_GetRemoteIdentity(
        CFTMCrossProcClientImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi

  *a3 = 0LL;
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v6;
}
