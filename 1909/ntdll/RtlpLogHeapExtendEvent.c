/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x1801034A4
 * Callers:
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18003F9C0 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180047214 (RtlpCommitBlock.c)
 *     RtlpCreateLowFragHeap @ 0x18004B21C (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007038C (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x180077304 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     GetUCBytes @ 0x18010106C (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapExtendEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+17h] BYREF
  int v4; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+23h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
