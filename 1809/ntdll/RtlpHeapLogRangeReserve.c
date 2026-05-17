/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x180103F14
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x18005D2C8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeReserve(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 614;
  v7[5] = a2;
  v7[6] = a3;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
