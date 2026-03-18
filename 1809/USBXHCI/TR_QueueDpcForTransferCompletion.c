/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x1C0024DAC
 * Callers:
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x1C0025800 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_EP_ReclaimTransfers @ 0x1C0025920 (Control_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x1C00259A0 (Control_EP_StartMapping.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0028280 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C0028400 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C0029460 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_EP_ReclaimTransfers @ 0x1C0029570 (Isoch_EP_ReclaimTransfers.c)
 *     Isoch_Transfer_Complete @ 0x1C002D4C0 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002D590 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C002DAE0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C002DD40 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C002F4A0 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Bulk_EP_ReclaimTransfers @ 0x1C002F600 (Bulk_EP_ReclaimTransfers.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C0033340 (Bulk_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C0033510 (Bulk_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
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
