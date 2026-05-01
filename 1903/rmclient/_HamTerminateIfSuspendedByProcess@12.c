/*
 * XREFs of _HamTerminateIfSuspendedByProcess@12 @ 0x100131A0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamTerminateIfSuspendedByProcess(_DWORD *a1, int a2, int a3)
{
  return _NdrClientCall4(&stru_100010A0, &byte_10002720, *a1, a2, a3);
}
