/*
 * XREFs of ?Shutdown@DefaultIconManager@@UEAAJXZ @ 0x180253710
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180254D50 (-reset@-$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@.c)
 */

__int64 __fastcall DefaultIconManager::Shutdown(DefaultIconManager *this)
{
  wil::unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>::reset((char *)this + 184);
  return 0LL;
}
