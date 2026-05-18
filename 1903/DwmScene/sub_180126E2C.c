/*
 * XREFs of sub_180126E2C @ 0x180126E2C
 * Callers:
 *     __report_gsfailure @ 0x180126E90 (__report_gsfailure.c)
 * Callees:
 *     sub_180126CD8 @ 0x180126CD8 (sub_180126CD8.c)
 */

BOOL __fastcall sub_180126E2C(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18026BA00 = IsDebuggerPresent();
  sub_180126CD8();
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18026BA00 )
    sub_180126CD8();
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
