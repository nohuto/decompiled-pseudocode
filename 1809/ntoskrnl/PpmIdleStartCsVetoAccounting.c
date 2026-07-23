/*
 * XREFs of PpmIdleStartCsVetoAccounting @ 0x1402D5424
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1402D4DD4 (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 PpmIdleStartCsVetoAccounting()
{
  __int64 result; // rax
  KIRQL v1; // al
  __int64 v2; // r8
  __int64 v3; // rbx
  KIRQL i; // di
  __int64 v5; // rcx
  unsigned int j; // edx
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  result = PpmPlatformStates;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v2 = PpmPlatformStates;
    v3 = 0LL;
    for ( i = v1; (unsigned int)v3 < *(_DWORD *)PpmPlatformStates; v3 = (unsigned int)(v3 + 1) )
    {
      v5 = 384 * v3 + v2 + 80;
      for ( j = 0; j < *(_DWORD *)(v5 + 28); *(_QWORD *)(*(_QWORD *)(v5 + 32) + (v7 << 6) + 56) = 0LL )
        v7 = j++;
      PpmIdleCsVetoAccountingUpdateBlock(v5, 4, 1);
      v2 = PpmPlatformStates;
    }
    KxReleaseSpinLock(&PpmIdleVetoLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && i < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = i;
    __writecr8(i);
  }
  return result;
}
