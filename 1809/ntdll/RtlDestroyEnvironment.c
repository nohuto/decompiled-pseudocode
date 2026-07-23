/*
 * XREFs of RtlDestroyEnvironment @ 0x1800841D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  return 0;
}
