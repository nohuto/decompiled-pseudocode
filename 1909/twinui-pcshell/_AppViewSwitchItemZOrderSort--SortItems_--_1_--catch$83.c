/*
 * XREFs of _AppViewSwitchItemZOrderSort::SortItems_::_1_::catch$83 @ 0x18032AEA7
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801339B0 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AppViewSwitchItemZOrderSort::SortItems_::_1_::catch_83(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x33,
    (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
    a4);
  return &loc_18032ACCB;
}
