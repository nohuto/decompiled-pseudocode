/*
 * XREFs of _HamRemoveHostDependency@20 @ 0x10012E60
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamRemoveHostDependency(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  return _NdrClientCall4(&stru_10001178, &byte_10002A24, *a1, a2, a3, a4, a5);
}
