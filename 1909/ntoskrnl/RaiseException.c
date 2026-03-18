/*
 * XREFs of RaiseException @ 0x1401A4DE0
 * Callers:
 *     _raise_exc_ex @ 0x1401A4ED0 (_raise_exc_ex.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlRaiseException @ 0x14030BA70 (RtlRaiseException.c)
 */

void __fastcall RaiseException(int a1, char a2, unsigned int a3, const void *a4)
{
  struct _EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  memset(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionAddress = &RaiseException;
  ExceptionRecord.ExceptionCode = a1;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = a2 & 1;
  if ( a4 )
  {
    if ( a3 > 0xF )
      a3 = 15;
    ExceptionRecord.NumberParameters = a3;
    if ( a3 )
      memmove(ExceptionRecord.ExceptionInformation, a4, 8LL * a3);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
