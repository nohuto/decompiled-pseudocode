/*
 * XREFs of _HamTerminateSelf@4 @ 0x10013210
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamTerminateSelf(_DWORD *a1)
{
  return _NdrClientCall4(&stru_10001178, &byte_10002A5A, *a1);
}
