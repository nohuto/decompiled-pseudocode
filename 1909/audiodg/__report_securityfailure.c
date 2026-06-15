/*
 * XREFs of __report_securityfailure @ 0x140016024
 * Callers:
 *     __report_rangecheckfailure @ 0x140016008 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x140015ECC (__raise_securityfailure.c)
 *     capture_current_context @ 0x1400160C8 (capture_current_context.c)
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
  qword_140085740 = retaddr;
  dword_140085730 = -1073740791;
  dword_140085734 = 1;
  dword_140085748 = 1;
  unk_140085750 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
