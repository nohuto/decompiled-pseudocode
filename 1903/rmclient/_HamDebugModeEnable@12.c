/*
 * XREFs of _HamDebugModeEnable@12 @ 0x10012330
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamDebugModeEnable(_DWORD *a1, int a2, int a3)
{
  return _NdrClientCall4(&stru_10001838, &byte_10003B94, *a1, a2, a3);
}
