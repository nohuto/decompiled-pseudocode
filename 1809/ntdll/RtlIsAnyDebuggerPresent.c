/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800FB37C
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D99E0 (RtlQueryProcessLockInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E9600 (RtlQueryCriticalSectionOwner.c)
 *     RtlAssert @ 0x1800ED360 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FB3FC (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FD160 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x180106BB0 (RtlpReportHeapFailure.c)
 * Callees:
 *     <none>
 */

unsigned __int8 RtlIsAnyDebuggerPresent()
{
  unsigned __int8 result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
