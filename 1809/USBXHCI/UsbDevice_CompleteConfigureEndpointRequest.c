/*
 * XREFs of UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00040A4
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0038D40 (WPP_RECORDER_SF_dqqd.c)
 */

__int64 __fastcall UsbDevice_CompleteConfigureEndpointRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // r9d
  char v8; // al

  v2 = 0;
  LOBYTE(a2) = *(_QWORD *)(a1 + 440) != 0LL;
  Debug_FreAssertMsg(
    "Unexpected WdfRequest value",
    a2,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    2234LL);
  v4 = *(_QWORD *)(a1 + 440);
  v5 = *(_DWORD *)(a1 + 448);
  WPP_RECORDER_SF_dqqd(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), *(unsigned __int8 *)(a1 + 135), v6, v7);
  v8 = *(_BYTE *)(a1 + 432);
  *(_DWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_BYTE *)(a1 + 432) = 0;
  *(_BYTE *)(a1 + 452) = 0;
  if ( !v8 )
    v2 = v5;
  *(_DWORD *)(a1 + 448) = -1073741823;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v4,
           v2);
}
