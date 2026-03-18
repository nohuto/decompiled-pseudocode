/*
 * XREFs of UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C00054E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 */

__int64 __fastcall UsbDevice_StopEndpointToOffloadedEndpointCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  LOBYTE(a2) = *(_BYTE *)(a1 + 60) == 1;
  Debug_FreAssertMsg(
    "Stop Endpoint cannot fail while issued on an offloaded endpoint",
    a2,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    2894LL);
  result = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(result + 16);
  if ( (*(_DWORD *)(v4 + 576))-- == 1 )
    return UsbDevice_QueueConfigureEndpointEvent(v4, 1LL);
  return result;
}
