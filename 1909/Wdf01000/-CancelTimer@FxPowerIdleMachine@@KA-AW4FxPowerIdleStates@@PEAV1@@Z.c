/*
 * XREFs of ?CancelTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0087840
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C00199C0 (-CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::CancelTimer(FxPowerIdleMachine *This)
{
  return FxPowerIdleMachine::CancelIdleTimer(This) != 0 ? 6 : 28;
}
