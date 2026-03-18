/*
 * XREFs of ?PowerPolWaitingUnarmedQueryIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00199E0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryReturnToIdle@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0019A38 (-QueryReturnToIdle@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWaitingUnarmedQueryIdle(FxPkgPnp *This)
{
  return FxPowerIdleMachine::QueryReturnToIdle(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine) != 0
       ? 1288
       : 1290;
}
