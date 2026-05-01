/*
 * XREFs of ??$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801DE0C0
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___lambda_63dc8fa9d2f756a20e10ed7cee27b415___::QueryInterface @ 0x180095370 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winr.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_9783efd0cf9a4011a5fefd366cc6ea27___::QueryInterface @ 0x180095400 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_89fb5ab193d74e8b0300aa0759d904c8___::QueryInterface @ 0x180095490 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--A.c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::QueryInterface @ 0x180095520 (_winrt--impl--make_marshaler_--_2_--marshaler--QueryInterface.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::impl::is_guid_of<winrt::impl::IMarshal>(_DWORD *a1)
{
  return *a1 == 3 && !a1[1] && a1[2] == 192 && a1[3] == 1174405120;
}
