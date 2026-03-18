/*
 * XREFs of ?PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AD70
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0019C30 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C008AE30 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWokeFromS0UsbSS(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner->m_IdleSettings.UsbSSCapable )
  {
    KeSetEvent((PRKEVENT)m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
    m_Owner = This->m_PowerPolicyMachine.m_Owner;
  }
  FxPowerIdleMachine::DisableTimer(&m_Owner->m_PowerIdleMachine);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1433 : 1361;
}
