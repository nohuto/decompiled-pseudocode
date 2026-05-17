/*
 * XREFs of RtlpLogHeapSubSegmentAlloc @ 0x180103844
 * Callers:
 *     RtlpAllocateUserBlockFromHeap @ 0x1800184BC (RtlpAllocateUserBlockFromHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4143;
  v9[5] = a2;
  v9[6] = a3;
  v9[7] = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
