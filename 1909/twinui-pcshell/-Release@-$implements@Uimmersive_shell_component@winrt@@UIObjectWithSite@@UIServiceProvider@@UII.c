/*
 * XREFs of ?Release@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEAAKXZ @ 0x1800C1D70
 * Callers:
 *     ?Release@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@W7EAAKXZ @ 0x1800E4180 (-Release@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService_ea_1800E4180.c)
 *     ?Release@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@WBA@EAAKXZ @ 0x1800E4190 (-Release@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService_ea_1800E4190.c)
 * Callees:
 *     ?NonDelegatingRelease@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800C1230 (-NonDelegatingRelease@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UISe.c)
 */

__int64 __fastcall winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingRelease(a1 + 32);
}
