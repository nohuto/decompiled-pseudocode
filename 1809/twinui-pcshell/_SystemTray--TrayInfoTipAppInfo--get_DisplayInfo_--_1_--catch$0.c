/*
 * XREFs of _SystemTray::TrayInfoTipAppInfo::get_DisplayInfo_::_1_::catch$0 @ 0x1802DC925
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall SystemTray::TrayInfoTipAppInfo::get_DisplayInfo_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x26,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfo.cpp",
                           a4);
  return &loc_1802DC91B;
}
