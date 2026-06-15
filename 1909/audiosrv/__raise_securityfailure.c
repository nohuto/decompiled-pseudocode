/*
 * XREFs of __raise_securityfailure @ 0x180064BE8
 * Callers:
 *     __report_gsfailure @ 0x180064C50 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x180065810 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_1801B6FA0 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_1801B6FA0 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
