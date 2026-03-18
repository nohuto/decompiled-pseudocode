/*
 * XREFs of ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C0158390
 * Callers:
 *     <none>
 * Callees:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01583D0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorkerThread(BLTQUEUE *StartContext)
{
  KeSetActualBasePriorityThread(KeGetCurrentThread(), *((_BYTE *)StartContext + 317) != 0 ? 20 : 14);
  BLTQUEUE::BltQueueWorker(StartContext);
  JUMPOUT(0x1C01583C6LL);
}
