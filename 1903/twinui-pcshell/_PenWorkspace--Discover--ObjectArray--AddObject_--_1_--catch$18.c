/*
 * XREFs of _PenWorkspace::Discover::ObjectArray::AddObject_::_1_::catch$18 @ 0x1801DBACD
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180114540 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall PenWorkspace::Discover::ObjectArray::AddObject_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x21,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ObjectArray.h",
    a4);
  return &loc_1801DBAB6;
}
