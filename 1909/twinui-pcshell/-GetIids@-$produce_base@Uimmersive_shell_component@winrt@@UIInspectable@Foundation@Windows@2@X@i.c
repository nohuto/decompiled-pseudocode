/*
 * XREFs of ?GetIids@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800C0CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NonDelegatingGetIids@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800C1080 (-NonDelegatingGetIids@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UISe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce_base<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable,void>::GetIids(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 32LL;
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetIids(v1);
}
