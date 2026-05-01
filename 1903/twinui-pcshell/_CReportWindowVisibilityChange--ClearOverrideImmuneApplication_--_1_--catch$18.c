/*
 * XREFs of _CReportWindowVisibilityChange::ClearOverrideImmuneApplication_::_1_::catch$18 @ 0x18010FE77
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180114540 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall CReportWindowVisibilityChange::ClearOverrideImmuneApplication_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x8D,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
    a4);
  return &loc_18010FE57;
}
