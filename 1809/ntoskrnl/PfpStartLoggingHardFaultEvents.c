/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x14056690C
 * Callers:
 *     PfPowerActionNotify @ 0x140567F10 (PfPowerActionNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInitializeDpc @ 0x1400A56D0 (KeInitializeDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

__int64 PfpStartLoggingHardFaultEvents()
{
  _DWORD *PoolWithTag; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  KIRQL v3; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x44506650u);
  v1 = 0;
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[40] = 0;
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_14043C108);
    *(_DWORD *)(v2 + 164) = ++dword_14043C114;
    _InterlockedOr(&dword_1404D7554, 1u);
    KxReleaseSpinLock(&qword_14043C108);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v3);
    KeInitializeTimerEx((PKTIMER)(v2 + 64), NotificationTimer);
    KeInitializeDpc((PRKDPC)v2, (PKDEFERRED_ROUTINE)PfpPowerActionDpcRoutine, (PVOID)v2);
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
