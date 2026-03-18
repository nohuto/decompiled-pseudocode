/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveInformation @ 0x1C006DD30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002F8AC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceRetrieveInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_USB_DEVICE_INFORMATION *Information)
{
  FxUsbDevice *v4; // rdx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  v4 = pUsbDevice;
  if ( !Information )
    FxVerifierNullBugCheck(pUsbDevice->m_Globals, retaddr);
  if ( Information->Size == 20 )
  {
    Information->Traits = pUsbDevice->m_Traits;
    Information->HcdPortCapabilities = v4->m_HcdPortCapabilities;
    Information->UsbdVersionInformation = v4->m_UsbdVersionInformation;
    return 0LL;
  }
  else
  {
    WPP_IFR_SF_DDd(
      pUsbDevice->m_Globals,
      (unsigned __int8)pUsbDevice,
      0xEu,
      0xBu,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      Information->Size,
      20,
      -1073741820);
    return 3221225476LL;
  }
}
