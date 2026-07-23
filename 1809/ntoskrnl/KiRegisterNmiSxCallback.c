/*
 * XREFs of KiRegisterNmiSxCallback @ 0x14028F744
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x14027804C (HvlpInitializeHvCrashdump.c)
 *     KeRegisterNmiCallback @ 0x14028F320 (KeRegisterNmiCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall KiRegisterNmiSxCallback(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  KIRQL v7; // di
  struct _KPRCB *CurrentPrcb; // rcx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x494D4E4Bu);
  v5 = result;
  if ( result )
  {
    result[1] = a1;
    result[2] = a2;
    result[3] = result;
    v6 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *v5 = KiNmiCallbackListHead;
    v7 = v6;
    KiNmiCallbackListHead = v5;
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v7);
    return (_QWORD *)v5[3];
  }
  return result;
}
