/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800E7C54
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
  qword_180339C70 = 0LL;
  qword_180339C68 = 0LL;
  byte_180339C78 = 0;
  xmmword_180339C80 = 0LL;
  xmmword_180339C90 = 0LL;
  xmmword_180339CA0 = 0LL;
  xmmword_180339CB0 = 0LL;
  xmmword_180339CC0 = 0LL;
  return result;
}
