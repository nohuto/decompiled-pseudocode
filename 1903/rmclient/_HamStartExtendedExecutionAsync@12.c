/*
 * XREFs of _HamStartExtendedExecutionAsync@12 @ 0x10007C40
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamStartExtendedExecutionAsync(_DWORD *a1, int a2, int a3)
{
  return _NdrClientCall4(&stru_10001178, &byte_1000291C, *a1, a2, a3);
}
