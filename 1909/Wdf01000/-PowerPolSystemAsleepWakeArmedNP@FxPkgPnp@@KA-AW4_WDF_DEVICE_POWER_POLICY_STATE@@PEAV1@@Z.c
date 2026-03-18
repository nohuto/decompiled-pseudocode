/*
 * XREFs of ?PowerPolSystemAsleepWakeArmedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B600
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C008C600 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemAsleepWakeArmedNP(FxPkgPnp *This)
{
  FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(This);
  return 1467LL;
}
