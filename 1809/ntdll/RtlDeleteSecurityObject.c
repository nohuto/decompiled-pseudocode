/*
 * XREFs of RtlDeleteSecurityObject @ 0x18007FB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDeleteSecurityObject(PSECURITY_DESCRIPTOR *ObjectDescriptor)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *ObjectDescriptor);
  return 0;
}
