/*
 * XREFs of UsbDevice_SetResourceAssignmentCompletion @ 0x1C0005400
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C000532C (UsbDevice_SetConfigureRequestStatus.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C000C778 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 */

void __fastcall UsbDevice_SetResourceAssignmentCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 16);
  --*(_DWORD *)(v3 + 576);
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( *(_DWORD *)(v3 + 592) == 8 )
    {
      v4 = *(_DWORD *)(v2 + 1352);
      if ( v4 == 2 )
      {
        Debug_FreAssertMsg(
          "Endpoint is already offloaded",
          0LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
          1261LL);
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)v2 + 564LL) == 2 )
        {
          LOBYTE(a2) = v4 == 1;
          Debug_FreAssertMsg(
            "Invalid current offload state",
            a2,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
            1268LL);
        }
        *(_DWORD *)(v2 + 1352) = 2;
        Controller_IncrementNumberOfEndpointsOffloaded();
      }
    }
  }
  else
  {
    UsbDevice_SetConfigureRequestStatus(v3, -1073741823);
    *(_BYTE *)(v3 + 580) = 1;
  }
  if ( !*(_DWORD *)(v3 + 576) )
  {
    v5 = 1LL;
    if ( *(_BYTE *)(v3 + 580) )
      v5 = 2LL;
    UsbDevice_QueueConfigureEndpointEvent(v3, v5);
  }
}
