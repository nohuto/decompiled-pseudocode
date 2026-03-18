/*
 * XREFs of ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C001A040
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C008CEF0 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C008DA54 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptEnableThunk(FxInterrupt **SyncContext)
{
  FxInterrupt *v1; // rbx
  unsigned __int64 v3; // rdi
  FxDeviceBase *v4; // rdx
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // rdx
  int v7; // edi
  unsigned __int8 result; // al
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v11; // rdx

  v1 = *SyncContext;
  v3 = (unsigned __int64)*SyncContext ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*SyncContext)->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(*SyncContext);
    m_DeviceBase = v1->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v11 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v11 = 0LL;
    if ( !v1->m_ObjectSize )
      v3 = 0LL;
    v7 = v1->m_EvtInterruptEnable((WDFINTERRUPT__ *)v3, (WDFDEVICE__ *)v11);
    FxInterrupt::ReleaseLock(v1);
  }
  else
  {
    v4 = v1->m_DeviceBase;
    v5 = v4->m_ObjectSize;
    v6 = (unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v5 )
      v6 = 0LL;
    if ( !v1->m_ObjectSize )
      v3 = 0LL;
    v7 = v1->m_EvtInterruptEnable((WDFINTERRUPT__ *)v3, (WDFDEVICE__ *)v6);
  }
  result = 1;
  *((_DWORD *)SyncContext + 2) = v7;
  return result;
}
