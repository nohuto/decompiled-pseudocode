/*
 * XREFs of _UAPViewWrapper::v_OnWindowCreated_::_1_::catch$0 @ 0x18029388C
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180114540 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall UAPViewWrapper::v_OnWindowCreated_::_1_::catch_0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0xD3,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
    a4);
  return &loc_180293886;
}
