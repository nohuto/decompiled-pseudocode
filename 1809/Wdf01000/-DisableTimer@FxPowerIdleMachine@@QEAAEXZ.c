/*
 * XREFs of ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0019C30
 * Callers:
 *     ?PowerPolStartedIdleCapableCancelTimerForSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0019BE0 (-PowerPolStartedIdleCapableCancelTimerForSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@P.c)
 *     ?PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0019C10 (-PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_.c)
 *     ?PowerPolStartedCancelTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089D00 (-PowerPolStartedCancelTimer@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartedWakeCapableCancelTimerForSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089D30 (-PowerPolStartedWakeCapableCancelTimerForSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@P.c)
 *     ?PowerPolStartedWakeCapableSleepingUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089D60 (-PowerPolStartedWakeCapableSleepingUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolStoppingCancelTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089F80 (-PowerPolStoppingCancelTimer@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A040 (-PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 *     ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A2C0 (-PowerPolSystemSleepNeedWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AB60 (-PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolWaitingArmedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008ABA0 (-PowerPolWaitingArmedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWakeFailedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008ACC0 (-PowerPolWakeFailedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AD70 (-PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0011B20 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

unsigned __int8 __fastcall FxPowerIdleMachine::DisableTimer(FxPowerIdleMachine *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  FxPowerIdleMachine *v2; // rbx
  KIRQL v3; // di

  p_m_Lock = &this->m_Lock.m_Lock;
  v2 = this;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(v2, PowerIdleEventDisabled);
  LOBYTE(v2) = (v2->m_Flags & 8) == 0;
  KeReleaseSpinLock(p_m_Lock, v3);
  return (unsigned __int8)v2;
}
