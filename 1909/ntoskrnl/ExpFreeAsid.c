/*
 * XREFs of ExpFreeAsid @ 0x14033D6D8
 * Callers:
 *     ExFreeSvmAsid @ 0x140134AFC (ExFreeSvmAsid.c)
 *     ExpAssignPasid @ 0x140913DDC (ExpAssignPasid.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpFreeAsid(unsigned int a1)
{
  _KPROCESS *Process; // rsi
  _QWORD *v3; // rax
  int v5; // edi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  LONG_PTR result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_14042F338, &LockHandle);
  v3 = (char *)qword_14042F330 + 16 * a1;
  if ( v3[1]-- == 1LL )
  {
    *v3 = 0LL;
    v5 = 1;
    --dword_14042F328;
  }
  else
  {
    v3[1] |= 0x8000000000000000uLL;
    v5 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  if ( v5 == 1 )
    return ObfDereferenceObject(Process);
  return result;
}
