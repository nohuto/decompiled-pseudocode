/*
 * XREFs of _HamTerminateSelfOnProcessExit@16 @ 0x10013280
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamTerminateSelfOnProcessExit(_DWORD *a1, int a2, int a3, unsigned __int8 a4)
{
  return _NdrClientCall4(&stru_10001178, &byte_10002A84, *a1, a2, a3, a4);
}
