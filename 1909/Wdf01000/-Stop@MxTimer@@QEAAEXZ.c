/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x1C00199F0
 * Callers:
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000B13C (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     imp_WdfTimerStop @ 0x1C000BB60 (imp_WdfTimerStop.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011710 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011CC0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C00199C0 (-CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0055F40 (-Stop@FxTimer@@QEAAEE@Z.c)
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
