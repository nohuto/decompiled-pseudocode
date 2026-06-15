/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800632CC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001120 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1801B83A0 = 0LL;
  stru_1801B8398.Ptr = 0LL;
  byte_1801B83A8 = 0;
  unk_1801B83B0 = 0LL;
  xmmword_1801B83C0 = 0LL;
  xmmword_1801B83D0 = 0LL;
  xmmword_1801B83E0 = 0LL;
  xmmword_1801B83F0 = 0LL;
  return result;
}
