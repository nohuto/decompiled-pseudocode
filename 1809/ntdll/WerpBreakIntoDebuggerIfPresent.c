/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800DEC28
 * Callers:
 *     RtlReportException @ 0x1800DDD10 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A2EB0 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800DEEA0 (WerpIsDebugPortPresent.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(__int64 a1, __int64 a2, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException();
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess();
  }
}
