/*
 * XREFs of UsbDevice_SetConfigureRequestStatus @ 0x1C00062F4
 * Callers:
 *     UsbDevice_DropEndpointsCompletion @ 0x1C0005090 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0005190 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C00053F0 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C00060FC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C00063D0 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbDevice_SetConfigureRequestStatus(__int64 a1, int a2)
{
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = a2;
}
