/*
 * XREFs of _SystemTray::TrayInfoTipAppInfoProvider::FindAppInfo_::_1_::catch$2 @ 0x1802DB040
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall SystemTray::TrayInfoTipAppInfoProvider::FindAppInfo_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 408),
                           (void *)0x24,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfoprovider.cpp",
                           a4);
  return &loc_1802DB019;
}
