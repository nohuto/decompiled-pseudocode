/*
 * XREFs of _HamAddHostDependency@24 @ 0x1000BE30
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamAddHostDependency(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  return _NdrClientCall4(&stru_10001178, &byte_100029E8, *a1, a2, a3, a4, a5, a6);
}
