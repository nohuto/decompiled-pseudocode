/*
 * XREFs of _HamAddDependency@12 @ 0x1000BDE0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamAddDependency(_DWORD *a1, int a2, int a3)
{
  return _NdrClientCall4(&stru_10001178, &byte_1000297C, *a1, a2, a3);
}
