/*
 * XREFs of _HamStopActivity@12 @ 0x1000A0D0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamStopActivity(_DWORD *a1, int a2, int a3)
{
  return _NdrClientCall4(&stru_10001688, &byte_10003232, *a1, a2, a3);
}
