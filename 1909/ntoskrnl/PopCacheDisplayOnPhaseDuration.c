/*
 * XREFs of PopCacheDisplayOnPhaseDuration @ 0x14030147C
 * Callers:
 *     PopSetWatchdog @ 0x1400EFD4C (PopSetWatchdog.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopCacheDisplayOnPhaseDuration(int a1, __int64 a2)
{
  KIRQL v4; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140442BB8);
  if ( dword_140442BC0 )
  {
    switch ( a1 )
    {
      case 'P':
        PopDisplayOnPerformance = a2;
        break;
      case '@':
        qword_140442BA8 = a2;
        break;
      case '0':
        qword_140442BB0 = a2;
        break;
    }
  }
  KxReleaseSpinLock(&qword_140442BB8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
