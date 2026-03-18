/*
 * XREFs of ?PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0019C10
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0019C30 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer(FxPkgPnp *This)
{
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return 1289LL;
}
