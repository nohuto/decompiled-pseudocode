/*
 * XREFs of sub_180126F3C @ 0x180126F3C
 * Callers:
 *     __report_gsfailure @ 0x180126FA0 (__report_gsfailure.c)
 * Callees:
 *     sub_180126DE8 @ 0x180126DE8 (sub_180126DE8.c)
 */

BOOL __fastcall sub_180126F3C(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18026CA00 = IsDebuggerPresent();
  sub_180126DE8();
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18026CA00 )
    sub_180126DE8();
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
