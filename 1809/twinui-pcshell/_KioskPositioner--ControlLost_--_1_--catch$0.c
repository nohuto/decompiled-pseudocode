/*
 * XREFs of _KioskPositioner::ControlLost_::_1_::catch$0 @ 0x180097656
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EFCAC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall KioskPositioner::ControlLost_::_1_::catch_0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x314,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
    a4);
  return &loc_180097651;
}
