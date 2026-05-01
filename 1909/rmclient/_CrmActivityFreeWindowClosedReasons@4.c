/*
 * XREFs of _CrmActivityFreeWindowClosedReasons@4 @ 0x10007510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall CrmActivityFreeWindowClosedReasons(PVOID P)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
