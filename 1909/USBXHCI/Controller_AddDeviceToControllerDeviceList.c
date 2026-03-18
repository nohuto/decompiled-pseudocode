/*
 * XREFs of Controller_AddDeviceToControllerDeviceList @ 0x1C000D6A0
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0069E40 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_AddDeviceToControllerDeviceList(__int64 a1, __int64 a2, _QWORD *a3)
{
  KIRQL v6; // al
  _QWORD *v7; // rdx

  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(a1 + 8),
    Controller_AddDeviceToControllerDeviceList,
    7343LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  (*(void (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    Controller_AddDeviceToControllerDeviceList,
    7351LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  v7 = *(_QWORD **)(a1 + 56);
  if ( *v7 != a1 + 48 )
    __fastfail(3u);
  *a3 = a1 + 48;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a1 + 56) = a3;
  ++*(_DWORD *)(a1 + 64);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v6);
}
