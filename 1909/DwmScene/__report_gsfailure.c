/*
 * XREFs of __report_gsfailure @ 0x180126FA0
 * Callers:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 * Callees:
 *     sub_180126F3C @ 0x180126F3C (sub_180126F3C.c)
 *     capture_previous_context @ 0x180127074 (capture_previous_context.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_18026C4A0 = retaddr;
  ContextRecord.Rcx = v2;
  dword_18026C490 = -1073740791;
  dword_18026C494 = 1;
  dword_18026C4A8 = 1;
  unk_18026C4B0 = 2LL;
  sub_180126F3C((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
