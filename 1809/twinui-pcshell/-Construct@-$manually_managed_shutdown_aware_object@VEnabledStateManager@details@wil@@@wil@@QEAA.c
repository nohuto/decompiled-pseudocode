/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180083738
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001050 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_18050F300 = 0LL;
  qword_18050F2F8 = 0LL;
  byte_18050F308 = 0;
  unk_18050F310 = 0LL;
  xmmword_18050F320 = 0LL;
  xmmword_18050F330 = 0LL;
  xmmword_18050F340 = 0LL;
  xmmword_18050F350 = 0LL;
  return result;
}
