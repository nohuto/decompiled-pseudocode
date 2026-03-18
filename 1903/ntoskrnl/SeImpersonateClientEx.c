/*
 * XREFs of SeImpersonateClientEx @ 0x1405E4830
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1405E4570 (AlpcpImpersonateMessage.c)
 *     EtwpCreateLogFile @ 0x1406B87D4 (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x1406D6230 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x1408E01A0 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x1405DE340 (PsImpersonateClient.c)
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
