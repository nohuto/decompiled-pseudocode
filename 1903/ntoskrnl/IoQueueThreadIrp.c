/*
 * XREFs of IoQueueThreadIrp @ 0x14015CA40
 * Callers:
 *     PiPagePathSetState @ 0x14078175C (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x140877EAC (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  __int64 v1; // rdx

  IopQueueThreadIrp((__int64)Irp, v1);
}
