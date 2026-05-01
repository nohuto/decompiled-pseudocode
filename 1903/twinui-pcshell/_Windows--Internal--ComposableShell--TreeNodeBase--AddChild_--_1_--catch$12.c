/*
 * XREFs of _Windows::Internal::ComposableShell::TreeNodeBase::AddChild_::_1_::catch$12 @ 0x18020E48D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180114540 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall Windows::Internal::ComposableShell::TreeNodeBase::AddChild_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0xF0,
    (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
    a4);
  return &loc_18020E43A;
}
