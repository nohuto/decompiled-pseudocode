/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x180105DCC
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18005F148 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x18005F5F8 (RtlpCreateLowFragHeap.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18007D508 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     GetUCBytes @ 0x18010389C (GetUCBytes.c)
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
