/*
 * XREFs of RtlpLogHeapContractEvent @ 0x1801032C8
 * Callers:
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpDecommitBlock @ 0x180047F94 (RtlpDecommitBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x180077304 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     GetUCBytes @ 0x18010106C (GetUCBytes.c)
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
