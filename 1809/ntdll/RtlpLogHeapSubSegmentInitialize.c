/*
 * XREFs of RtlpLogHeapSubSegmentInitialize @ 0x18010642C
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x18000ED20 (RtlpSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18010A4FC (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD v10[10]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x44uLL);
  v10[4] = a1;
  HIWORD(v10[0]) = 4149;
  LODWORD(v10[8]) = a5;
  v10[5] = a2;
  v10[6] = a3;
  v10[7] = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
