/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x14084E4D0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
