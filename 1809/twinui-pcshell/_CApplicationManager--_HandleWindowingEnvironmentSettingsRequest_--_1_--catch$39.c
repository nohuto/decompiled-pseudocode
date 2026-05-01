/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::catch$39 @ 0x1800F91C6
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::catch_39(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 344) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 328),
                            (void *)0x67B,
                            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            a4);
  return &loc_1800F9059;
}
