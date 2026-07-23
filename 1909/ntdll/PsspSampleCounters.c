/*
 * XREFs of PsspSampleCounters @ 0x180111100
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801102D0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18000BBB0 (RtlQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 */

NTSTATUS __fastcall PsspSampleCounters(LARGE_INTEGER *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  RtlQueryPerformanceCounter(a1);
  v3 = 0LL;
  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCycleTime, &ThreadInformation, 0x10u, 0LL);
  if ( result >= 0 )
    v3 = ThreadInformation;
  *a2 = v3;
  return result;
}
