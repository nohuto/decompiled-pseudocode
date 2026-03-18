/*
 * XREFs of ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C0086728
 * Callers:
 *     ?CancelTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0086760 (-CancelTimer@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?Disabling@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0086780 (-Disabling@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C001A360 (-Stop@MxTimer@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall FxPowerIdleMachine::CancelIdleTimer(FxPowerIdleMachine *this)
{
  if ( !MxTimer::Stop(&this->m_PowerTimeoutTimer) )
    return 0;
  this->m_Flags &= ~8u;
  return 1;
}
