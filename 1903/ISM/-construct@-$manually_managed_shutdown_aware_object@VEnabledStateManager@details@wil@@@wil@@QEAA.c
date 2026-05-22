/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18002B258
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
  qword_1801E0DA0 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1801E0DA8 = 0;
  unk_1801E0DB0 = 0LL;
  xmmword_1801E0DC0 = 0LL;
  xmmword_1801E0DD0 = 0LL;
  xmmword_1801E0DE0 = 0LL;
  xmmword_1801E0DF0 = 0LL;
  return result;
}
