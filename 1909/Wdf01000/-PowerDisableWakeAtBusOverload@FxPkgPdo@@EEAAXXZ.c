/*
 * XREFs of ?PowerDisableWakeAtBusOverload@FxPkgPdo@@EEAAXXZ @ 0x1C008E6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPdo::PowerDisableWakeAtBusOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  __int64 v2; // rax
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v5; // r8

  if ( this->m_EnableWakeAtBusInvoked )
  {
    m_DeviceBase = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 0;
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 648LL) + 888LL);
    if ( v2 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 528));
      m_DeviceBase = this->m_DeviceBase;
    }
    m_Method = this->m_DeviceDisableWakeAtBus.m_Method;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( m_Method )
    {
      v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v5 = 0LL;
      m_Method((WDFDEVICE__ *)v5);
    }
  }
}
