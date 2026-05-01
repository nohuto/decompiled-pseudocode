/*
 * XREFs of ??$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIShellFeedsLauncher@ShellFeeds@Shell@Internal@5@@impl@winrt@@SAPEAXPEBUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800C0008
 * Callers:
 *     ?find_interface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800C4A50 (-find_interface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Window.c)
 * Callees:
 *     ??$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIShellFeedsLauncher@ShellFeeds@Shell@Internal@3@@impl@winrt@@SAPEAXPEBUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800BFFA4 (--$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@.c)
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::find<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2)
{
  _DWORD *v3; // rcx

  v3 = (_DWORD *)*a2;
  if ( *(_DWORD *)*a2 == 1834041537 && v3[1] == 298742838 && v3[2] == -1442827136 && v3[3] == -100048896 )
    return (a1 + 16) & -(__int64)(a1 != 0);
  if ( *v3 == -428157847 && v3[1] == 1131521093 && v3[2] == 1551541634 && v3[3] == -1000363793 )
    return (a1 + 24) & -(__int64)(a1 != 0);
  else
    return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::find<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::impl::iid_finder>(
             a1,
             a2);
}
