/*
 * XREFs of SeImpersonateClientEx @ 0x14069C0E0
 * Callers:
 *     EtwpCreateLogFile @ 0x14069ACBC (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x14069BFB0 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x1408A2B20 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
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
