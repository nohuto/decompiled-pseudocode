/*
 * XREFs of _lambda_9783efd0cf9a4011a5fefd366cc6ea27_::__lambda_9783efd0cf9a4011a5fefd366cc6ea27_ @ 0x180094660
 * Callers:
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___::await_suspend_::_1_::dtor$6 @ 0x180096FFE (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Wind_ea_180096FFE.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_bool___::await_suspend_::_1_::dtor$6 @ 0x180097136 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_bool___--aw_ea_180097136.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x180097300 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_9783efd0cf9a4011a5fefd366cc6ea27_::__lambda_9783efd0cf9a4011a5fefd366cc6ea27_(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(v1);
  return result;
}
