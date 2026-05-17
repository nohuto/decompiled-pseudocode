/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x180103380
 * Callers:
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x18004C4C0 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x180077304 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 __fastcall RtlpLogHeapCreateEvent(__int64 a1)
{
  RtlpEstimateAllocatedSize(a1);
  return NtTraceEvent();
}
