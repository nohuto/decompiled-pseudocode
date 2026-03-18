/*
 * XREFs of UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C0005CBC
 * Callers:
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C00053F0 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C00054AC (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int i; // esi
  __int64 v4; // rax
  unsigned int v5; // edx

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); v1 = v5 )
  {
    v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * i),
           off_1C00561A8);
    v5 = v1 + 1;
    if ( *(_DWORD *)(v4 + 1352) != 2 )
      v5 = v1;
    ++i;
  }
  return v1;
}
