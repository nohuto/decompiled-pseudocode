/*
 * XREFs of ?PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BB30
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C0014EB4 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapablePowerDown(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCanIdlePowerDown(
           This,
           (_FX_DRIVER_GLOBALS *)(unsigned int)This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState) != 0
       ? 1467
       : 1338;
}
