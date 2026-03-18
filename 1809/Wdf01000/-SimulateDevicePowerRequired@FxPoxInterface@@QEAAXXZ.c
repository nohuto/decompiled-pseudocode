/*
 * XREFs of ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0015704
 * Callers:
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0015480 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?PowerPolSystemWakeDeviceWakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A330 (-PowerPolSystemWakeDeviceWakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 * Callees:
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C0014F9C (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::SimulateDevicePowerRequired(FxPoxInterface *this)
{
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    FxPoxInterface::PowerRequiredCallbackWorker(this, 0);
}
