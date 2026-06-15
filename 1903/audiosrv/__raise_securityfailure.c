/*
 * XREFs of __raise_securityfailure @ 0x180063BF8
 * Callers:
 *     __report_gsfailure @ 0x180063C60 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x180064820 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_1801B7FA0 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_1801B7FA0 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
