/*
 * XREFs of _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::OnSourceCollectionChanged_::_1_::dtor$3 @ 0x1802EC088
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::OnSourceCollectionChanged_::_1_::dtor_3(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 40),
    (struct IServiceProvider *)0x50,
    a3);
}
