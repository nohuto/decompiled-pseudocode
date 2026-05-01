/*
 * XREFs of ?GetRuntimeClassName@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800C0D90
 * Callers:
 *     <none>
 * Callees:
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800C1140 (-NonDelegatingGetRuntimeClassName@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWi.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::GetRuntimeClassName(
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *this,
        HSTRING *a2)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName((char *)this + 40);
}
