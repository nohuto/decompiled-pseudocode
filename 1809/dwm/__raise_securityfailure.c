/*
 * XREFs of __raise_securityfailure @ 0x140003460
 * Callers:
 *     __report_gsfailure @ 0x1400034D0 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x140003770 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_14000B780 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_14000B780 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
