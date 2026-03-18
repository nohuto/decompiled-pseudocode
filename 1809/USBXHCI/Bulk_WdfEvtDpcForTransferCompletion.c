/*
 * XREFs of Bulk_WdfEvtDpcForTransferCompletion @ 0x1C0033300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Bulk_ProcessTransferCompletion @ 0x1C0030618 (Bulk_ProcessTransferCompletion.c)
 */

void __fastcall Bulk_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 912))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  Bulk_ProcessTransferCompletion(v1, 0);
}
