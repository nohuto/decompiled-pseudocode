/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180047A50
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_18009BE40 = 0LL;
  qword_18009BE38 = 0LL;
  byte_18009BE48 = 0;
  xmmword_18009BE50 = 0LL;
  xmmword_18009BE60 = 0LL;
  xmmword_18009BE70 = 0LL;
  xmmword_18009BE80 = 0LL;
  xmmword_18009BE90 = 0LL;
  return result;
}
