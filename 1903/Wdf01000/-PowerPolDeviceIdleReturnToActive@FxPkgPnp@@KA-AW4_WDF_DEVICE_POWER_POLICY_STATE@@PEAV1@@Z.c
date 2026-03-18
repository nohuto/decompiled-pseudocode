/*
 * XREFs of ?PowerPolDeviceIdleReturnToActive@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A740
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x1C0015CB0 (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolDeviceIdleReturnToActive(FxPkgPnp *This)
{
  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1382LL;
}
