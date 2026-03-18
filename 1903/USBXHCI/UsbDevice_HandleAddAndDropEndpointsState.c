/*
 * XREFs of UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0005190
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C00056D8 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C00060FC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C00062F4 (UsbDevice_SetConfigureRequestStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0029540 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 */

_UNKNOWN **__fastcall UsbDevice_HandleAddAndDropEndpointsState(__int64 a1, __int64 a2)
{
  unsigned int *v4; // rbp
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // edx
  int TransferRingSegmentsForOffload; // edi
  _UNKNOWN **result; // rax
  __int64 v11; // rcx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 628LL) == 1 && (v4 = *(unsigned int **)(a2 + 88), v5 = 0, *(_DWORD *)(a2 + 84)) )
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
                 off_1C00561A8);
          if ( *(unsigned __int8 *)(v7 + 98) == *((_WORD *)v4 + 2) )
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
      ++v5;
      v4 = (unsigned int *)((char *)v4 + *v4);
      if ( v5 >= *(_DWORD *)(a2 + 84) )
        goto LABEL_9;
    }
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      result = (_UNKNOWN **)WPP_RECORDER_SF_dd(
                              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                              v8,
                              12,
                              45,
                              (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
                              *(_BYTE *)(a1 + 135),
                              TransferRingSegmentsForOffload);
    }
  }
  else
  {
LABEL_9:
    result = (_UNKNOWN **)UsbDevice_InitializeInputContextForAddDropEndpoints(a1, a2, 0LL);
    TransferRingSegmentsForOffload = (int)result;
    if ( (int)result >= 0 )
      result = (_UNKNOWN **)UsbDevice_SendConfigureEndpointCommand(a1, 0LL);
  }
  while ( TransferRingSegmentsForOffload < 0 )
  {
    UsbDevice_SetConfigureRequestStatus(a1, (unsigned int)TransferRingSegmentsForOffload);
    result = (_UNKNOWN **)UsbDevice_QueueConfigureEndpointEvent(v11, 2LL);
  }
  return result;
}
