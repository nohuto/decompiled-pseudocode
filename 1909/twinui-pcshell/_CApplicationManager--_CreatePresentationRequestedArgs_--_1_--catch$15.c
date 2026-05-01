/*
 * XREFs of _CApplicationManager::_CreatePresentationRequestedArgs_::_1_::catch$15 @ 0x1800E9006
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CApplicationManager::_CreatePresentationRequestedArgs_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 200) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 184),
                            (void *)0x2197,
                            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            a4);
  return &loc_18007B78C;
}
