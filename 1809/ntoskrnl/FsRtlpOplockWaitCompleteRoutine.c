/*
 * XREFs of FsRtlpOplockWaitCompleteRoutine @ 0x140815590
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

LONG __fastcall FsRtlpOplockWaitCompleteRoutine(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
