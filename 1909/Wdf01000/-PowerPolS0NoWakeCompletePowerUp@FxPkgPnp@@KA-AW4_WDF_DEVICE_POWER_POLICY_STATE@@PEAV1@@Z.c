/*
 * XREFs of ?PowerPolS0NoWakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0015170
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011100 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0015A20 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?NotifyDeviceDirectedPoweredUp@FxPoxInterface@@QEAAXXZ @ 0x1C0015C50 (-NotifyDeviceDirectedPoweredUp@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolS0NoWakeCompletePowerUp(FxPkgPnp *This)
{
  FxPoxInterface::NotifyDeviceDirectedPoweredUp(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPkgPnp::PowerProcessEvent(This, 0x800u, 0);
  return 1467LL;
}
