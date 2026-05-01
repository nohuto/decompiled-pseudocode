/*
 * XREFs of _HamServicingTerminatePackage@12 @ 0x100055D0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamServicingTerminatePackage(_DWORD *a1, int a2, int a3)
{
  return _NdrClientCall4(&stru_10001050, &byte_10002596, *a1, a2, a3, 1, 1024);
}
