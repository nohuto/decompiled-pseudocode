/*
 * XREFs of imp_WdfUsbTargetDeviceGetInterface @ 0x1C006D390
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 */

WDFUSBINTERFACE__ *__fastcall imp_WdfUsbTargetDeviceGetInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        unsigned __int8 InterfaceIndex)
{
  unsigned __int64 v5; // rax
  unsigned __int16 v6; // cx
  WDFUSBINTERFACE__ *result; // rax
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  if ( InterfaceIndex >= pUsbDevice->m_NumInterfaces )
  {
    v5 = 0LL;
  }
  else
  {
    _mm_lfence();
    v5 = (unsigned __int64)pUsbDevice->m_Interfaces[InterfaceIndex];
  }
  if ( v5 )
  {
    v6 = *(_WORD *)(v5 + 10);
    result = (WDFUSBINTERFACE__ *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6 )
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_qdd(
      pUsbDevice->m_Globals,
      2u,
      0xEu,
      0x20u,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      UsbDevice,
      pUsbDevice->m_NumInterfaces,
      InterfaceIndex);
    return 0LL;
  }
  return result;
}
