/*
 * XREFs of RtlpLogHeapDecommit @ 0x1801033F8
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpHpSegPageRangeCommit @ 0x180047490 (RtlpHpSegPageRangeCommit.c)
 *     RtlpDecommitBlock @ 0x180047F94 (RtlpDecommitBlock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapDecommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4148;
  v9[5] = a2;
  v9[6] = a3;
  LODWORD(v9[7]) = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
