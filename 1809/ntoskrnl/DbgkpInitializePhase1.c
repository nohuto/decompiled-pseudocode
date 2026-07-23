/*
 * XREFs of DbgkpInitializePhase1 @ 0x1409AFA4C
 * Callers:
 *     DbgkInitialize @ 0x1409AFA1C (DbgkInitialize.c)
 * Callees:
 *     DbgkpInitializePhase1SiloState @ 0x140728D1C (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x14072900C (DbgkpGetServerSiloState.c)
 */

__int64 DbgkpInitializePhase1()
{
  char *ServerSiloState; // rax
  __int64 result; // rax

  ServerSiloState = DbgkpGetServerSiloState(0LL);
  result = DbgkpInitializePhase1SiloState((__int64)ServerSiloState);
  if ( (int)result >= 0 && !DbgkpWerInitialized )
  {
    DbgkpBusy = 0;
    DbgkpWerDefaultPolicy = 2;
    DbgkpWerDeferredWriteTimeoutSeconds = 600;
    DbgkpWerInitialized = 1;
  }
  return result;
}
