/*
 * XREFs of _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$13 @ 0x1803014AC
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor_13(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a2 + 176), 0LL, a3);
}
