/*
 * XREFs of _HamDebugSuspendPackage@16 @ 0x100124C0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamDebugSuspendPackage(_DWORD *a1, int a2, int a3, int a4)
{
  return _NdrClientCall4(&stru_10001838, &byte_10003C36, *a1, a2, a3, a4);
}
