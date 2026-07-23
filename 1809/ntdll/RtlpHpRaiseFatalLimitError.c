/*
 * XREFs of RtlpHpRaiseFatalLimitError @ 0x180104290
 * Callers:
 *     HeapCommitFailAvoidTriageRules @ 0x180103920 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHpHeapHandleError @ 0x180103FC0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlReportFatalFailure @ 0x1800FB4C0 (RtlReportFatalFailure.c)
 */

void __fastcall RtlpHpRaiseFatalLimitError(void *a1)
{
  EXCEPTION_RECORD v2; // [rsp+20h] [rbp-B8h] BYREF

  memset(&v2, 0, sizeof(v2));
  v2.ExceptionRecord = 0LL;
  v2.ExceptionCode = qword_180162820;
  v2.ExceptionInformation[0] = dword_180162808;
  v2.ExceptionInformation[1] = qword_180162810;
  v2.ExceptionInformation[2] = qword_180162828;
  v2.ExceptionInformation[3] = qword_180162830;
  v2.ExceptionFlags = 1;
  v2.ExceptionAddress = a1;
  v2.NumberParameters = 4;
  RtlReportFatalFailure(&v2);
}
