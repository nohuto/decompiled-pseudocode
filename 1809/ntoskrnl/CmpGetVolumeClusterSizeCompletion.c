/*
 * XREFs of CmpGetVolumeClusterSizeCompletion @ 0x1406CB170
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 */

__int64 __fastcall CmpGetVolumeClusterSizeCompletion(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
