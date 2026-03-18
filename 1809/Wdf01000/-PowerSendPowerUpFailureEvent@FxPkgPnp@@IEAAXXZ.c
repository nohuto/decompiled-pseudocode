/*
 * XREFs of ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C0080D9C
 * Callers:
 *     ?PowerInitialPowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080890 (-PowerInitialPowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerReportPowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080C00 (-PowerReportPowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0010E80 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007E428 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C008682C (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerSendPowerUpFailureEvent(FxPkgPnp *this)
{
  unsigned __int8 v2; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  unsigned __int8 v4; // r8

  this->m_InternalFailure = 1;
  IoInvalidateDeviceState(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerUpFailed);
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpFailed, v2);
  if ( !this->m_ReleaseHardwareAfterDescendantsOnFailure )
    FxPkgPnp::PnpProcessEvent(this, PnpEventPowerUpFailed, v4);
}
