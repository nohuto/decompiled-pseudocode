/*
 * XREFs of DbgkpInitializePhase1 @ 0x140A021E0
 * Callers:
 *     DbgkInitialize @ 0x140A021B0 (DbgkInitialize.c)
 * Callees:
 *     DbgkpInitializePhase1SiloState @ 0x140758CFC (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x14075900C (DbgkpGetServerSiloState.c)
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
