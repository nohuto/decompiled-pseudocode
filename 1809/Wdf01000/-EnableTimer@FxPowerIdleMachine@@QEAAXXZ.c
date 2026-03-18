/*
 * XREFs of ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x1C001A1B0
 * Callers:
 *     ?PowerPolStartedIdleCapable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001A190 (-PowerPolStartedIdleCapable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0011B20 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPowerIdleMachine::EnableTimer(FxPowerIdleMachine *this)
{
  KIRQL v2; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventEnabled);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v2);
}
