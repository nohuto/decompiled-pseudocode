/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005FCA0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001110 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  pti = 0LL;
  stru_1801B3328.Ptr = 0LL;
  byte_1801B3338 = 0;
  unk_1801B3340 = 0LL;
  xmmword_1801B3350 = 0LL;
  xmmword_1801B3360 = 0LL;
  xmmword_1801B3370 = 0LL;
  xmmword_1801B3380 = 0LL;
  return result;
}
