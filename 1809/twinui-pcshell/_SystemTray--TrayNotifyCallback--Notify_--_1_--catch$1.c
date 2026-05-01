/*
 * XREFs of _SystemTray::TrayNotifyCallback::Notify_::_1_::catch$1 @ 0x1802DDECA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall SystemTray::TrayNotifyCallback::Notify_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 88) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x2F,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
                           a4);
  return &loc_1802DDEB1;
}
