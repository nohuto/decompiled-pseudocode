/*
 * XREFs of _GetRecordFromWnf_::_1_::catch$0 @ 0x18012586B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CA178 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall GetRecordFromWnf_::_1_::catch_0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x92,
                           (__int64)"internal\\avcore\\inc\\applicationspatialinformationwnf.h",
                           a4);
  return &loc_180125861;
}
