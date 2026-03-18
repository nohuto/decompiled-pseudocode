/*
 * XREFs of ?PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BB60
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C008C470 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelWaitWake(This) != 0 ? 1467 : 1354;
}
