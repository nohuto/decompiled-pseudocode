/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x140886CD8
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14068D410 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     PsGetServerSiloState @ 0x14012A1DC (PsGetServerSiloState.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  char *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  ObfReferenceObject(v2);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  *((_QWORD *)ServerSiloGlobals + 142) = 0LL;
  *((_QWORD *)ServerSiloGlobals + 144) = PspCompleteServerSiloShutdownDeferred;
  *((_QWORD *)ServerSiloGlobals + 145) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ServerSiloGlobals + 1136), DelayedWorkQueue);
}
