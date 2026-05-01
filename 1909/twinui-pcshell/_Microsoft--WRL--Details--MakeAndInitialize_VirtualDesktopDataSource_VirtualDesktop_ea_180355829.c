/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopDataSource_VirtualDesktopDataSource__::_1_::dtor$1 @ 0x180355829
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopDataSource_VirtualDesktopDataSource__::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 80),
    *(struct IServiceProvider **)(a2 + 64),
    a3);
}
