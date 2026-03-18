/*
 * XREFs of ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C00878EC
 * Callers:
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C0081964 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00819CC (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0081A64 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C0081A9C (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0012380 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPowerIdleMachine::ProcessPowerEvent(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  KIRQL v4; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(this, Event);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v4);
}
