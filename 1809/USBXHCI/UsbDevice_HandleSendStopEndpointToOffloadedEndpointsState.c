/*
 * XREFs of UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0004488
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C0004D04 (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0005284 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C000532C (UsbDevice_SetConfigureRequestStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 */

__int64 __fastcall UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx

  result = UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(a2);
  v5 = 0LL;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 576) = result;
    if ( *(_DWORD *)(a2 + 40) )
    {
      do
      {
        result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v5),
                   off_1C004F180);
        if ( *(_DWORD *)(result + 1352) == 2 )
          result = UsbDevice_SendStopEndpointToOffloadedEndpoint(a1, result);
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(_DWORD *)(a2 + 40) );
    }
  }
  else
  {
    Debug_FreAssertMsg(
      "Unexpected numberOfOffloadedEndpointsInDropEndpointsList in UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
      2992LL);
    UsbDevice_SetConfigureRequestStatus(a1, 3221225701LL);
    return UsbDevice_QueueConfigureEndpointEvent(v6, 2LL);
  }
  return result;
}
