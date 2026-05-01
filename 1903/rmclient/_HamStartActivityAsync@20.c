/*
 * XREFs of _HamStartActivityAsync@20 @ 0x1000B040
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamStartActivityAsync(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  return _NdrClientCall4(&stru_10001688, &byte_100031F6, *a1, a2, a3, a4, a5);
}
