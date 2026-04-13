/*
 * XREFs of __raise_securityfailure @ 0x1800CAAC0
 * Callers:
 *     __report_gsfailure @ 0x1800CAB00 (__report_gsfailure.c)
 *     __report_rangecheckfailure @ 0x1800CAC78 (__report_rangecheckfailure.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
