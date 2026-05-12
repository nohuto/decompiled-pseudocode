/*
 * XREFs of PortpSyncCompletion @ 0x1C0051CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall PortpSyncCompletion(__int64 a1, struct _KEVENT *a2)
{
  return KeSetEvent(a2, 0, 0);
}
