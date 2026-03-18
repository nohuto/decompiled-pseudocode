/*
 * XREFs of ExWakeTimersPause @ 0x14015E2BC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpTimerPause @ 0x140135948 (ExpTimerPause.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
