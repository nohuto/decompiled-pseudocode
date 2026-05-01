/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CStartExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$1 @ 0x1801B53AD
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CStartExperienceManager_IInspectable_IServiceProvider______::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 104),
    *(struct IServiceProvider **)(a2 + 80),
    a3);
}
