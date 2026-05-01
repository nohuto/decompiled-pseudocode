/*
 * XREFs of _HamTryEstimateRemainingQuiesceTime@8 @ 0x10007640
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamTryEstimateRemainingQuiesceTime(_DWORD *a1, int a2)
{
  return _NdrClientCall4(&stru_10001178, &byte_10002AC0, *a1, a2);
}
