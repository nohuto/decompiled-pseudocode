/*
 * XREFs of UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C00064B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 */

_UNKNOWN **__fastcall UsbDevice_StopEndpointToOffloadedEndpointCompletion(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rcx

  LOBYTE(a2) = *(_BYTE *)(a1 + 60) == 1;
  Debug_FreAssertMsg(
    "Stop Endpoint cannot fail while issued on an offloaded endpoint",
    a2,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    2919LL);
  result = *(_UNKNOWN ***)(a1 + 48);
  v4 = (__int64)result[2];
  if ( (*(_DWORD *)(v4 + 580))-- == 1 )
    return UsbDevice_QueueConfigureEndpointEvent(v4, 1LL);
  return result;
}
