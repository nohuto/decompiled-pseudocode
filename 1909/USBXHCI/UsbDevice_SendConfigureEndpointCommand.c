/*
 * XREFs of UsbDevice_SendConfigureEndpointCommand @ 0x1C00060FC
 * Callers:
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0005190 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C00062F4 (UsbDevice_SetConfigureRequestStatus.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 */

_UNKNOWN **__fastcall UsbDevice_SendConfigureEndpointCommand(__int64 a1, int a2)
{
  __int64 v3; // rsi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 (__fastcall *v8)(__int64, int); // rcx
  __int64 v9; // rcx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  v3 = a1 + 456;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  v5 = 0;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 16);
  else
    v7 = 0LL;
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 != 1 )
    {
      UsbDevice_SetConfigureRequestStatus(a1, 3221225701LL);
      return UsbDevice_QueueConfigureEndpointEvent(v9, 2LL);
    }
    v8 = UsbDevice_DropEndpointsCompletion;
  }
  else
  {
    v8 = (__int64 (__fastcall *)(__int64, int))UsbDevice_EndpointsConfigureCompletion;
  }
  *(_QWORD *)(a1 + 496) = v8;
  v11 = *(_DWORD *)(a1 + 492) & 0xFFFF31FF;
  *(_QWORD *)(a1 + 504) = a1;
  *(_DWORD *)(a1 + 492) = v11 | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  v12 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v12 )
    v13 = *(_QWORD *)(v12 + 24);
  else
    v13 = 0LL;
  *(_QWORD *)(a1 + 480) = v13;
  *(_QWORD *)(a1 + 528) = v7;
  v14 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v14 )
    v5 = *(_DWORD *)(v14 + 44);
  v15 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 536) = v5;
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  return (_UNKNOWN **)Command_SendCommand(*(_QWORD *)(v15 + 144), v3);
}
