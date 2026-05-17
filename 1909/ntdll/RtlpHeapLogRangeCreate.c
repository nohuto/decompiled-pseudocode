/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x180101500
 * Callers:
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x18004C4C0 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeCreate(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 613;
  v7[5] = a2;
  LODWORD(v7[6]) = a3;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
