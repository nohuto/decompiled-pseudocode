/*
 * XREFs of RtlpLogHeapContractEvent @ 0x180105BF0
 * Callers:
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpDecommitBlock @ 0x180061020 (RtlpDecommitBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18007D508 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     GetUCBytes @ 0x18010389C (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapContractEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+7h] BYREF
  int v4; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+13h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
