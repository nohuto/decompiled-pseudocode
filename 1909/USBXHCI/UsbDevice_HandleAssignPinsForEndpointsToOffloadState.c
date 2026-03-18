/*
 * XREFs of UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C00052CC
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_SetResourceAssignment @ 0x1C0006310 (UsbDevice_SetResourceAssignment.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 */

__int64 __fastcall UsbDevice_HandleAssignPinsForEndpointsToOffloadState(__int64 a1, __int64 a2)
{
  int v2; // r14d
  unsigned int v3; // ebp
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int *v6; // rdi
  __int64 i; // rsi
  __int64 v9; // rax
  __int64 v10; // r15

  v2 = 0;
  *(_DWORD *)(a1 + 580) = *(_DWORD *)(a2 + 84);
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 84);
  v5 = a2;
  v6 = *(unsigned int **)(a2 + 88);
  if ( v4 )
  {
    do
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 24); i = (unsigned int)(i + 1) )
      {
        v9 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * i),
               off_1C00561A8);
        v10 = v9;
        if ( *(unsigned __int8 *)(v9 + 98) == *((_WORD *)v6 + 2) )
        {
          ++v2;
          if ( *(_DWORD *)(v9 + 1352) )
            Debug_FreAssertMsg(
              "Invalid endpoint offload state before marking it as pending",
              0LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
              1240LL);
          else
            *(_DWORD *)(v9 + 1352) = 1;
          UsbDevice_SetResourceAssignment(a1, v10, *(unsigned int *)((char *)v6 + 6));
        }
      }
      ++v3;
      v6 = (unsigned int *)((char *)v6 + *v6);
      v4 = *(_DWORD *)(v5 + 84);
    }
    while ( v3 < v4 );
  }
  LOBYTE(a2) = v2 == v4;
  return Debug_FreAssertMsg(
           "Mismatch encountered in AssignPinsForEndpointsToOffloadState",
           a2,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
           3786LL);
}
