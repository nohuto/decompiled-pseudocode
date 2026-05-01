/*
 * XREFs of _DefaultIconManager::UpdateIconForAppUserModelId_::_1_::catch$58 @ 0x180273103
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall DefaultIconManager::UpdateIconForAppUserModelId_::_1_::catch_58(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x251,
                            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
                            a4);
  return &loc_1802730D2;
}
