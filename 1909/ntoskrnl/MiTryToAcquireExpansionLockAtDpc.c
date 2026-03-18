/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1400C219C
 * Callers:
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     MiAttachToOwningSession @ 0x14012D08C (MiAttachToOwningSession.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400C23E8 (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1)
{
  a1[1] = &SpinLock;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1) != 0;
}
