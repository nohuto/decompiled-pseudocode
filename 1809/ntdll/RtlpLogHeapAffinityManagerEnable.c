/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x180105974
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18000FEB0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006915C (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     memset @ 0x1800A7100 (memset.c)
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
