/*
 * XREFs of ZwTraceControl @ 0x1401BBA70
 * Callers:
 *     EtwWriteStartScenario @ 0x1407178F0 (EtwWriteStartScenario.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwTraceControl(
        ETWTRACECONTROLCODE TraceControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&TraceControlCode);
}
