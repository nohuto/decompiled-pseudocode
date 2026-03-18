/*
 * XREFs of imp_WdfDeviceGetDriver @ 0x1C0049B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFDRIVER__ *__fastcall imp_WdfDeviceGetDriver(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxDriver *m_Driver; // rax
  unsigned __int16 m_ObjectSize; // cx
  WDFDRIVER__ *result; // rax
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Driver = pDevice->m_Driver;
  m_ObjectSize = m_Driver->m_ObjectSize;
  result = (WDFDRIVER__ *)((unsigned __int64)m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    return 0LL;
  return result;
}
