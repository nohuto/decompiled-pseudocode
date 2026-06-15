/*
 * XREFs of __report_securityfailure @ 0x14001BDD4
 * Callers:
 *     __report_rangecheckfailure @ 0x14001BDB8 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x14001BC7C (__raise_securityfailure.c)
 *     capture_current_context @ 0x14001BE78 (capture_current_context.c)
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
  qword_140088750 = retaddr;
  dword_140088740 = -1073740791;
  dword_140088744 = 1;
  dword_140088758 = 1;
  unk_140088760 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
