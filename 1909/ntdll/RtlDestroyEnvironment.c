/*
 * XREFs of RtlDestroyEnvironment @ 0x18007EFE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  return 0;
}
