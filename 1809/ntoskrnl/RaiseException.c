/*
 * XREFs of RaiseException @ 0x140199FC0
 * Callers:
 *     _raise_exc_ex @ 0x14019A084 (_raise_exc_ex.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlRaiseException @ 0x1402EDA30 (RtlRaiseException.c)
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl RaiseException(
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
