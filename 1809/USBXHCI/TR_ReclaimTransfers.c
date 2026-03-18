/*
 * XREFs of TR_ReclaimTransfers @ 0x1C0024ED0
 * Callers:
 *     ESM_ReclaimingTransfersAfterEndpointStop @ 0x1C0040AF0 (ESM_ReclaimingTransfersAfterEndpointStop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_ReclaimTransfers(__int64 a1)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1632))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(a1 + 56));
  (*(void (__fastcall **)(unsigned __int64, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1640))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v2,
    "Transfer Ring Tag",
    1253LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c");
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 32) + 72LL))(a1);
}
