/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800474D0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1800AC130 = 0LL;
  qword_1800AC128 = 0LL;
  byte_1800AC138 = 0;
  xmmword_1800AC140 = 0LL;
  xmmword_1800AC150 = 0LL;
  xmmword_1800AC160 = 0LL;
  xmmword_1800AC170 = 0LL;
  xmmword_1800AC180 = 0LL;
  return result;
}
