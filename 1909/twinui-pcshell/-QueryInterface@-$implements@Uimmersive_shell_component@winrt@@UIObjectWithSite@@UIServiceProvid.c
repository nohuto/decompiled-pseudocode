/*
 * XREFs of ?QueryInterface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1920
 * Callers:
 *     ?QueryInterface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4130 (-QueryInterface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UI_ea_1800E4130.c)
 *     ?QueryInterface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4140 (-QueryInterface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UI_ea_1800E4140.c)
 * Callees:
 *     ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C4FF0 (-query_interface@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService.c)
 */

__int64 __fastcall winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
           a1 + 32,
           a2,
           a3);
}
