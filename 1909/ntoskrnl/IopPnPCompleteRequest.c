/*
 * XREFs of IopPnPCompleteRequest @ 0x14015E14C
 * Callers:
 *     IopPnPDispatch @ 0x140722DA0 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
