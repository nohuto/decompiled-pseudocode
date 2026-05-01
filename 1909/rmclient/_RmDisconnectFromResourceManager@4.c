/*
 * XREFs of _RmDisconnectFromResourceManager@4 @ 0x10011340
 * Callers:
 *     <none>
 * Callees:
 *     _RmpClientConnectionCleanup@4 @ 0x10011807 (_RmpClientConnectionCleanup@4.c)
 */

int __stdcall RmDisconnectFromResourceManager(PVOID P)
{
  RmpClientConnectionCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0;
}
