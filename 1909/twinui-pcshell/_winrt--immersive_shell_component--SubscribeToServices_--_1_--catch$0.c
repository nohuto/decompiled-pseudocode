/*
 * XREFs of _winrt::immersive_shell_component::SubscribeToServices_::_1_::catch$0 @ 0x1800C46FD
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall winrt::immersive_shell_component::SubscribeToServices_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x156,
                           (unsigned int)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
                           a4);
  return &loc_1800C46F3;
}
