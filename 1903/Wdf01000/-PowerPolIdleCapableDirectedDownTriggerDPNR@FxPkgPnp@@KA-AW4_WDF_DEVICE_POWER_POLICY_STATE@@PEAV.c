/*
 * XREFs of ?PowerPolIdleCapableDirectedDownTriggerDPNR@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0090FA8 (-SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolIdleCapableDirectedDownTriggerDPNR(FxPkgPnp *This)
{
  FxPoxInterface::SimulateDevicePowerNotRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1467LL;
}
