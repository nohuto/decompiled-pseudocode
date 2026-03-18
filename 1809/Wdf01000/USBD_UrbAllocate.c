/*
 * XREFs of USBD_UrbAllocate @ 0x1C0092158
 * Callers:
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006E1CC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C006EC0C (-AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     ?AllocateUrb@FxUsbDeviceStringContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C0071A9C (-AllocateUrb@FxUsbDeviceStringContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C00723F0 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0074CD0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 */

__int64 __fastcall USBD_UrbAllocate(USBD_HANDLE__ *USBDHandle, _URB **Urb)
{
  char v2; // bp
  int v5; // edi
  __int64 (__fastcall *v6)(_QWORD); // rax
  _URB *PoolWithTag; // rax
  void (__fastcall *v8)(_QWORD); // rax

  v2 = 0;
  if ( !USBDHandle )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    v5 = -1073741811;
LABEL_33:
    if ( Urb )
      *Urb = 0LL;
    return (unsigned int)v5;
  }
  if ( Urb )
  {
    if ( *((_BYTE *)USBDHandle + 225) )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete is set, UsbdHandleInfo 0x%p\n", USBDHandle);
    }
    else
    {
      if ( *((int *)USBDHandle + 55) >= 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)USBDHandle + 55);
        v6 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 15);
        v2 = 1;
        if ( v6 )
        {
          v5 = v6(*((_QWORD *)USBDHandle + 6));
        }
        else
        {
          PoolWithTag = (_URB *)ExAllocatePoolWithTag(g_NonPagedPoolType, 0x98uLL, *((_DWORD *)USBDHandle + 16));
          *Urb = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, sizeof(_URB));
            v5 = 0;
          }
          else
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(0x4Du, 0, "Insufficient Memory to allocate URB\n");
            v5 = -1073741670;
          }
        }
        goto $__tryLabel_7;
      }
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->ReferenceCount must be 1 or higher 0x%p\n", USBDHandle);
    }
    v5 = -1073741436;
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDInternal_ReferenceHandle failed %x\n", -1073741436);
$__tryLabel_7:
    if ( v5 >= 0 )
      return (unsigned int)v5;
    if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)USBDHandle + 55, 0xFFFFFFFF) <= 1 )
    {
      if ( *((_BYTE *)USBDHandle + 225) )
      {
        v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 14);
        if ( v8 )
          v8(*((_QWORD *)USBDHandle + 6));
        ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
      }
      else if ( g_EnableDbgPrints )
      {
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
      }
    }
    goto LABEL_33;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
  return (unsigned int)-1073741811;
}
