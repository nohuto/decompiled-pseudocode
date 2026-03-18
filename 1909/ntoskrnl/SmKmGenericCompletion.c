/*
 * XREFs of SmKmGenericCompletion @ 0x14012E5F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

__int64 __fastcall SmKmGenericCompletion(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
