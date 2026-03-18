/*
 * XREFs of Controller_RemoveDeviceFromControllerDeviceList @ 0x1C0010018
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C003AD70 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_RemoveDeviceFromControllerDeviceList(__int64 a1, __int64 a2, _QWORD *a3)
{
  KIRQL v6; // al
  __int64 v7; // r9
  _QWORD *v8; // r8

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  v7 = *a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v8 = (_QWORD *)a3[1], (_QWORD *)*v8 != a3) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  --*(_DWORD *)(a1 + 64);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v6);
  (*(void (__fastcall **)(unsigned __int64, __int64, void (__fastcall *)(__int64, __int64, _QWORD *), __int64, const char *))(WdfFunctions_01023 + 1648))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    Controller_AddDeviceToControllerDeviceList,
    7400LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void (__fastcall *)(__int64, __int64, _QWORD *), __int64, const char *))(WdfFunctions_01023 + 1648))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(a1 + 8),
           Controller_AddDeviceToControllerDeviceList,
           7408LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
}
