/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x1408C4958
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x140689FE0 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x14012D970 (PsGetServerSiloState.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  struct _WORK_QUEUE_ITEM *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  ObfReferenceObject(v2);
  ServerSiloGlobals = (struct _WORK_QUEUE_ITEM *)PsGetServerSiloGlobals(a1);
  ServerSiloGlobals[35].List.Flink = 0LL;
  ServerSiloGlobals[35].WorkerRoutine = (void (__fastcall *)(void *))PspCompleteServerSiloShutdownDeferred;
  ServerSiloGlobals[35].Parameter = (void *)a1;
  ExQueueWorkItem(ServerSiloGlobals + 35, DelayedWorkQueue);
}
