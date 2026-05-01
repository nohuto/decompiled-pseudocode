/*
 * XREFs of _Windows::Internal::ComposableShell::TreeNodeBase::RemoveChild_::_1_::catch$12 @ 0x180231C81
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801339B0 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall Windows::Internal::ComposableShell::TreeNodeBase::RemoveChild_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x10C,
    (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
    a4);
  return &loc_180231C36;
}
