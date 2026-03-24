/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x1408152E0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400C10C0 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
