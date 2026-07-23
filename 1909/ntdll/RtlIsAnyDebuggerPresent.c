/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800F901C
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D7930 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800EA560 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800F906C (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA420 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x180104288 (RtlpReportHeapFailure.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsAnyDebuggerPresent(void)
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
