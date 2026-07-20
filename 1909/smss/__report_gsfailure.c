/*
 * XREFs of __report_gsfailure @ 0x14000CE30
 * Callers:
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 * Callees:
 *     NtTerminateProcess_0 @ 0x14000D06A (NtTerminateProcess_0.c)
 *     RtlCaptureContext_0 @ 0x14000D082 (RtlCaptureContext_0.c)
 *     RtlLookupFunctionEntry_0 @ 0x14000D08E (RtlLookupFunctionEntry_0.c)
 *     RtlVirtualUnwind_0 @ 0x14000D09A (RtlVirtualUnwind_0.c)
 *     RtlUnhandledExceptionFilter_0 @ 0x14000D0A6 (RtlUnhandledExceptionFilter_0.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-40h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-30h] BYREF
  PVOID HandlerData[5]; // [rsp+60h] [rbp-28h] BYREF
  DWORD64 retaddr; // [rsp+88h] [rbp+0h]
  uintptr_t v7; // [rsp+90h] [rbp+8h] BYREF

  v7 = StackCookie;
  RtlCaptureContext_0(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry_0(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind_0(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&v7;
  }
  qword_140021710 = ContextRecord.Rip;
  ContextRecord.Rcx = v7;
  dword_140021700 = -1073740791;
  dword_140021704 = 1;
  dword_140021718 = 1;
  unk_140021720 = 2LL;
  HandlerData[2] = (PVOID)_security_cookie_complement;
  RtlUnhandledExceptionFilter_0((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  NtTerminateProcess_0((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
