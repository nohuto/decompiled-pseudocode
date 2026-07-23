/*
 * XREFs of sub_18010EF18 @ 0x18010EF18
 * Callers:
 *     sub_180031544 @ 0x180031544 (sub_180031544.c)
 *     sub_180036320 @ 0x180036320 (sub_180036320.c)
 *     sub_18007DF18 @ 0x18007DF18 (sub_18007DF18.c)
 * Callees:
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

void __fastcall sub_18010EF18(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  void (__fastcall *v3)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, int); // r9
  void (__fastcall *v4)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, int); // r10
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( a3 )
  {
    v3 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, int))(a3 + 80);
    ExceptionRecord.NumberParameters = 5;
    if ( v3 == Callback )
      v4 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, int))(*(_QWORD *)(a3 + 88) + 32LL);
    else
      v4 = 0LL;
    if ( v4 )
      v3 = v4;
    ExceptionRecord.ExceptionInformation[4] = (ULONG_PTR)v3;
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
