/*
 * XREFs of ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x180029904
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027650 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800277B8 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002837C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_21b8fbba22a3d8e1beadf144030eed52_::operator() @ 0x18002B71C (_lambda_21b8fbba22a3d8e1beadf144030eed52_--operator().c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_d6e28d15cb03386e0d7e5ac918f3cf05__Windows::Internal::CNoResult_::Run @ 0x180030410 (Windows--Internal--COperationLambdaVar_0__lambda_d6e28d15cb03386e0d7e5ac918f3cf05__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **); // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 34);
  if ( !v4 )
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x8007139FLL);
    return (unsigned int)v5;
  }
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, *((_QWORD *)this + 30), &v11);
  if ( v5 < 0 )
  {
    v7 = 1073LL;
    goto LABEL_6;
  }
  v5 = (**v11)(v11, &GUID_84dabb6f_6903_4f45_b2cc_30d23eb63ca9, a2);
  if ( v5 < 0 )
  {
    v7 = 1074LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v5);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **)))(*v8)[2])(v8);
    }
    return (unsigned int)v5;
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **)))(*v9)[2])(v9);
  }
  return 0LL;
}
