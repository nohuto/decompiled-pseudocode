/*
 * XREFs of _TabShellHotKeyHandler::OnSelectTabByIndex_::_1_::catch$12 @ 0x180202ED1
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall TabShellHotKeyHandler::OnSelectTabByIndex_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0xE9,
                            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
                            a4);
  return &loc_180202E9A;
}
