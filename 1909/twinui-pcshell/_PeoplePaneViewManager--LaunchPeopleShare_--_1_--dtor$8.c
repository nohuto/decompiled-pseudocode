/*
 * XREFs of _PeoplePaneViewManager::LaunchPeopleShare_::_1_::dtor$8 @ 0x180241D27
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PeoplePaneViewManager::LaunchPeopleShare_::_1_::dtor_8(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 96),
    (struct IServiceProvider *)a2,
    a3);
}
