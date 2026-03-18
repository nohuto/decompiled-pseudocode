/*
 * XREFs of SeImpersonateClientEx @ 0x14069AF40
 * Callers:
 *     EtwpCreateLogFile @ 0x140699B1C (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x14069AE10 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x1408A18E0 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x140637B70 (PsImpersonateClient.c)
 */

NTSTATUS __stdcall SeImpersonateClientEx(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  struct _KTHREAD *CurrentThread; // r10
  BOOLEAN DirectAccessEffectiveOnly; // r9

  CurrentThread = ServerThread;
  if ( ClientContext->DirectlyAccessClientToken )
    DirectAccessEffectiveOnly = ClientContext->DirectAccessEffectiveOnly;
  else
    DirectAccessEffectiveOnly = ClientContext->SecurityQos.EffectiveOnly;
  if ( !ServerThread )
    CurrentThread = KeGetCurrentThread();
  return PsImpersonateClient(
           CurrentThread,
           ClientContext->ClientToken,
           1u,
           DirectAccessEffectiveOnly,
           ClientContext->SecurityQos.ImpersonationLevel);
}
