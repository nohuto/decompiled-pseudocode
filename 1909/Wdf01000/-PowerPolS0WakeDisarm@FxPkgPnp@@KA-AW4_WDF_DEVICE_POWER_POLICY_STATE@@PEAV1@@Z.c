/*
 * XREFs of ?PowerPolS0WakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0015A20 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?NotifyDeviceDirectedPoweredUp@FxPoxInterface@@QEAAXXZ @ 0x1C0015C50 (-NotifyDeviceDirectedPoweredUp@FxPoxInterface@@QEAAXXZ.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003A1F0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolS0WakeDisarm(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // cx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int64 v5; // r8

  FxPoxInterface::NotifyDeviceDirectedPoweredUp(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  if ( FxDevice::IsPdo(This->m_Device) )
  {
    This->PowerDisableWakeAtBusOverload(This);
    m_DeviceBase = This->m_DeviceBase;
  }
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  m_Method = This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0.m_Method;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    m_Method((WDFDEVICE__ *)v5);
  }
  return 1347LL;
}
