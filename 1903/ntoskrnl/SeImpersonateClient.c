/*
 * XREFs of SeImpersonateClient @ 0x1408E01A0
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1405E4830 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
