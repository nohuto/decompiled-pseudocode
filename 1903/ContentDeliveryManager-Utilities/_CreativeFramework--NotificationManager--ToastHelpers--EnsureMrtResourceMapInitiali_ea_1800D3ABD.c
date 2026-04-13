/*
 * XREFs of _CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized_::_1_::dtor$8 @ 0x1800D3ABD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
