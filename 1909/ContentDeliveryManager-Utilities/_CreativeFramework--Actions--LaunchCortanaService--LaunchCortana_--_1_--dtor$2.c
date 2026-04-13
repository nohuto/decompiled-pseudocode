/*
 * XREFs of _CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::dtor$2 @ 0x1800D34C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
