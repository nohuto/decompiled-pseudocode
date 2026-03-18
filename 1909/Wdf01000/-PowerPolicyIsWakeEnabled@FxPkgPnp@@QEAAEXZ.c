/*
 * XREFs of ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C00182C8
 * Callers:
 *     ?PowerPolSystemSleepFromDeviceWaitingUnarmed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00181F0 (-PowerPolSystemSleepFromDeviceWaitingUnarmed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0018220 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C00182F0 (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 */

bool __fastcall FxPkgPnp::PowerPolicyIsWakeEnabled(FxPkgPnp *this)
{
  return this->m_PowerPolicyMachine.m_Owner && FxPkgPnp::PowerPolicyGetCurrentWakeReason(this);
}
