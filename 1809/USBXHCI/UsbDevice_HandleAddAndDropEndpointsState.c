/*
 * XREFs of UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0004240
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0004770 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005134 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C000532C (UsbDevice_SetConfigureRequestStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0024DF0 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 */

__int64 __fastcall UsbDevice_HandleAddAndDropEndpointsState(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // edx
  int TransferRingSegmentsForOffload; // edi
  __int64 result; // rax
  __int64 v11; // rcx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 564LL) == 1 && (v4 = *(_QWORD *)(a2 + 88), v5 = 0, *(_DWORD *)(a2 + 84)) )
  {
    while ( 1 )
    {
      v6 = 0LL;
      if ( *(_DWORD *)(a2 + 24) )
      {
        while ( 1 )
        {
          v7 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v6),
                 off_1C004F180);
          if ( *(unsigned __int8 *)(v7 + 98) == *(_WORD *)(v4 + 4) )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 24) )
            goto LABEL_8;
        }
        TransferRingSegmentsForOffload = TR_ReAllocateTransferRingSegmentsForOffload(*(_QWORD *)(v7 + 88));
        if ( TransferRingSegmentsForOffload < 0 )
          break;
      }
LABEL_8:
      if ( (unsigned int)++v5 >= *(_DWORD *)(a2 + 84) )
        goto LABEL_9;
    }
    LOBYTE(v8) = 2;
    result = WPP_RECORDER_SF_dd(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
               v8,
               12,
               45,
               (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
               *(_BYTE *)(a1 + 135),
               TransferRingSegmentsForOffload);
  }
  else
  {
LABEL_9:
    result = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, a2, 0LL);
    TransferRingSegmentsForOffload = result;
    if ( (int)result >= 0 )
      result = UsbDevice_SendConfigureEndpointCommand(a1, 0LL);
  }
  while ( TransferRingSegmentsForOffload < 0 )
  {
    UsbDevice_SetConfigureRequestStatus(a1, (unsigned int)TransferRingSegmentsForOffload);
    result = UsbDevice_QueueConfigureEndpointEvent(v11, 2LL);
  }
  return result;
}
