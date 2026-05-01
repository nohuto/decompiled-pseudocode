/*
 * XREFs of _CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest_::_1_::catch$7 @ 0x18011DD7D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x6F6,
                            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            a4);
  return &loc_18011DD2C;
}
