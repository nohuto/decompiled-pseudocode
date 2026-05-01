/*
 * XREFs of _Windows::Internal::ComposableShell::TreeNodeBase::RemoveChild_::_1_::catch$13 @ 0x180231CB2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::ComposableShell::TreeNodeBase::RemoveChild_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x110,
                           (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
                           a4);
  return &loc_180231C50;
}
