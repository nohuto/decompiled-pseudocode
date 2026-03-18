/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x140815300
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400C10A0 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
