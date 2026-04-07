/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004BC5C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001000 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1800D4FE0 = 0LL;
  qword_1800D4FD8 = 0LL;
  byte_1800D4FE8 = 0;
  xmmword_1800D4FF0 = 0LL;
  xmmword_1800D5000 = 0LL;
  xmmword_1800D5010 = 0LL;
  xmmword_1800D5020 = 0LL;
  xmmword_1800D5030 = 0LL;
  return result;
}
