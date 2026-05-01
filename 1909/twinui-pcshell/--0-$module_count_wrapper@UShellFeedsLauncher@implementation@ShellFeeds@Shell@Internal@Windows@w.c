/*
 * XREFs of ??0?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x1800C0478
 * Callers:
 *     ??$make@V?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800C02F8 (--$make@V-$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Win.c)
 * Callees:
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800C039C (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x1800C057C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx

  *a1 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,std::tuple<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>>::`vftable';
  v2 = a1 + 1;
  winrt::immersive_shell_component::immersive_shell_component((winrt::immersive_shell_component *)(a1 + 1));
  *a1 = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,std::tuple<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>>'};
  *v2 = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer<winrt::immersive_shell_component,IObjectWithSite,void>'};
  a1[2] = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::impl::producer<winrt::immersive_shell_component,IServiceProvider,void>'};
  a1[3] = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  a1[5] = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::immersive_shell_component'};
  a1[12] = 0LL;
  a1[13] = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v3);
  *a1 = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,std::tuple<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>>'};
  *v2 = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer<winrt::immersive_shell_component,IObjectWithSite,void>'};
  a1[2] = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::impl::producer<winrt::immersive_shell_component,IServiceProvider,void>'};
  a1[3] = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  a1[5] = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
