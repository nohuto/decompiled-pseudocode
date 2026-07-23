/*
 * XREFs of RaiseException @ 0x1401A46C0
 * Callers:
 *     _raise_exc_ex @ 0x1401A47B0 (_raise_exc_ex.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlRaiseException @ 0x14030BFC0 (RtlRaiseException.c)
 */

void __cdecl RaiseException(
        DWORD dwExceptionCode,
        DWORD dwExceptionFlags,
        DWORD nNumberOfArguments,
        const ULONG_PTR *lpArguments)
{
  char v4; // di
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  v4 = dwExceptionFlags;
  memset(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionAddress = RaiseException;
  ExceptionRecord.ExceptionCode = dwExceptionCode;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = v4 & 1;
  if ( lpArguments )
  {
    if ( nNumberOfArguments > 0xF )
      nNumberOfArguments = 15;
    ExceptionRecord.NumberParameters = nNumberOfArguments;
    if ( nNumberOfArguments )
      memmove(ExceptionRecord.ExceptionInformation, lpArguments, 8LL * nNumberOfArguments);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
