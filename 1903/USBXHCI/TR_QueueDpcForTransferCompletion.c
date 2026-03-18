/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x1C00294FC
 * Callers:
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x1C0029F50 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_EP_ReclaimTransfers @ 0x1C002A070 (Control_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x1C002A0F0 (Control_EP_StartMapping.c)
 *     Control_WdfEvtRequestCancel @ 0x1C002CBE0 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C002CD70 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C002DE20 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_EP_ReclaimTransfers @ 0x1C002DF30 (Isoch_EP_ReclaimTransfers.c)
 *     Isoch_Transfer_Complete @ 0x1C0032158 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0032228 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0032760 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C00329D0 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C0034180 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Bulk_EP_ReclaimTransfers @ 0x1C00342E0 (Bulk_EP_ReclaimTransfers.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C0038320 (Bulk_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C00384F0 (Bulk_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_QueueDpcForTransferCompletion(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 280) )
    return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3040))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             *(_QWORD *)(a1 + 88));
  else
    return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 896))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             *(_QWORD *)(a1 + 80));
}
