/*
 * XREFs of ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C0082B80
 * Callers:
 *     ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1C007BE90 (-QueryForPowerThread@FxPkgPdo@@EEAAJXZ.c)
 *     ?QueryForPowerThread@FxPkgFdo@@EEAAJXZ @ 0x1C0087350 (-QueryForPowerThread@FxPkgFdo@@EEAAJXZ.c)
 * Callees:
 *     ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1C0093124 (-ExitThread@FxSystemThread@@QEAAEXZ.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C009345C (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 */

int __fastcall FxPkgPnp::CreatePowerThread(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  _DEVICE_OBJECT *m_DeviceObject; // r9
  WDFDEVICE__ *v5; // r8
  int result; // eax
  FxSystemThread *v7; // rbx
  FxSystemThread *pThread; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  v5 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  result = FxSystemThread::_CreateAndInit(&pThread, this->m_Globals, v5, m_DeviceObject);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PowerThread, (signed __int64)pThread, 0LL) )
    {
      v7 = pThread;
      FxSystemThread::ExitThread(pThread);
      v7->DeleteObject(v7);
    }
    this->m_HasPowerThread = 1;
    return 0;
  }
  return result;
}
