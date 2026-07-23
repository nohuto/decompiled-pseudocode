/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800DC8F8
 * Callers:
 *     RtlReportException @ 0x1800DB9E0 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800DBAB0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x18009D410 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x18009FA80 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800DCB5C (WerpIsDebugPortPresent.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
}
