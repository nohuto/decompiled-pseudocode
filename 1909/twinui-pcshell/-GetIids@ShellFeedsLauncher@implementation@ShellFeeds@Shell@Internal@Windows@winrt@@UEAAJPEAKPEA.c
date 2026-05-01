/*
 * XREFs of ?GetIids@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C0D00
 * Callers:
 *     <none>
 * Callees:
 *     ?NonDelegatingGetIids@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800C1080 (-NonDelegatingGetIids@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UISe.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::GetIids(
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetIids((char *)this + 40);
}
