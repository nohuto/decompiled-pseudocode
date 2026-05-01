/*
 * XREFs of ??1hstring@winrt@@QEAA@XZ @ 0x1801FD868
 * Callers:
 *     _PenWorkspaceAppInstallBroker::PenWorkspaceAppInstallBroker_::_1_::dtor$1 @ 0x1800A17A7 (_PenWorkspaceAppInstallBroker--PenWorkspaceAppInstallBroker_--_1_--dtor$1.c)
 *     ??_EPenWorkspaceAppInstallBroker@@UEAAPEAXI@Z @ 0x1800A1AF0 (--_EPenWorkspaceAppInstallBroker@@UEAAPEAXI@Z.c)
 *     ?IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z @ 0x1800A2160 (-IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z.c)
 *     _PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::dtor$2 @ 0x1800A2396 (_PenWorkspaceAppInstallBroker--IsWhiteboardInstalling_--_1_--dtor$2.c)
 *     _winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_::ProductId_::_1_::dtor$0 @ 0x1800A24AC (_winrt--impl--consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppIns_ea_1800A24AC.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x1800A2960 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 *     _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::dtor$1 @ 0x1800A3B06 (_PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2_--_1_--dtor$1.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800C1140 (-NonDelegatingGetRuntimeClassName@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWi.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800C4D30 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization_::_1_::dtor$3 @ 0x1800C4FA4 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--p_ea_1800C4FA4.c)
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800C7174 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 *     _ShellFeedsAvailabilityHelpers::GetEnablementCheckURL_::_1_::dtor$7 @ 0x1800C75F2 (_ShellFeedsAvailabilityHelpers--GetEnablementCheckURL_--_1_--dtor$7.c)
 *     _winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::HomeGeographicRegion_::_1_::dtor$0 @ 0x1800C783C (_winrt--impl--consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics_winrt--Windows.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1801FD9BF (_winrt--to_hresult_--_1_--catch$17.c)
 *     _winrt::to_hresult_::_1_::catch$18 @ 0x1801FDA5F (_winrt--to_hresult_--_1_--catch$18.c)
 *     _winrt::to_hresult_::_1_::catch$19 @ 0x1801FDAFF (_winrt--to_hresult_--_1_--catch$19.c)
 *     _winrt::impl::hstring_builder::to_hstring_::_1_::dtor$0 @ 0x1801FDBF6 (_winrt--impl--hstring_builder--to_hstring_--_1_--dtor$0.c)
 * Callees:
 *     WindowsDeleteString_0 @ 0x18008AE6B (WindowsDeleteString_0.c)
 */

void __fastcall winrt::hstring::~hstring(HSTRING *this)
{
  HSTRING v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    WindowsDeleteString_0(v2);
    *this = 0LL;
  }
}
