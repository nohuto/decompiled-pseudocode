/*
 * XREFs of _HamFullTrustClosePackageHandle@12 @ 0x10012620
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamFullTrustClosePackageHandle(_DWORD *a1, int a2, int a3)
{
  return _NdrClientCall4(&stru_100017E8, &byte_10003A5A, *a1, a2, a3);
}
