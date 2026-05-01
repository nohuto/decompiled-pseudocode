/*
 * XREFs of _Windows::Internal::ComposableShell::Tabs::TabSetMediator::TraceLogTabWindowSnapped_::_1_::catch$3 @ 0x180284BC6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801339B0 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::TraceLogTabWindowSnapped_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x32,
    (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediatorimpl.h",
    a4);
  return &loc_180284BA1;
}
