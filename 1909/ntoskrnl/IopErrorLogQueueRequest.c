/*
 * XREFs of IopErrorLogQueueRequest @ 0x14085A90C
 * Callers:
 *     IopErrorLogThread @ 0x140739D70 (IopErrorLogThread.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     IopVerifierExAllocatePool_3 @ 0x14029B4B8 (IopVerifierExAllocatePool_3.c)
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
