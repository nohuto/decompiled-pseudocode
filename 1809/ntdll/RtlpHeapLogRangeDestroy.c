/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x180103DE0
 * Callers:
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800652CC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[4] = a1;
  HIWORD(v3[0]) = 616;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
