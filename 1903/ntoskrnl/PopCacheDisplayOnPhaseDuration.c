/*
 * XREFs of PopCacheDisplayOnPhaseDuration @ 0x1403019CC
 * Callers:
 *     PopSetWatchdog @ 0x1400B35A0 (PopSetWatchdog.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopCacheDisplayOnPhaseDuration(int a1, __int64 a2)
{
  KIRQL v4; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140442C18);
  if ( dword_140442C20 )
  {
    switch ( a1 )
    {
      case 'P':
        PopDisplayOnPerformance = a2;
        break;
      case '@':
        qword_140442C08 = a2;
        break;
      case '0':
        qword_140442C10 = a2;
        break;
    }
  }
  KxReleaseSpinLock(&qword_140442C18);
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
