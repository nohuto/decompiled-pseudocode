/*
 * XREFs of _winrt::immersive_shell_component::PublishServices_::_1_::catch$29 @ 0x1800C18A7
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall winrt::immersive_shell_component::PublishServices_::_1_::catch_29(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 160) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0x14C,
                            (unsigned int)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
                            a4);
  return &loc_1800C17EC;
}
