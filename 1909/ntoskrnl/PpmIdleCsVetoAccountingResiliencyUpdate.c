/*
 * XREFs of PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1402EEF20
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408AB70C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1402EEFF0 (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 __fastcall PpmIdleCsVetoAccountingResiliencyUpdate(char a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  KIRQL v4; // bl
  __int64 v5; // rdi
  __int64 i; // rax
  __int64 v7; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  result = PpmPlatformStates;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v5 = 0LL;
    for ( i = PpmPlatformStates; (unsigned int)v5 < *(_DWORD *)PpmPlatformStates; v5 = (unsigned int)(v5 + 1) )
    {
      LOBYTE(v3) = 2;
      v7 = 384 * v5;
      LOBYTE(v7) = a1;
      PpmIdleCsVetoAccountingUpdateBlock(384 * v5 + i + 80, v3, v7);
      i = PpmPlatformStates;
    }
    KxReleaseSpinLock(&PpmIdleVetoLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
