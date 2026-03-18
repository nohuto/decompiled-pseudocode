/*
 * XREFs of IopPnPCompleteRequest @ 0x14015DAAC
 * Callers:
 *     IopPnPDispatch @ 0x140720F00 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
