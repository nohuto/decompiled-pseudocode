/*
 * XREFs of RtlpTpImpersonate @ 0x1800891A0
 * Callers:
 *     RtlpTpTimerCallback @ 0x18002E890 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x180030240 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall RtlpTpImpersonate(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v3; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a1;
  v1 = 0;
  while ( 1 )
  {
    ++v1;
    v2 = NtSetInformationThread(-2LL, 5LL, &v3, 8LL);
    if ( v2 >= 0 )
      break;
    if ( v1 >= 2 )
    {
      memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
      ExceptionRecord.ExceptionCode = v2;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
}
