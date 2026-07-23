/*
 * XREFs of RtlDeleteSecurityObject @ 0x18007A130
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDeleteSecurityObject(PSECURITY_DESCRIPTOR *ObjectDescriptor)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *ObjectDescriptor);
  return 0;
}
