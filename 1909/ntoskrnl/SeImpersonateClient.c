/*
 * XREFs of SeImpersonateClient @ 0x1408DFAA0
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1405E5000 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
