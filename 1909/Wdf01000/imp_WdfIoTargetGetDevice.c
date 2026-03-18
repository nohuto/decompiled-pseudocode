/*
 * XREFs of imp_WdfIoTargetGetDevice @ 0x1C0065E20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 */

WDFDEVICE__ *__fastcall imp_WdfIoTargetGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  FxIoTarget *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 FxVerboseOn; // cl
  FxDeviceBase *m_DeviceBase; // rbx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbx
  FxIoTarget *pTarget; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget);
  v3 = pTarget;
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
    FxVerboseOn = m_Globals->FxVerboseOn;
    v3 = pTarget;
  }
  else
  {
    FxVerboseOn = 0;
  }
  m_DeviceBase = v3->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a2 = 0LL;
  if ( FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, _a2);
  return (WDFDEVICE__ *)_a2;
}
