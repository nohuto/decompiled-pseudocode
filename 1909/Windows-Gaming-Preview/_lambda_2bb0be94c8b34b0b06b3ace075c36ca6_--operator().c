/*
 * XREFs of _lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::operator() @ 0x18001BE9C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_2bb0be94c8b34b0b06b3ace075c36ca6__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x18001EDC0 (Windows--Internal--COperationLambdaVar_0__lambda_2bb0be94c8b34b0b06b3ace075c36ca6__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800117A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180011890.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800156A0 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001C384 (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     ?_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAPEAVGameListEntryServer@2345@@Z @ 0x18001C5EC (-_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     __security_check_cookie @ 0x180042850 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::operator()(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  HRESULT v6; // eax
  bool v7; // bl
  bool v8; // al
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v9; // rdx
  int v10; // eax
  HRESULT v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v20; // rcx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  int v25; // [rsp+28h] [rbp-79h] BYREF
  __int64 v26; // [rsp+30h] [rbp-71h] BYREF
  struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v27; // [rsp+38h] [rbp-69h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v28; // [rsp+40h] [rbp-61h] BYREF
  __int64 v29; // [rsp+48h] [rbp-59h] BYREF
  __int64 v30; // [rsp+50h] [rbp-51h] BYREF
  _QWORD *v31; // [rsp+58h] [rbp-49h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v32; // [rsp+60h] [rbp-41h] BYREF
  __int128 v33; // [rsp+68h] [rbp-39h] BYREF
  __int64 v34; // [rsp+78h] [rbp-29h]
  __int64 v35; // [rsp+80h] [rbp-21h]
  __int64 v36; // [rsp+88h] [rbp-19h]
  HSTRING_HEADER v37; // [rsp+90h] [rbp-11h] BYREF
  HSTRING v38; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+C8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v34 = -2LL;
  v31 = 0LL;
  v30 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(*(_QWORD *)*a1 + 72LL))(*a1, &v31);
  v5 = v4;
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[1] + 72LL))(a1[1], &v30), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_51;
  }
  string = 0LL;
  v6 = WindowsCreateStringReference(L"FullTileId", 0xAu, &hstringHeader, &string);
  if ( v6 < 0 )
    goto LABEL_57;
  v32 = 0LL;
  v28 = 0LL;
  v7 = (*(int (__fastcall **)(_QWORD *, HSTRING, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier **))(*v31 + 48LL))(
         v31,
         string,
         &v32) >= 0;
  v8 = (*(int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier **))(*(_QWORD *)v30 + 48LL))(
         v30,
         string,
         &v28) >= 0;
  if ( !v7 || !v8 )
  {
    v27 = 0LL;
    if ( v7 )
    {
      v9 = v32;
    }
    else
    {
      if ( !v8 )
      {
LABEL_14:
        v38 = 0LL;
        v11 = WindowsCreateStringReference(L"GameConfigIds", 0xDu, &v37, &v38);
        if ( v11 >= 0 )
        {
          v29 = 0LL;
          v26 = 0LL;
          v12 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64 *))(*v31 + 48LL))(v31, v38, &v29);
          v5 = v12;
          if ( v12 >= 0
            && (v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, v38, &v26),
                v5 = v12,
                v12 >= 0) )
          {
            v33 = 0LL;
            v13 = CreateGameConfigStoreClientIfNeeded(&v33);
            v5 = v13;
            if ( v13 < 0
              || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 56LL))(v29, &v25) >= 0
              && v25
              && (v13 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
                          a1[2],
                          v29,
                          &v27,
                          &v33),
                  v5 = v13,
                  v13 < 0)
              || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 56LL))(v26, &v25) >= 0
              && v25
              && (v13 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
                          a1[2],
                          v26,
                          &v27,
                          &v33),
                  v5 = v13,
                  v13 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x231,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
                (const char *)(unsigned int)v13);
            }
            else
            {
              v14 = (__int64 *)(a2 + 16);
              v35 = *(_QWORD *)(a2 + 16);
              v15 = v35;
              *(_QWORD *)(a2 + 16) = 0LL;
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              v16 = *v14;
              if ( v27 )
              {
                if ( v16 )
                {
                  *v14 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                }
                RoGetAgileReference(0LL, &GUID_735924d3_811f_4494_b69c_c641a0c61543, v27, a2 + 16);
              }
              else
              {
                v36 = *v14;
                *v14 = 0LL;
                if ( v16 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              }
              v5 = 0;
            }
            if ( *((_QWORD *)&v33 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v17 = *((_QWORD *)&v33 + 1);
                (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
              }
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x231,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
              (const char *)(unsigned int)v12);
          }
          v18 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          v19 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v38 = 0LL;
          goto LABEL_44;
        }
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
LABEL_57:
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
        JUMPOUT(0x18001C315LL);
      }
      v9 = v28;
    }
    v10 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_CreateGameListEntryFromTileId(
            (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *)a1[2],
            v9,
            &v27);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x231,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v10);
LABEL_44:
      if ( v27 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v27);
      goto LABEL_46;
    }
    goto LABEL_14;
  }
  v5 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x231,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)0x80070057LL);
LABEL_46:
  v20 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  string = 0LL;
LABEL_51:
  v22 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v23 + 16LL))(v23, *v23);
  }
  return v5;
}
