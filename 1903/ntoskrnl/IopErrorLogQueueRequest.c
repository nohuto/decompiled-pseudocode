/*
 * XREFs of IopErrorLogQueueRequest @ 0x14085B20C
 * Callers:
 *     IopErrorLogThread @ 0x140737B10 (IopErrorLogThread.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x1400B2900 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     IopVerifierExAllocatePool_3 @ 0x14029B758 (IopVerifierExAllocatePool_3.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *Pool_3; // rax
  struct _KDPC *Dpc; // rdi

  Pool_3 = (struct _KDPC *)IopVerifierExAllocatePool_3(NonPagedPoolNx, 0x80uLL);
  Dpc = Pool_3;
  if ( Pool_3 )
  {
    KeInitializeDpc(Pool_3, (PKDEFERRED_ROUTINE)IopErrorLogDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)&Dpc[1], NotificationTimer);
    LOBYTE(Pool_3) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)-300000000LL, 0, 0x7D0u, Dpc);
  }
  else
  {
    IopErrorLogSessionPending = 0;
  }
  return (char)Pool_3;
}
