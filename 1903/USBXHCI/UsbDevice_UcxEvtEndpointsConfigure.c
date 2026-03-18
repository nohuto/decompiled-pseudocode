/*
 * XREFs of UsbDevice_UcxEvtEndpointsConfigure @ 0x1C003C9C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 */

_UNKNOWN **__fastcall UsbDevice_UcxEvtEndpointsConfigure(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  char v5; // zf
  _QWORD v7[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  LOWORD(v7[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v7);
  *(_WORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              a2,
              off_1C0056090) = 0;
  v3 = v7[1];
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v7[1] + 16LL),
         off_1C00562C0);
  Debug_FreAssertMsg(
    (__int64)"Invalid parameter",
    v4 != 0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    4458);
  *(_QWORD *)(v4 + 440) = a2;
  *(_QWORD *)(v4 + 592) = v3;
  *(_DWORD *)(v4 + 448) = 259;
  v5 = *(_DWORD *)(v4 + 600) == 0;
  *(_BYTE *)(v4 + 432) = *(_DWORD *)(v3 + 24) == 0;
  Debug_FreAssertMsg(
    (__int64)"Initial state must be ConfigureEndpoint_Uninitialized",
    v5,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    4466);
  return UsbDevice_QueueConfigureEndpointEvent(v4, 5LL);
}
