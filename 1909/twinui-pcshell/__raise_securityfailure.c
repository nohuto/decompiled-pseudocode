/*
 * XREFs of __raise_securityfailure @ 0x180089948
 * Callers:
 *     __report_gsfailure @ 0x1800899B0 (__report_gsfailure.c)
 *     __report_securityfailure @ 0x180089AA4 (__report_securityfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x18008A1EC (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_1805C1240 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_1805C1240 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
