/*
 * XREFs of __raise_securityfailure @ 0x140015ECC
 * Callers:
 *     __report_gsfailure @ 0x140015F30 (__report_gsfailure.c)
 *     __report_securityfailure @ 0x140016024 (__report_securityfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x140016740 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_140085CA0 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_140085CA0 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
