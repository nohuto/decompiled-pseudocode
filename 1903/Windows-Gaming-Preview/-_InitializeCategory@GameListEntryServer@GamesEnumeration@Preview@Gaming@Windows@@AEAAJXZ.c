/*
 * XREFs of ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027520
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002687C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026AE8 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180028990 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028E20 (-ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011918 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180026EDC (-_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x180029814 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  int GamesListProperties; // eax
  unsigned int v3; // edi
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v7; // rcx
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v13; // [rsp+48h] [rbp+10h] BYREF

  *((_DWORD *)this + 36) = 0;
  if ( !*((_QWORD *)this + 35) || !*((_QWORD *)this + 36) )
  {
    if ( *((_QWORD *)this + 34) )
    {
      v13 = 0LL;
      GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                              this,
                              &v13);
      v3 = GamesListProperties;
      if ( GamesListProperties >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *, unsigned int *))(*(_QWORD *)v13 + 48LL))(
               v13,
               &v12);
        v3 = v6;
        if ( v6 >= 0 )
        {
          if ( v12 <= 2 )
          {
            *((_DWORD *)this + 36) = v12;
            v8 = v13;
            if ( v13 )
            {
              v13 = 0LL;
              (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v8 + 16LL))(v8);
            }
            goto LABEL_15;
          }
          v3 = -2147418113;
          v4 = 2147549183LL;
          v5 = 382LL;
        }
        else
        {
          v4 = (unsigned int)v6;
          v5 = 381LL;
        }
      }
      else
      {
        v4 = (unsigned int)GamesListProperties;
        v5 = 378LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)v4);
      v7 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *, _QWORD))(*(_QWORD *)v7 + 16LL))(
          v7,
          *(_QWORD *)v7);
      }
    }
    else
    {
      v3 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x185,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x8000FFFFLL);
    }
    return v3;
  }
  *((_DWORD *)this + 36) = 1;
LABEL_15:
  if ( !*((_DWORD *)this + 36) )
  {
    v9 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository(this);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v9);
  }
  return 0LL;
}
