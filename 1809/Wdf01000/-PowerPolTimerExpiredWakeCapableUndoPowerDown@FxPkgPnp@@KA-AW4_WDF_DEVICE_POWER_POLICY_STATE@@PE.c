/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableUndoPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C00156CC (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableUndoPowerDown(FxPkgPnp *This)
{
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1413LL;
}
