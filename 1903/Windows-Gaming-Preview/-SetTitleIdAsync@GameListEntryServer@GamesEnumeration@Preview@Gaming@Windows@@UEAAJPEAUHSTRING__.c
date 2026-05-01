/*
 * XREFs of ?SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800116A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800116A0.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_21b8fbba22a3d8e1beadf144030eed52___ @ 0x18002D6F4 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Intern_ea_18002D6F4.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetTitleIdAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v9; // eax
  __int64 v10; // r8
  int v11; // edi
  char *v12; // rbx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  HSTRING v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  signed __int64 v18; // [rsp+20h] [rbp-30h]
  _DWORD v19[4]; // [rsp+28h] [rbp-28h] BYREF
  char *v20; // [rsp+38h] [rbp-18h] BYREF
  volatile signed __int64 *v21; // [rsp+40h] [rbp-10h]
  HSTRING v22; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HSTRING newString; // [rsp+80h] [rbp+30h] BYREF
  signed __int64 v25; // [rsp+88h] [rbp+38h]

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
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = (char *)this - 16;
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v13 = *((_QWORD *)v12 + 17);
      v25 = v13;
      while ( v13 >= 0 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 17, v13 + 1, v13);
        if ( v14 == v13 )
          goto LABEL_13;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
    }
LABEL_13:
    v15 = newString;
    newString = 0LL;
    v20 = (char *)this - 16;
    v21 = (volatile signed __int64 *)((char *)this - 16);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v16 = *((_QWORD *)v12 + 17);
      v18 = v16;
      while ( v16 >= 0 )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 17, v16 + 1, v16);
        if ( v17 == v16 )
          goto LABEL_18;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
    }
LABEL_18:
    v19[2] = 0;
    v22 = v15;
    v19[0] = 3;
    v19[1] = 128;
    v11 = ((__int64 (__fastcall *)(_DWORD *, struct Windows::Foundation::IAsyncAction **, __int64, char **, signed __int64))Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_21b8fbba22a3d8e1beadf144030eed52___)(
            v19,
            a3,
            v10,
            &v20,
            v18);
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v21);
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x650,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v11);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)this - 2);
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
  return (unsigned int)v11;
}
