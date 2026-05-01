/*
 * XREFs of _CReportWindowVisibilityChange::ClearOverrideImmuneApplication_::_1_::catch$18 @ 0x1800ECA67
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EFCAC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall CReportWindowVisibilityChange::ClearOverrideImmuneApplication_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x8C,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
    a4);
  return &loc_1800ECA47;
}
