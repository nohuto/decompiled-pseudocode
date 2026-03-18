/*
 * XREFs of KiRegisterNmiSxCallback @ 0x1402A5CB4
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x14028BE8C (HvlpInitializeHvCrashdump.c)
 *     KeRegisterNmiCallback @ 0x1402A5950 (KeRegisterNmiCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
