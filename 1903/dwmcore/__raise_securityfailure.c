/*
 * XREFs of __raise_securityfailure @ 0x1800E6FD8
 * Callers:
 *     __report_gsfailure @ 0x1800E7040 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x1800E796C (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18033C420 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18033C420 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
