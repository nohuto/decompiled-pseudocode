/*
 * XREFs of ?PowerPolTimerExpiredNoWakeUndoPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0015A20 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?NotifyDeviceDirectedPoweredDown@FxPoxInterface@@QEAAXXZ @ 0x1C0090F68 (-NotifyDeviceDirectedPoweredDown@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWakeUndoPowerDown(FxPkgPnp *This)
{
  __int64 result; // rax

  FxPoxInterface::NotifyDeviceDirectedPoweredDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  result = 1435LL;
  if ( !_InterlockedCompareExchange(
          &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DirectedTransitionActive,
          0,
          0) )
    return 1426LL;
  return result;
}
