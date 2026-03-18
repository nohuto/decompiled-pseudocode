/*
 * XREFs of ?PowerPolSystemWakeDeviceWakeInterruptFired@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A480
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C008AE70 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeInterruptFired(FxPkgPnp *This)
{
  __int64 result; // rax

  This->m_SystemWokenByWakeInterrupt = 1;
  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1433LL;
  result = 1303LL;
  if ( !This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped )
    return 1433LL;
  return result;
}
