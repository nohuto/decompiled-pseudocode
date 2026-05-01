/*
 * XREFs of _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::catch$41 @ 0x1800E59D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::catch_41(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 280) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 264),
                            (void *)0x4F7,
                            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                            a4);
  return &loc_18001CA07;
}
