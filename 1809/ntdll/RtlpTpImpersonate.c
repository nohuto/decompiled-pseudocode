/*
 * XREFs of RtlpTpImpersonate @ 0x1800891B0
 * Callers:
 *     RtlpTpTimerCallback @ 0x18002E890 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x180030240 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A04A0 (NtSetInformationThread.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall RtlpTpImpersonate(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // edi
  __int64 ThreadInformation; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  ThreadInformation = a1;
  v1 = 0;
  while ( 1 )
  {
    ++v1;
    v2 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
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
