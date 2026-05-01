/*
 * XREFs of ?SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800114F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGame_ea_1800114F0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800118F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800118F0.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18002FDE8 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DEC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetTitleIdAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v9; // eax
  int v10; // edi
  volatile signed __int64 *v11; // rbx
  HSTRING v12; // rbp
  _QWORD *v13; // rdi
  __int64 v14; // r8
  int v15[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING newString; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1589LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  *a3 = 0LL;
  if ( WindowsGetStringLen(a2) >= 0x104 )
  {
    v6 = -2147024809;
    v7 = 1593LL;
    goto LABEL_3;
  }
  newString = 0LL;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v9 = WindowsDuplicateString(a2, &newString);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (volatile signed __int64 *)((char *)this - 16);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef((__int64)this - 16);
    v12 = newString;
    newString = 0LL;
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef((__int64)v11);
    v15[2] = 0;
    v15[0] = 3;
    v15[1] = 128;
    v13 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v13 )
    {
      *v13 = &off_18004B1D0;
      v13[1] = v11;
      v13[2] = v11;
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef((__int64)v11);
      v13[3] = v12;
    }
    else
    {
      v13 = 0LL;
    }
    v10 = ((__int64 (__fastcall *)(int *, struct Windows::Foundation::IAsyncAction **, __int64, _QWORD *))Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>)(
            v15,
            a3,
            v14,
            v13);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v11);
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x650,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v10);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v9);
  }
  WindowsDeleteString(newString);
  return (unsigned int)v10;
}
