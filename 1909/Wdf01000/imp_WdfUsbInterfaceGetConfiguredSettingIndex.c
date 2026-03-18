/*
 * XREFs of imp_WdfUsbInterfaceGetConfiguredSettingIndex @ 0x1C006C870
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C00749C0 (-GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall imp_WdfUsbInterfaceGetConfiguredSettingIndex(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface)
{
  FxUsbInterface *pUsbInterface; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  return FxUsbInterface::GetConfiguredSettingIndex(pUsbInterface);
}
