/*
 * XREFs of ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C18F0
 * Callers:
 *     ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4100 (-QueryInterface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@In_ea_1800E4100.c)
 *     ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4110 (-QueryInterface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@In_ea_1800E4110.c)
 *     ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4120 (-QueryInterface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@In_ea_1800E4120.c)
 * Callees:
 *     ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C4FF0 (-query_interface@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::immersive_shell_component,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
           a1 + 40,
           a2,
           a3);
}
