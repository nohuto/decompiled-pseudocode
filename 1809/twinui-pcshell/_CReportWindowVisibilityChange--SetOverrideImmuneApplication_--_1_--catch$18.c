/*
 * XREFs of _CReportWindowVisibilityChange::SetOverrideImmuneApplication_::_1_::catch$18 @ 0x1800F2FE1
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
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
                           (void *)0x7A,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
                           a4);
  return &loc_1800F2FC0;
}
