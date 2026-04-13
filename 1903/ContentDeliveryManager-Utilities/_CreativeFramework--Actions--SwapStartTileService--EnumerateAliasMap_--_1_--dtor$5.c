/*
 * XREFs of _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::dtor$5 @ 0x1800D2282
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 216));
}
