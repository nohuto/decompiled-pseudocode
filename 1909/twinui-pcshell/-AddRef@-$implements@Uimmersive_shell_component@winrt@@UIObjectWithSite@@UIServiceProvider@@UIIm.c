/*
 * XREFs of ?AddRef@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEAAKXZ @ 0x1800C09A0
 * Callers:
 *     ?AddRef@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@W7EAAKXZ @ 0x1800E40E0 (-AddRef@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceP_ea_1800E40E0.c)
 *     ?AddRef@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@WBA@EAAKXZ @ 0x1800E40F0 (-AddRef@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceP_ea_1800E40F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef(a1 + 32);
}
