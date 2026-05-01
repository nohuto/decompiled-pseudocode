/*
 * XREFs of _DefaultIconManager::DefaultIconManager_::_1_::dtor$12 @ 0x1801FD6F5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DefaultIconManager::DefaultIconManager_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>::~unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>(*(_QWORD *)(a2 + 192) + 184LL);
}
