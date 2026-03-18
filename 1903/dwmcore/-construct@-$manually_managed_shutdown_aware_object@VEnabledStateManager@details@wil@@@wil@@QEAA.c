/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800E6DA4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001000 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_18033CB80 = 0LL;
  qword_18033CB78 = 0LL;
  byte_18033CB88 = 0;
  xmmword_18033CB90 = 0LL;
  xmmword_18033CBA0 = 0LL;
  xmmword_18033CBB0 = 0LL;
  xmmword_18033CBC0 = 0LL;
  xmmword_18033CBD0 = 0LL;
  return result;
}
