/*
 * XREFs of RtlpLogHeapCommit @ 0x180105B44
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpHpSegPageRangeCommit @ 0x180015130 (RtlpHpSegPageRangeCommit.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpHpSegSegmentAllocate @ 0x18005D2C8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18005F148 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x18005F5F8 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpInitializeHeapSegment @ 0x1800617A8 (RtlpInitializeHeapSegment.c)
 *     RtlpHpHeapAllocate @ 0x1800635C0 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4147;
  v9[5] = a2;
  v9[6] = a3;
  LODWORD(v9[7]) = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
