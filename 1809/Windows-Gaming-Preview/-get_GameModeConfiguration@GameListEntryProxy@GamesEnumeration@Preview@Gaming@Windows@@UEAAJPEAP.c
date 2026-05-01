/*
 * XREFs of ?get_GameModeConfiguration@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeConfiguration@2345@@Z @ 0x180026870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000F354 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037404 (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::get_GameModeConfiguration(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration **a2)
{
  __int64 *v4; // rax
  int RemoteIdentity; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v11);
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *)((char *)this + 16),
                     &GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d,
                     (void **)v4);
  v6 = RemoteIdentity;
  if ( RemoteIdentity >= 0 )
  {
    RemoteIdentity = (*(__int64 (__fastcall **)(__int64, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration **))(*(_QWORD *)v11 + 104LL))(
                       v11,
                       a2);
    v6 = RemoteIdentity;
    if ( RemoteIdentity >= 0 )
      goto LABEL_6;
    v7 = 216LL;
  }
  else
  {
    v7 = 214LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)RemoteIdentity);
LABEL_6:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
