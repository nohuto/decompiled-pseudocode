/*
 * XREFs of Isoch_MapTransfers @ 0x1C002E8DC
 * Callers:
 *     Isoch_CommonBufferCallback @ 0x1C002D790 (Isoch_CommonBufferCallback.c)
 *     Isoch_EP_StartMapping @ 0x1C002DFD0 (Isoch_EP_StartMapping.c)
 *     Isoch_EvtDmaCallback @ 0x1C002E120 (Isoch_EvtDmaCallback.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002F924 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002FC78 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0032900 (Isoch_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     TR_AttemptStateChange @ 0x1C00284E8 (TR_AttemptStateChange.c)
 *     Isoch_MappingLoop @ 0x1C002E9F0 (Isoch_MappingLoop.c)
 */

__int64 __fastcall Isoch_MapTransfers(__int64 a1, __int64 a2)
{
  char v2; // si
  int i; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v2 = a2;
  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = *(_QWORD *)(a1 + 56);
      LODWORD(v9) = i;
      LODWORD(v8) = *(_DWORD *)(v5 + 144);
      LODWORD(v7) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v5 + 80),
        5u,
        0xEu,
        0x43u,
        (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
        v7,
        v8,
        v9);
    }
    LOBYTE(a2) = v2;
    Isoch_MappingLoop(a1, a2);
    result = *(unsigned int *)(a1 + 108);
    if ( (_DWORD)result != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 344) )
      return result;
    result = TR_AttemptStateChange(a1, 2, 3);
    if ( (_DWORD)result != 2 )
      return result;
LABEL_13:
    ;
  }
  if ( (_DWORD)result == 4 )
  {
    if ( *(_DWORD *)(a1 + 348) )
    {
      result = TR_AttemptStateChange(a1, 4, 3);
      if ( (_DWORD)result == 4 )
      {
        (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)(a1 + 320),
          0LL);
        goto LABEL_13;
      }
    }
  }
  return result;
}
