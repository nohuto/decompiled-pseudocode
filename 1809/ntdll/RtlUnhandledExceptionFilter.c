/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800FD140
 * Callers:
 *     __raise_securityfailure @ 0x18008FEF4 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008FF20 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
