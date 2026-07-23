/*
 * XREFs of IopErrorLogQueueRequest @ 0x140822334
 * Callers:
 *     IopErrorLogThread @ 0x14070D630 (IopErrorLogThread.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     IopVerifierExAllocatePool_3 @ 0x1402865E8 (IopVerifierExAllocatePool_3.c)
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
