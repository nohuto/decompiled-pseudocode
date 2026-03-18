/*
 * XREFs of ?PowerPolTimerExpiredDecideUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A580
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C0016F3C (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredDecideUsbSS(FxPkgPnp *This)
{
  if ( (int)FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) >= 0 )
    return This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable != 0 ? 1333 : 1331;
  else
    return 1413LL;
}
