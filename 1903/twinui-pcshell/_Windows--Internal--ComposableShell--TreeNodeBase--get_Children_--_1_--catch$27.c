/*
 * XREFs of _Windows::Internal::ComposableShell::TreeNodeBase::get_Children_::_1_::catch$27 @ 0x180217201
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::ComposableShell::TreeNodeBase::get_Children_::_1_::catch_27(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0xBB,
                           (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
                           a4);
  return &loc_1802171E0;
}
