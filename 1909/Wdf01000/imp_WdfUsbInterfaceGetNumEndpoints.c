/*
 * XREFs of imp_WdfUsbInterfaceGetNumEndpoints @ 0x1C006CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfUsbInterfaceGetNumEndpoints(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 SettingIndex)
{
  FxUsbInterface *pUsbInterface; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  if ( SettingIndex >= pUsbInterface->m_NumSettings )
    return 0;
  _mm_lfence();
  return pUsbInterface->m_Settings[SettingIndex].InterfaceDescriptor->bNumEndpoints;
}
