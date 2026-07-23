/*
 * XREFs of RtlGetUnloadEventTraceEx @ 0x1800CEDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetUnloadEventTraceEx(PULONG *ElementSize, PULONG *ElementCount, PVOID *EventTrace)
{
  *ElementSize = (PULONG)&unk_1801627B0;
  *ElementCount = (PULONG)&dword_180162790;
  *EventTrace = &qword_180165FE8;
}
