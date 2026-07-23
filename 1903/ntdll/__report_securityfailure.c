/*
 * XREFs of __report_securityfailure @ 0x18008C96C
 * Callers:
 *     __report_rangecheckfailure @ 0x18008C950 (__report_rangecheckfailure.c)
 * Callees:
 *     sub_18008C7D4 @ 0x18008C7D4 (sub_18008C7D4.c)
 *     RtlCaptureContext @ 0x1800A0730 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_180162ED0 = retaddr;
  dword_180162EC0 = -1073740791;
  dword_180162EC4 = 1;
  dword_180162ED8 = 1;
  unk_180162EE0 = v2;
  sub_18008C7D4((_EXCEPTION_POINTERS *)&ExceptionPointers);
}
