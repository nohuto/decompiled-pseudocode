/*
 * XREFs of _KioskPositioner::DisplaySettingsChange_::_1_::catch$8 @ 0x180097A11
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall KioskPositioner::DisplaySettingsChange_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x36B,
                            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                            a4);
  return &loc_180097A04;
}
