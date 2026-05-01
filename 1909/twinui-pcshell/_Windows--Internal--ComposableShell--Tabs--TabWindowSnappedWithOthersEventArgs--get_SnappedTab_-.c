/*
 * XREFs of _Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::get_SnappedTab_::_1_::catch$0 @ 0x180285689
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::get_SnappedTab_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x14,
                           (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\windowsnappedeventargs.h",
                           a4);
  return &loc_18028567F;
}
