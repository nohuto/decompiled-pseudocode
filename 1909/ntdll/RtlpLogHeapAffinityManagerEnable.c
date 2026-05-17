/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x18010304C
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003B6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004D7D0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapAffinityManagerEnable(__int64 a1, int a2)
{
  _QWORD v5[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, 0x2CuLL);
  v5[4] = a1;
  HIWORD(v5[0]) = 4150;
  LODWORD(v5[5]) = a2;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
