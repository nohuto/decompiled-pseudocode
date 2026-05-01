/*
 * XREFs of _CReportWindowVisibilityChange::SetOverrideImmuneApplication_::_1_::catch$18 @ 0x180118031
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CReportWindowVisibilityChange::SetOverrideImmuneApplication_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x7B,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
                           a4);
  return &loc_180118010;
}
