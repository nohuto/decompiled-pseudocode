/*
 * XREFs of TR_TransfersReclaimed @ 0x1C0029920
 * Callers:
 *     Control_EP_ReclaimTransfers @ 0x1C002A070 (Control_EP_ReclaimTransfers.c)
 *     Control_ProcessTransferCompletion @ 0x1C002A59C (Control_ProcessTransferCompletion.c)
 *     Isoch_ProcessTransferCompletion @ 0x1C002F400 (Isoch_ProcessTransferCompletion.c)
 *     Bulk_ProcessTransferCompletion @ 0x1C00353A0 (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall TR_TransfersReclaimed(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( !*(_BYTE *)(v2 + 37)
    || (v3 = *(_QWORD *)(v2 + 136), _InterlockedIncrement((volatile signed __int32 *)(v3 + 20)) == *(_DWORD *)(v3 + 8)) )
  {
    ESM_AddEvent((PVOID)(v2 + 288));
  }
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1632))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(a1 + 56));
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1648))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v4,
           "Transfer Ring Tag",
           1272LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c");
}
