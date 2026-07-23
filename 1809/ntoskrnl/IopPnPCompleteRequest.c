/*
 * XREFs of IopPnPCompleteRequest @ 0x1401610A0
 * Callers:
 *     IopPnPDispatch @ 0x140703DD0 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
