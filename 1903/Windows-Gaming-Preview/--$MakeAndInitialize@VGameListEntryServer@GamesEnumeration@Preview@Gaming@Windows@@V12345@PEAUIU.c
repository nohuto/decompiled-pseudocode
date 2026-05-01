/*
 * XREFs of ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAVGameListEntryUpdateHandler@2345@@Details@WRL@Microsoft@@YAJPEAPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@9Shell@WindowsInternal@@$$QEAPEAVGameListEntryUpdateHandler@4567@@Z @ 0x18001E034
 * Callers:
 *     ?_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18001AFF0 (-_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIColle.c)
 *     ?_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAPEAVGameListEntryServer@2345@@Z @ 0x18001C368 (-_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 * Callees:
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000E854 (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800116A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800116A0.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002687C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *,Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *>(
        volatile signed __int64 **a1,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **a2,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager **a3,
        _QWORD *a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v8; // rax
  int v9; // edi
  volatile signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt

  *a1 = 0LL;
  v8 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                            0x138uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v8);
    v9 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
           (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v10,
           *a2,
           *a3,
           (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)((*a4 + 8LL) & -(__int64)(*a4 != 0LL)));
    if ( v9 >= 0 )
    {
      if ( v10 )
      {
        v11 = *((_QWORD *)v10 + 17);
        while ( v11 >= 0 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64(v10 + 17, v11 + 1, v11);
          if ( v12 == v11 )
            goto LABEL_9;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
      }
LABEL_9:
      *a1 = v10;
      v9 = 0;
    }
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
