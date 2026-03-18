/*
 * XREFs of Isoch_WdfEvtWorkItemForTransferCompletion @ 0x1C0032C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Isoch_ProcessTransferCompletion @ 0x1C002F400 (Isoch_ProcessTransferCompletion.c)
 */

void __fastcall Isoch_WdfEvtWorkItemForTransferCompletion(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // rax

  v2 = KfRaiseIrql(2u);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3048))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  Isoch_ProcessTransferCompletion(v3, 1);
  KeLowerIrql(v2);
}
