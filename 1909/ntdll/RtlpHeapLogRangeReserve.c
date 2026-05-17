/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x1801016D8
 * Callers:
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004E58C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     memset @ 0x1800A3DC0 (memset.c)
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
