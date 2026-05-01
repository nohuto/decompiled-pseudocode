/*
 * XREFs of RmpQueryHostMemoryLimitValues @ 0x18000E558
 * Callers:
 *     RmQueryHostMemoryLimitValues @ 0x18000E320 (RmQueryHostMemoryLimitValues.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall RmpQueryHostMemoryLimitValues(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 8u, 0LL, a1, a2, a3, a4);
}
