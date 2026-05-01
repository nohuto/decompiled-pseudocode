/*
 * XREFs of ??1?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180270060
 * Callers:
 *     _DefaultIconManager::DefaultIconManager_::_1_::dtor$12 @ 0x18026FEB9 (_DefaultIconManager--DefaultIconManager_--_1_--dtor$12.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@wil@@QEAAXXZ @ 0x1802742B0 (-reset@-$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@.c)
 */

__int64 __fastcall wil::unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>::~unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>(
        __int64 a1)
{
  wil::unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>::reset(a1);
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
