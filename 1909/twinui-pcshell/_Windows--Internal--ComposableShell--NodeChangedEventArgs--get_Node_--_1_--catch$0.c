/*
 * XREFs of _Windows::Internal::ComposableShell::NodeChangedEventArgs::get_Node_::_1_::catch$0 @ 0x180236868
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall Windows::Internal::ComposableShell::NodeChangedEventArgs::get_Node_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x4C,
                           (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
                           a4);
  return &loc_18023685F;
}
