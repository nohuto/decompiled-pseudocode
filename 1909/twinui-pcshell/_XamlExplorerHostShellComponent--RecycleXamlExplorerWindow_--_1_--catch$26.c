/*
 * XREFs of _XamlExplorerHostShellComponent::RecycleXamlExplorerWindow_::_1_::catch$26 @ 0x1802D1B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall XamlExplorerHostShellComponent::RecycleXamlExplorerWindow_::_1_::catch_26(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0xE9,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           a4);
  return &loc_1802D1B13;
}
