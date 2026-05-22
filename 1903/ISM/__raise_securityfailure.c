/*
 * XREFs of __raise_securityfailure @ 0x18002C5A8
 * Callers:
 *     __report_gsfailure @ 0x18002C610 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x18002C018 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_1801E0A50 = IsDebuggerPresent();
  _crt_debugger_hook();
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_1801E0A50 )
    _crt_debugger_hook();
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
