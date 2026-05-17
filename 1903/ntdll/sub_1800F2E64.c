/*
 * XREFs of sub_1800F2E64 @ 0x1800F2E64
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 * Callees:
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

void __fastcall sub_1800F2E64(ULONG_PTR a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionInformation[0] = a1;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.ExceptionCode = -1073741801;
  ExceptionRecord.NumberParameters = 1;
  RtlRaiseException(&ExceptionRecord);
}
