/*
 * XREFs of ?StartedPowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0086980
 * Callers:
 *     <none>
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C001A6A8 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::StartedPowerUp(FxPowerIdleMachine *This)
{
  FxPowerIdleMachine::SendD0Notification(This);
  return 5LL;
}
