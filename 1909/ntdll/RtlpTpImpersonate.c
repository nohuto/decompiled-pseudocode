/*
 * XREFs of RtlpTpImpersonate @ 0x180085538
 * Callers:
 *     RtlpTpWaitCallback @ 0x18002EA00 (RtlpTpWaitCallback.c)
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     RtlpTpTimerCallback @ 0x1800305A0 (RtlpTpTimerCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     memset @ 0x1800A3DC0 (memset.c)
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
      memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
      ExceptionRecord.ExceptionCode = v2;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
}
