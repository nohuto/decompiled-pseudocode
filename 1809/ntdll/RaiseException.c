/*
 * XREFs of RaiseException @ 0x180098420
 * Callers:
 *     _raise_exc_ex @ 0x180098900 (_raise_exc_ex.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall RaiseException(
        DWORD dwExceptionCode,
        DWORD dwExceptionFlags,
        DWORD nNumberOfArguments,
        const ULONG_PTR *lpArguments)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionCode = dwExceptionCode;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = dwExceptionFlags & 1;
  ExceptionRecord.ExceptionAddress = RaiseException;
  if ( lpArguments )
  {
    if ( nNumberOfArguments > 0xF )
      *(_QWORD *)&nNumberOfArguments = 15LL;
    ExceptionRecord.NumberParameters = nNumberOfArguments;
    if ( nNumberOfArguments )
      memmove(ExceptionRecord.ExceptionInformation, lpArguments, 8LL * *(_QWORD *)&nNumberOfArguments);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
