/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800642BC
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
  qword_1801B73A0 = 0LL;
  stru_1801B7398.Ptr = 0LL;
  byte_1801B73A8 = 0;
  unk_1801B73B0 = 0LL;
  xmmword_1801B73C0 = 0LL;
  xmmword_1801B73D0 = 0LL;
  xmmword_1801B73E0 = 0LL;
  xmmword_1801B73F0 = 0LL;
  return result;
}
