/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180088F70
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
  qword_1805C1D60 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1805C1D68 = 0;
  unk_1805C1D70 = 0LL;
  xmmword_1805C1D80 = 0LL;
  xmmword_1805C1D90 = 0LL;
  xmmword_1805C1DA0 = 0LL;
  xmmword_1805C1DB0 = 0LL;
  return result;
}
