/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_d6e28d15cb03386e0d7e5ac918f3cf05__Windows::Internal::CNoResult_::Run @ 0x180030380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x180029814 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_d6e28d15cb03386e0d7e5ac918f3cf05__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // ebx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v5; // rcx
  int GamesListProperties; // eax
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v7; // rcx
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v8; // rcx
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10[1] = (struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *)-2LL;
  v3 = a3;
  if ( a3 >= 0 )
    v3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && v3 >= 0 )
  {
    v5 = *(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)v5 + 36) )
      return 0;
    v10[0] = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            v5,
                            v10);
    v3 = GamesListProperties;
    if ( GamesListProperties >= 0 )
    {
      GamesListProperties = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *, _QWORD))(*(_QWORD *)v10[0] + 56LL))(
                              v10[0],
                              *(unsigned int *)(a1 + 24));
      v3 = GamesListProperties;
      if ( GamesListProperties >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = *(_DWORD *)(a1 + 24);
        v8 = v10[0];
        if ( v10[0] )
        {
          v10[0] = 0LL;
          (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v8 + 16LL))(v8);
        }
        return 0;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x566,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
    v7 = v10[0];
    if ( v10[0] )
    {
      v10[0] = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v3;
}
