/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800864F0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001050 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180599400 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_180599408 = 0;
  unk_180599410 = 0LL;
  xmmword_180599420 = 0LL;
  xmmword_180599430 = 0LL;
  xmmword_180599440 = 0LL;
  xmmword_180599450 = 0LL;
  return result;
}
