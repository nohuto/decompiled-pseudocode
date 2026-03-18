/*
 * XREFs of PopDisksRegisteredForIdle @ 0x14013B52C
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char PopDisksRegisteredForIdle()
{
  char v0; // bl
  KIRQL v1; // di
  __int64 i; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (PopSimulate & 2) != 0 )
    return 1;
  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  for ( i = PopIdleDetectList; (__int64 *)i != &PopIdleDetectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == 1 )
    {
      v0 = 1;
      break;
    }
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v1);
  return v0;
}
