/*
 * XREFs of __report_securityfailure @ 0x140015C14
 * Callers:
 *     __report_rangecheckfailure @ 0x140015BF8 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x140015ABC (__raise_securityfailure.c)
 *     capture_current_context @ 0x140015CB8 (capture_current_context.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(v2);
  capture_current_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_140086740 = retaddr;
  dword_140086730 = -1073740791;
  dword_140086734 = 1;
  dword_140086748 = 1;
  unk_140086750 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
