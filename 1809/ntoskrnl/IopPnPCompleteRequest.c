/*
 * XREFs of IopPnPCompleteRequest @ 0x140160F80
 * Callers:
 *     IopPnPDispatch @ 0x140702B50 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400C10A0 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
