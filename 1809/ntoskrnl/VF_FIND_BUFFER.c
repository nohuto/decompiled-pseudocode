/*
 * XREFs of VF_FIND_BUFFER @ 0x14092A79C
 * Callers:
 *     ViSpecialFreeCommonBuffer @ 0x14092F900 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int16 *__fastcall VF_FIND_BUFFER(_QWORD *a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // di
  _QWORD *v6; // rax
  unsigned __int16 *v7; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx

  v2 = a1 + 2;
  v5 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
  v6 = (_QWORD *)*a1;
  v7 = (unsigned __int16 *)(*a1 - 48LL);
  while ( 1 )
  {
    if ( a1 == v6 )
    {
      KxReleaseSpinLock(v2);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      v7 = 0LL;
      goto LABEL_11;
    }
    if ( *((_QWORD *)v7 + 2) + *v7 == a2 )
      break;
    v7 = (unsigned __int16 *)(*v6 - 48LL);
    v6 = (_QWORD *)*v6;
  }
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
LABEL_11:
  __writecr8(v5);
  return v7;
}
