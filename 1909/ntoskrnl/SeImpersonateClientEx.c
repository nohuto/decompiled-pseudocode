/*
 * XREFs of SeImpersonateClientEx @ 0x1405E5000
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1405E4D40 (AlpcpImpersonateMessage.c)
 *     EtwpCreateLogFile @ 0x1406ADF64 (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x1406D5A60 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x1408DFAA0 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
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
