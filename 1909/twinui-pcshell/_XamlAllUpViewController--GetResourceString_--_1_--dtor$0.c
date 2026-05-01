/*
 * XREFs of _XamlAllUpViewController::GetResourceString_::_1_::dtor$0 @ 0x1803021B1
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall XamlAllUpViewController::GetResourceString_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 32),
    (struct IServiceProvider *)0x38,
    0LL);
}
