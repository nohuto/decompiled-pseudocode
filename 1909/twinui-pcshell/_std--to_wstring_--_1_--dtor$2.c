/*
 * XREFs of _std::to_wstring_::_1_::dtor$2 @ 0x18009678B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::to_wstring_::_1_::dtor_2(__int64 a1, __int64 a2, struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 40),
    (struct IServiceProvider *)a2,
    a3);
}
