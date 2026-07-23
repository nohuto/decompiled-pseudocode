/*
 * XREFs of SeImpersonateClient @ 0x1408A2B20
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x14069C0E0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
