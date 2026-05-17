/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x1801015A4
 * Callers:
 *     RtlDestroyHeap @ 0x18004AA00 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x18004FBB4 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     memset @ 0x1800A3DC0 (memset.c)
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
