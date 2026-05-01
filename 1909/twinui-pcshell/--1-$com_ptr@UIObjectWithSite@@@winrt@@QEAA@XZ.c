/*
 * XREFs of ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x1800A1994
 * Callers:
 *     _winrt::capture_winrt::impl::IContextCallback_int_(__cdecl_)(winrt::guid_const_&_void____)__::_1_::dtor$0 @ 0x1800A1676 (_winrt--capture_winrt--impl--IContextCallback_int_(__cdecl_)(winrt--guid_const_-_void____)__--_1.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___::await_suspend_::_1_::dtor$0 @ 0x1800A4172 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Wind_ea_1800A4172.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_bool___::await_suspend_::_1_::dtor$0 @ 0x1800A42AA (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_bool___--await_suspend_-.c)
 *     _winrt::com_ptr_IObjectWithSite_::as_IUnknown__::_1_::dtor$1 @ 0x1800BFB3D (_winrt--com_ptr_IObjectWithSite_--as_IUnknown__--_1_--dtor$1.c)
 *     _winrt::capture_Windows::Internal::Shell::Experience::IShellExperienceManagerFactory_long_(__cdecl_)(IUnknown____GUID_const_&__GUID_const_&_void____)_IUnknown____GUID_const_&__::_1_::dtor$0 @ 0x1800BFED7 (_winrt--capture_Windows--Internal--Shell--Experience--IShellExperienceManagerFactory_long_(__cde.c)
 *     _winrt::make_winrt::details::module_count_wrapper_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher____::_1_::dtor$0 @ 0x1800C0353 (_winrt--make_winrt--details--module_count_wrapper_winrt--Windows--Internal--Shell--ShellFeeds--i.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::dtor$0 @ 0x1800C0B16 (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeed.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::dtor$1 @ 0x1800C0B22 (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--ShellFeeds--implementati_ea_1800C0B22.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$9 @ 0x1800C1848 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$9.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$1 @ 0x1800C1877 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$1.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$5 @ 0x1800C189B (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$5.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$0 @ 0x1800C1CE6 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$0.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$2 @ 0x1800C1CF2 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization_::_1_::dtor$0 @ 0x1800C4F80 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--perform_delaye.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization_::_1_::dtor$1 @ 0x1800C4F8C (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--p_ea_1800C4F8C.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IObjectWithSite>::~com_ptr<IObjectWithSite>(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(a1);
  return result;
}
