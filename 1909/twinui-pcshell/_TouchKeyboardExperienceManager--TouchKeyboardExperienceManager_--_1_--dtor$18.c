/*
 * XREFs of _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$18 @ 0x18032C4A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor_18(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    (winrt::immersive_shell_component *)&a2[10].lpVtbl[14].AddRef,
    a2,
    a3);
}
