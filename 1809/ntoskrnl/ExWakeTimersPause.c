/*
 * XREFs of ExWakeTimersPause @ 0x1401428E0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     ExpTimerPause @ 0x14013214C (ExpTimerPause.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 ExWakeTimersPause()
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v2; // r14
  __int64 v3; // r15
  __int64 *v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, 0LL, (ULONG_PTR)&ExpWakeTimerLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v2 = MEMORY[0xFFFFF78000000008];
  v3 = MEMORY[0xFFFFF78000000014];
  v4 = (__int64 *)ExpWakeTimerList;
  while ( v4 != &ExpWakeTimerList )
  {
    v5 = (__int64)(v4 - 33);
    v4 = (__int64 *)*v4;
    KxAcquireSpinLock((PKSPIN_LOCK)(v5 + 64));
    if ( *(_QWORD *)(v5 + 256) )
      ExpTimerPause(v5, v3, v2, 1);
    KxReleaseSpinLock((PKSPIN_LOCK)(v5 + 64));
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
