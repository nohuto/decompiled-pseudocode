/*
 * XREFs of ??1?$com_ptr@UIContextCallback@impl@winrt@@@winrt@@QEAA@XZ @ 0x180094724
 * Callers:
 *     _winrt::capture_winrt::impl::IContextCallback_int_(__cdecl_)(winrt::guid_const_&_void____)__::_1_::dtor$0 @ 0x180094392 (_winrt--capture_winrt--impl--IContextCallback_int_(__cdecl_)(winrt--guid_const_-_void____)__--_1.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___::await_suspend_::_1_::dtor$0 @ 0x180096FF2 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Wind_ea_180096FF2.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_bool___::await_suspend_::_1_::dtor$0 @ 0x18009712A (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_bool___--await_suspend_-.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x180097300 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::IContextCallback>::~com_ptr<winrt::impl::IContextCallback>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(a1);
  return result;
}
