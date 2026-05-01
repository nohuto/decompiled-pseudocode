/*
 * XREFs of _HamRemoveDependency@12 @ 0x10012DF0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamRemoveDependency(_DWORD *a1, int a2, int a3)
{
  return _NdrClientCall4(&stru_10001178, &byte_100029B2, *a1, a2, a3);
}
