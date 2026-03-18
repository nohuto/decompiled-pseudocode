/*
 * XREFs of Bulk_MapTransfers @ 0x1C0034C98
 * Callers:
 *     Bulk_CommonBufferCallback @ 0x1C0033970 (Bulk_CommonBufferCallback.c)
 *     Bulk_EP_StartMapping @ 0x1C0034380 (Bulk_EP_StartMapping.c)
 *     Bulk_EvtDmaCallback @ 0x1C0034490 (Bulk_EvtDmaCallback.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0035890 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C0038410 (Bulk_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     TR_AttemptStateChange @ 0x1C00284E8 (TR_AttemptStateChange.c)
 *     Bulk_MappingLoop @ 0x1C0034D68 (Bulk_MappingLoop.c)
 */

__int64 __fastcall Bulk_MapTransfers(__int64 a1, __int64 a2)
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
        0x25u,
        (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
        v7,
        v8,
        v9);
    }
    LOBYTE(a2) = v2;
    result = Bulk_MappingLoop(a1, a2);
    if ( *(_DWORD *)(a1 + 108) != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 340) )
      break;
    result = TR_AttemptStateChange(a1, 2, 3);
    if ( (_DWORD)result != 2 )
      break;
  }
  return result;
}
