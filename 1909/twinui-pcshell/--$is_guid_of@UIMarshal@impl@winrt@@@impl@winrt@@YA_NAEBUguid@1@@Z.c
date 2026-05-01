/*
 * XREFs of ??$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD6E0
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___lambda_63dc8fa9d2f756a20e10ed7cee27b415___::QueryInterface @ 0x1800A2560 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winr.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_9783efd0cf9a4011a5fefd366cc6ea27___::QueryInterface @ 0x1800A25F0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_89fb5ab193d74e8b0300aa0759d904c8___::QueryInterface @ 0x1800A2680 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--A.c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::QueryInterface @ 0x1800A2710 (_winrt--impl--make_marshaler_--_2_--marshaler--QueryInterface.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___::QueryInterface @ 0x1800C1950 (winrt--impl--implements_delegate_winrt--Windows--Networking--Connectivity--NetworkStatusChangedE.c)
 *     ?QueryInterface@?$weak_ref@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C1A00 (-QueryInterface@-$weak_ref@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 *     ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C4FF0 (-query_interface@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::impl::is_guid_of<winrt::impl::IMarshal>(_DWORD *a1)
{
  return *a1 == 3 && !a1[1] && a1[2] == 192 && a1[3] == 1174405120;
}
