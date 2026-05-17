/*
 * XREFs of __report_securityfailure @ 0x18009007C
 * Callers:
 *     __report_rangecheckfailure @ 0x180090060 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x18008FEE4 (__raise_securityfailure.c)
 *     RtlCaptureContext @ 0x1800A4310 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_180162EF0 = retaddr;
  dword_180162EE0 = -1073740791;
  dword_180162EE4 = 1;
  dword_180162EF8 = 1;
  unk_180162F00 = v2;
  _raise_securityfailure();
}
