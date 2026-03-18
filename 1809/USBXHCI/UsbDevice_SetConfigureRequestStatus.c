/*
 * XREFs of UsbDevice_SetConfigureRequestStatus @ 0x1C000532C
 * Callers:
 *     UsbDevice_DropEndpointsCompletion @ 0x1C0004190 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0004240 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0004488 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005134 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0005400 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0035400 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbDevice_SetConfigureRequestStatus(__int64 a1, int a2)
{
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = a2;
}
