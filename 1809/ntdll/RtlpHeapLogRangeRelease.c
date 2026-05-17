/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x180103E70
 * Callers:
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x18005F55C (RtlpDestroyHeapSegment.c)
 *     RtlpHpSegSegmentFree @ 0x1800661D0 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeFree @ 0x1800663DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010D1EC (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x18010D358 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeRelease(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 615;
  v7[5] = a2;
  v7[6] = a3;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
