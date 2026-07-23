/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x18009BDC0
 * Callers:
 *     sub_18008C7D4 @ 0x18008C7D4 (sub_18008C7D4.c)
 *     __report_gsfailure @ 0x18008C800 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&dword_18011D492);
}
