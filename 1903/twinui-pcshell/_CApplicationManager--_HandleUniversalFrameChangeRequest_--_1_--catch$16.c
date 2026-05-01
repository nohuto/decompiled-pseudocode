/*
 * XREFs of _CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::catch$16 @ 0x18011DADD
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::catch_16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 192) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x6D0,
                            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            a4);
  return &loc_18011DA78;
}
