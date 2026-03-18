/*
 * XREFs of Isoch_WdfEvtDpcForTransferCompletion @ 0x1C0032720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Isoch_ProcessTransferCompletion @ 0x1C002F400 (Isoch_ProcessTransferCompletion.c)
 */

void __fastcall Isoch_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 912))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  Isoch_ProcessTransferCompletion(v1, 0);
}
