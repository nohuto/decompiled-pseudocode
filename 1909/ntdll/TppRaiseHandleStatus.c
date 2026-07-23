/*
 * XREFs of TppRaiseHandleStatus @ 0x18010F048
 * Callers:
 *     TppSetupNextWait @ 0x180031544 (TppSetupNextWait.c)
 *     TppSingleTimerExpiration @ 0x180036320 (TppSingleTimerExpiration.c)
 *     TppJobpRundownJob @ 0x18007E5B8 (TppJobpRundownJob.c)
 * Callees:
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

void __fastcall TppRaiseHandleStatus(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  void (__fastcall *v3)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, int); // r9
  void (__fastcall *v4)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, int); // r10
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( a3 )
  {
    v3 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, int))(a3 + 80);
    ExceptionRecord.NumberParameters = 5;
    if ( v3 == RtlpTpWaitCallback )
      v4 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, int))(*(_QWORD *)(a3 + 88) + 32LL);
    else
      v4 = 0LL;
    if ( v4 )
      v3 = v4;
    ExceptionRecord.ExceptionInformation[4] = (unsigned __int64)v3;
  }
  else
  {
    ExceptionRecord.NumberParameters = 4;
  }
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionInformation[3] = 0LL;
  ExceptionRecord.ExceptionInformation[0] = a1;
  ExceptionRecord.ExceptionCode = -1073740022;
  ExceptionRecord.ExceptionInformation[1] = a2;
  ExceptionRecord.ExceptionInformation[2] = a3;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
}
