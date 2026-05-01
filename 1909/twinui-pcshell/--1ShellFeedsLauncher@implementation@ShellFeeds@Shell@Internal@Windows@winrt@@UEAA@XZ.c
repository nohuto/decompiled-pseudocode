/*
 * XREFs of ??1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C076C
 * Callers:
 *     _winrt::details::module_count_wrapper_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::module_count_wrapper_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher__::_1_::dtor$0 @ 0x1800C0568 (_winrt--details--module_count_wrapper_winrt--Windows--Internal--Shell--ShellFeeds--_ea_1800C0568.c)
 *     ??1?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x1800C06E8 (--1-$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@w.c)
 *     ??_EShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1800C0900 (--_EShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_615adbe98d4101f038671f2644b55ba7__&_ @ 0x1800BFB6C (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkInformation_wi.c)
 */

void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::~ShellFeedsLauncher(
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *this)
{
  char *v2; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,std::tuple<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 2) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::impl::producer<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 3) = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 5) = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::immersive_shell_component'};
  v2 = (char *)this + 104;
  winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_615adbe98d4101f038671f2644b55ba7____(
    (__int64)this,
    &v2);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 12);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *)((char *)this + 8));
}
