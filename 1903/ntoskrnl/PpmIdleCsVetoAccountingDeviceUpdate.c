/*
 * XREFs of PpmIdleCsVetoAccountingDeviceUpdate @ 0x1402EF110
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x1402F41DC (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1402EF290 (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 __fastcall PpmIdleCsVetoAccountingDeviceUpdate(unsigned int a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // rdx
  KIRQL v8; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  result = PpmPlatformStates;
  v4 = a1;
  if ( *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    LOBYTE(v6) = a2;
    LOBYTE(v7) = 1;
    v8 = v5;
    PpmIdleCsVetoAccountingUpdateBlock(384 * v4 + PpmPlatformStates + 80, v7, v6);
    KxReleaseSpinLock(&PpmIdleVetoLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = v8;
    __writecr8(v8);
  }
  return result;
}
