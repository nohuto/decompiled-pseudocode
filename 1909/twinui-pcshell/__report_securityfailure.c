/*
 * XREFs of __report_securityfailure @ 0x180089AA4
 * Callers:
 *     __report_rangecheckfailure @ 0x180089A88 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x180089948 (__raise_securityfailure.c)
 *     capture_current_context @ 0x180089B48 (capture_current_context.c)
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
  qword_1805C0CE0 = retaddr;
  dword_1805C0CD0 = -1073740791;
  dword_1805C0CD4 = 1;
  dword_1805C0CE8 = 1;
  unk_1805C0CF0 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
