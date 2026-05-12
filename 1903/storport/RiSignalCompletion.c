/*
 * XREFs of RiSignalCompletion @ 0x1C000FDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RiSignalCompletion(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
