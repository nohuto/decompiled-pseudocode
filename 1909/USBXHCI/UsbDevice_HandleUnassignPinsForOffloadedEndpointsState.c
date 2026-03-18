/*
 * XREFs of UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C00054AC
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C0005CBC (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0006310 (UsbDevice_SetResourceAssignment.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 */

__int64 __fastcall UsbDevice_HandleUnassignPinsForOffloadedEndpointsState(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  int v7; // ebp
  unsigned int i; // edi
  __int64 v9; // rax

  v2 = a2;
  v4 = 0;
  LOBYTE(a2) = *(_DWORD *)(a2 + 40) != 0;
  Debug_FreAssertMsg(
    "Unexpected EndpointsToDisableCount",
    a2,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    3704LL);
  v5 = UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(v2);
  *(_DWORD *)(a1 + 580) = v5;
  v7 = v5;
  for ( i = 0; i < *(_DWORD *)(v2 + 40); ++i )
  {
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(*(_QWORD *)(v2 + 48) + 8LL * i),
           off_1C00561A8);
    if ( *(_DWORD *)(v9 + 1352) == 2 )
    {
      ++v4;
      UsbDevice_SetResourceAssignment(a1, v9, 0LL);
    }
  }
  LOBYTE(v6) = v4 == v7;
  return Debug_FreAssertMsg(
           "Mismatch encountered in UnassignPinsForOffloadedEndpointsState",
           v6,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
           3728LL);
}
