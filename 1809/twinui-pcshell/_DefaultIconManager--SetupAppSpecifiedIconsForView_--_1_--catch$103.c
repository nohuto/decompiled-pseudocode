/*
 * XREFs of _DefaultIconManager::SetupAppSpecifiedIconsForView_::_1_::catch$103 @ 0x1802004B5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall DefaultIconManager::SetupAppSpecifiedIconsForView_::_1_::catch_103(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 248),
                           (void *)0xDB,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
                           a4);
  return &loc_180200444;
}
