/*
 * XREFs of ?PowerPolS0NoWakePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0014F70
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C00150A8 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x1C0015CB0 (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolS0NoWakePowerUp(FxPkgPnp *This)
{
  int v2; // eax
  unsigned int v3; // ecx

  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  v2 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, PowerDeviceD0, Retry);
  v3 = 1467;
  if ( v2 < 0 )
    return 1389;
  return v3;
}
