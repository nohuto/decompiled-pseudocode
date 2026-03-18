/*
 * XREFs of imp_WdfUsbInterfaceGetDescriptor @ 0x1C006C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfUsbInterfaceGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 SettingIndex,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  unsigned __int8 iInterface; // al
  _USB_INTERFACE_DESCRIPTOR *v7; // rax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  FxUsbInterface *pUsbInterface; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  if ( !InterfaceDescriptor )
    FxVerifierNullBugCheck(pUsbInterface->m_Globals, retaddr);
  if ( SettingIndex < pUsbInterface->m_NumSettings )
  {
    _mm_lfence();
    v7 = pUsbInterface->m_Settings[SettingIndex].InterfaceDescriptor;
    *(_QWORD *)&InterfaceDescriptor->bLength = *(_QWORD *)&v7->bLength;
    iInterface = v7->iInterface;
  }
  else
  {
    iInterface = 0;
    *(_QWORD *)&InterfaceDescriptor->bLength = 0LL;
  }
  InterfaceDescriptor->iInterface = iInterface;
}
