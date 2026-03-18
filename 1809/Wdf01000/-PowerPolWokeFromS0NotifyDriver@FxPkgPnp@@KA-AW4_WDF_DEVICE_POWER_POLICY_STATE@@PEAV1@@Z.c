/*
 * XREFs of ?PowerPolWokeFromS0NotifyDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolWokeFromS0NotifyDriver(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v4; // rdx

  m_DeviceBase = This->m_DeviceBase;
  m_Method = This->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromS0Triggered.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v4 = 0LL;
    m_Method((WDFDEVICE__ *)v4);
  }
  return 1346LL;
}
