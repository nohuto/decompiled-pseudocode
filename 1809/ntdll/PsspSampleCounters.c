/*
 * XREFs of PsspSampleCounters @ 0x1801121EC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180111A70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180048890 (RtlQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 */

__int64 __fastcall PsspSampleCounters(unsigned __int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-28h]

  RtlQueryPerformanceCounter(a1, (__int64)a2);
  v3 = 0LL;
  result = ZwQueryInformationThread();
  if ( (int)result >= 0 )
    v3 = v5;
  *a2 = v3;
  return result;
}
