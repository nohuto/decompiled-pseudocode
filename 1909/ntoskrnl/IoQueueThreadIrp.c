/*
 * XREFs of IoQueueThreadIrp @ 0x14015D0E0
 * Callers:
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x1408775AC (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  __int64 v1; // rdx

  IopQueueThreadIrp((__int64)Irp, v1);
}
