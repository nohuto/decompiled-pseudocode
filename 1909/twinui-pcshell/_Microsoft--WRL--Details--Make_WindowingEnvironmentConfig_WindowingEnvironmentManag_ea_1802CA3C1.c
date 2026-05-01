/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowingEnvironmentConfig_WindowingEnvironmentManager___const_&_Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel___enum_WindowingEnvironmentType_&__::_1_::dtor$2 @ 0x1802CA3C1
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::Make_WindowingEnvironmentConfig_WindowingEnvironmentManager___const___Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel___enum_WindowingEnvironmentType____::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 64),
    *(struct IServiceProvider **)(a2 + 56),
    a3);
}
