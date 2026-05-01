/*
 * XREFs of ?Shutdown@DefaultIconManager@@UEAAJXZ @ 0x180200500
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180201B3C (-reset@-$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@.c)
 */

__int64 __fastcall DefaultIconManager::Shutdown(DefaultIconManager *this)
{
  wil::unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>::reset((char *)this + 184);
  return 0LL;
}
