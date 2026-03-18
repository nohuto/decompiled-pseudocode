/*
 * XREFs of ?PowerEnableWakeAtBusOverload@FxPkgPdo@@EEAAJXZ @ 0x1C001A100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPdo::PowerEnableWakeAtBusOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _SYSTEM_POWER_STATE); // rax
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v5; // rcx
  int v6; // edx
  FxDeviceBase *v7; // rax
  __int64 v8; // rcx

  m_DeviceBase = this->m_DeviceBase;
  m_Method = this->m_DeviceEnableWakeAtBus.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    v6 = m_Method((WDFDEVICE__ *)v5, (_SYSTEM_POWER_STATE)this->m_SystemPowerState);
  }
  else
  {
    v6 = 0;
  }
  if ( v6 >= 0 )
  {
    v7 = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 1;
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v7[1].m_ObjectFlags + 648LL) + 880LL);
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 520));
  }
  return (unsigned int)v6;
}
