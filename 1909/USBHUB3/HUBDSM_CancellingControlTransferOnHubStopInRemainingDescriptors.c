/*
 * XREFs of HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors @ 0x1C001D900
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_CancelControlTransfer @ 0x1C0026D34 (HUBDTX_CancelControlTransfer.c)
 */

__int64 __fastcall HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors(__int64 a1)
{
  HUBDTX_CancelControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
