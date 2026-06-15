/*
 * XREFs of _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch$234 @ 0x1800F1B61
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BBEF8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch_234(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 248) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 232),
                            (void *)0x1AB,
                            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                            a4);
  return &loc_1800F1B16;
}
