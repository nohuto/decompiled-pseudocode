/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber @ 0x1C006BE50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        unsigned int *CurrentFrameNumber)
{
  int (__fastcall *m_QueryBusTime)(void *, unsigned int *); // rax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  if ( !CurrentFrameNumber )
    FxVerifierNullBugCheck(pUsbDevice->m_Globals, retaddr);
  m_QueryBusTime = pUsbDevice->m_QueryBusTime;
  if ( m_QueryBusTime )
    return ((__int64 (__fastcall *)(void *, unsigned int *))m_QueryBusTime)(
             pUsbDevice->m_BusInterfaceContext,
             CurrentFrameNumber);
  else
    return 3221225473LL;
}
