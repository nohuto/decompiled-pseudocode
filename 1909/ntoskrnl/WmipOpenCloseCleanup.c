/*
 * XREFs of WmipOpenCloseCleanup @ 0x1406EF5C0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 */

__int64 __fastcall WmipOpenCloseCleanup(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
