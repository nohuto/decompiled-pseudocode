/*
 * XREFs of ?GetTrustLevel@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800C0E80
 * Callers:
 *     <none>
 * Callees:
 *     ?NonDelegatingGetTrustLevel@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800C11C4 (-NonDelegatingGetTrustLevel@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::GetTrustLevel(
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *this,
        enum TrustLevel *a2)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetTrustLevel((char *)this + 40);
}
