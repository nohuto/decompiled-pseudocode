/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800EB2E4
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
  qword_180308500 = 0LL;
  stru_1803084F8.Ptr = 0LL;
  byte_180308508 = 0;
  unk_180308510 = 0LL;
  xmmword_180308520 = 0LL;
  xmmword_180308530 = 0LL;
  xmmword_180308540 = 0LL;
  xmmword_180308550 = 0LL;
  return result;
}
