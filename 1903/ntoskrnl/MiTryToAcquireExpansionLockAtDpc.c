/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1400E27C8
 * Callers:
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiAttachToOwningSession @ 0x14012C5BC (MiAttachToOwningSession.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400E2A14 (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1)
{
  a1[1] = &SpinLock;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1) != 0;
}
