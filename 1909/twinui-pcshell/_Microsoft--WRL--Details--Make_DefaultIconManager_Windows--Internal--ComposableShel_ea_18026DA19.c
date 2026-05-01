/*
 * XREFs of _Microsoft::WRL::Details::Make_DefaultIconManager_Windows::Internal::ComposableShell::Tabs::ITabDataModel___&_ITabViewManager___&_IImmersiveWindowMessageService___&__::_1_::dtor$2 @ 0x18026DA19
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::Make_DefaultIconManager_Windows::Internal::ComposableShell::Tabs::ITabDataModel_____ITabViewManager_____IImmersiveWindowMessageService______::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 64),
    *(struct IServiceProvider **)(a2 + 56),
    a3);
}
