/*
 * XREFs of _lambda_9783efd0cf9a4011a5fefd366cc6ea27_::__lambda_9783efd0cf9a4011a5fefd366cc6ea27_ @ 0x1800A18EC
 * Callers:
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___::await_suspend_::_1_::dtor$6 @ 0x1800A417E (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Wind_ea_1800A417E.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_bool___::await_suspend_::_1_::dtor$6 @ 0x1800A42B6 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_bool___--aw_ea_1800A42B6.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_9783efd0cf9a4011a5fefd366cc6ea27_::__lambda_9783efd0cf9a4011a5fefd366cc6ea27_(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(v1);
  return result;
}
