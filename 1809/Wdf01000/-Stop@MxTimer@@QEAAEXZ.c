/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x1C001A360
 * Callers:
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000AECC (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     imp_WdfTimerStop @ 0x1C000B410 (imp_WdfTimerStop.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011120 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00116B0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0056580 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C0086728 (-CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall MxTimer::Stop(MxTimer *this)
{
  if ( this->m_Timer.m_IsExtTimer )
    return ExCancelTimer(this->m_Timer.m_KernelExTimer, 0LL);
  else
    return KeCancelTimer(&this->m_Timer.KernelTimer);
}
