/*
 * XREFs of _HamSessionStateLogoffSession@8 @ 0x1000BD90
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamSessionStateLogoffSession(_DWORD *a1, int a2)
{
  return _NdrClientCall4(&stru_10001120, &byte_100027E8, *a1, a2);
}
