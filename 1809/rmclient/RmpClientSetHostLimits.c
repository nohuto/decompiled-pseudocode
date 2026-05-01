/*
 * XREFs of RmpClientSetHostLimits @ 0x18000E4F4
 * Callers:
 *     RmSetHostLimit @ 0x18000E410 (RmSetHostLimit.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall RmpClientSetHostLimits(__int64 a1, __int64 a2, __int64 a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 7u, 0LL, *(_QWORD *)(a1 + 16), a2, a3);
}
