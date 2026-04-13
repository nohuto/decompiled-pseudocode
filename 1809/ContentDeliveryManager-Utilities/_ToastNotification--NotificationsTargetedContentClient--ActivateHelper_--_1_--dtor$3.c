/*
 * XREFs of _ToastNotification::NotificationsTargetedContentClient::ActivateHelper_::_1_::dtor$3 @ 0x1800CA9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
