/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeInterruptArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BE40
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C008C470 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeInterruptArrived(FxPkgPnp *This)
{
  __int64 result; // rax

  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1467LL;
  result = 1350LL;
  if ( !This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped )
    return 1467LL;
  return result;
}
