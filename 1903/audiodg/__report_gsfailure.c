/*
 * XREFs of __report_gsfailure @ 0x140015B20
 * Callers:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x140015ABC (__raise_securityfailure.c)
 *     capture_previous_context @ 0x140015D2C (capture_previous_context.c)
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
  qword_140086740 = retaddr;
  ContextRecord.Rcx = v2;
  dword_140086730 = -1073740791;
  dword_140086734 = 1;
  dword_140086748 = 1;
  unk_140086750 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
