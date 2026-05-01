/*
 * XREFs of _lambda_21b8fbba22a3d8e1beadf144030eed52_::operator() @ 0x18002B71C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_21b8fbba22a3d8e1beadf144030eed52__Windows::Internal::CNoResult_::Run @ 0x180030390 (Windows--Internal--COperationLambdaVar_0__lambda_21b8fbba22a3d8e1beadf144030eed52__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x180028310 (-_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@W.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x180029904 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180037EF0 (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()(_QWORD *a1, HSTRING a2)
{
  HSTRING v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  HSTRING *v6; // r14
  int v7; // ebx
  __int64 v9; // rcx
  HRESULT v10; // eax
  __int64 v11; // rdx
  int GamesListProperties; // eax
  __int64 v13; // rdx
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v14; // rcx
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v15; // rcx
  HSTRING v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v18; // [rsp+70h] [rbp+38h] BYREF
  HSTRING string; // [rsp+78h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+80h] [rbp+48h]
  __int64 v21; // [rsp+88h] [rbp+50h]

  string = a2;
  v3 = (HSTRING)a1[2];
  WindowsDeleteString(0LL);
  v4 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 168LL);
  EnterCriticalSection(v4);
  v20 = v4;
  string = v3;
  v21 = 0LL;
  v5 = *a1;
  v6 = (HSTRING *)(v5 + 152);
  if ( Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual(
         (HSTRING *)(v5 + 152),
         &string,
         0) )
  {
    WindowsDeleteString(string);
LABEL_3:
    if ( v4 )
      LeaveCriticalSection(v4);
    v7 = 0;
    goto LABEL_6;
  }
  v9 = *(_QWORD *)(v5 + 280);
  if ( v9 )
  {
    if ( *(_QWORD *)(v5 + 288) )
    {
      v10 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
              v9,
              15LL,
              &string);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 1629LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v10);
LABEL_12:
        WindowsDeleteString(string);
        goto LABEL_29;
      }
    }
  }
  if ( *(_QWORD *)(v5 + 256) && *(_QWORD *)(v5 + 240) )
  {
    v18 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v5,
                            &v18);
    v7 = GamesListProperties;
    if ( GamesListProperties < 0 )
    {
      v13 = 1636LL;
      goto LABEL_17;
    }
    GamesListProperties = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *, HSTRING))(*(_QWORD *)v18 + 72LL))(
                            v18,
                            string);
    v7 = GamesListProperties;
    if ( GamesListProperties < 0 )
    {
      v13 = 1637LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)GamesListProperties);
      v14 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      goto LABEL_12;
    }
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v16 = string;
  if ( !string || string != *v6 )
  {
    WindowsDeleteString(*v6);
    *v6 = 0LL;
    v10 = WindowsDuplicateString(v16, (HSTRING *)(v5 + 152));
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 1640LL;
      goto LABEL_11;
    }
    v16 = string;
  }
  WindowsDeleteString(v16);
  v7 = 0;
LABEL_29:
  if ( v7 >= 0 )
    goto LABEL_3;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x650,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v7);
  if ( v4 )
    LeaveCriticalSection(v4);
LABEL_6:
  WindowsDeleteString(0LL);
  return (unsigned int)v7;
}
