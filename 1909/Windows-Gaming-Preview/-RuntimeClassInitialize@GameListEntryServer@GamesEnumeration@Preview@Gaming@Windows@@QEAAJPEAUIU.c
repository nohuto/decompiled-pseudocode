/*
 * XREFs of ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x1800269AC
 * Callers:
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@567@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000C580 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEA.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAVGameListEntryUpdateHandler@2345@@Details@WRL@Microsoft@@YAJPEAPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@9Shell@WindowsInternal@@$$QEAPEAVGameListEntryUpdateHandler@4567@@Z @ 0x18001E04C (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B38 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027650 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800277B8 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027970 (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 *     ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027B68 (-_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027E80 (-_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a2,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *a3,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *a4)
{
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v8; // rcx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *v9; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, char *); // rcx
  GUID v21; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v23)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF

  v8 = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)*((_QWORD *)this + 32);
  if ( v8 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)*((_QWORD *)this + 32);
    }
    *((_QWORD *)this + 32) = a2;
    if ( v8 )
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *)*((_QWORD *)this + 31);
  if ( v9 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *))(*(_QWORD *)a3 + 8LL))(a3);
      v9 = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *)*((_QWORD *)this + 31);
    }
    *((_QWORD *)this + 31) = a3;
    if ( v9 )
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)*((_QWORD *)this + 28);
  if ( v10 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)a4 + 8LL))(a4);
      v10 = (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)*((_QWORD *)this + 28);
    }
    *((_QWORD *)this + 28) = a4;
    if ( v10 )
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v23 = 0LL;
  v21 = WindowsInternal::Shell::CDSProperties::c_batchedTilePropertiesTransformerId;
  v11 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *, GUID *, _QWORD))(*(_QWORD *)a3 + 48LL))(
          a3,
          &v21,
          &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 235LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_34;
  }
  v14 = *((_QWORD *)this + 34);
  if ( v14 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v11 = (**v23)(v23, &GUID_d08a9559_b4cc_49af_98bb_2366c7449402, (char *)this + 272);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 236LL;
    goto LABEL_24;
  }
  v11 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeId(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 238LL;
    goto LABEL_24;
  }
  v15 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName(this);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v15);
  v16 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeListener(this);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF0,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v16);
  v17 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(this);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF1,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v17);
  v18 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId(this);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF2,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v18);
  v12 = 0;
LABEL_34:
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v19)[2])(v19);
  }
  return v12;
}
