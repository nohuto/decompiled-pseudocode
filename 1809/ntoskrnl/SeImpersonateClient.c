/*
 * XREFs of SeImpersonateClient @ 0x1408A18C0
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x14069AF20 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
