/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004DF2C
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
  qword_1800DBFF0 = 0LL;
  qword_1800DBFE8 = 0LL;
  byte_1800DBFF8 = 0;
  xmmword_1800DC000 = 0LL;
  xmmword_1800DC010 = 0LL;
  xmmword_1800DC020 = 0LL;
  xmmword_1800DC030 = 0LL;
  xmmword_1800DC040 = 0LL;
  return result;
}
