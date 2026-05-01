/*
 * XREFs of ?Release@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAAKXZ @ 0x1800C1D40
 * Callers:
 *     ?Release@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@W7EAAKXZ @ 0x1800E4150 (-Release@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@_ea_1800E4150.c)
 *     ?Release@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBA@EAAKXZ @ 0x1800E4160 (-Release@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@_ea_1800E4160.c)
 *     ?Release@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBI@EAAKXZ @ 0x1800E4170 (-Release@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@_ea_1800E4170.c)
 * Callees:
 *     ?NonDelegatingRelease@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800C1230 (-NonDelegatingRelease@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UISe.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::immersive_shell_component,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingRelease(a1 + 40);
}
