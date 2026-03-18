/*
 * XREFs of ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C015C250
 * Callers:
 *     <none>
 * Callees:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C015C290 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorkerThread(BLTQUEUE *StartContext)
{
  KeSetActualBasePriorityThread(KeGetCurrentThread(), *((_BYTE *)StartContext + 317) != 0 ? 20 : 14);
  BLTQUEUE::BltQueueWorker(StartContext);
  JUMPOUT(0x1C015C286LL);
}
