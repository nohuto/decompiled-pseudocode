/*
 * XREFs of ?PowerPolDeviceIdleSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0016FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x1C0017104 (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolDeviceIdleSleeping(FxPkgPnp *This)
{
  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1387LL;
}
