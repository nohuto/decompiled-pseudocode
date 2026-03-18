/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140300710
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1400ED920 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopDeepSleepResiliencyPhaseAccountingBegin(unsigned int a1, char a2)
{
  KIRQL v2; // si
  bool i; // zf
  int v6; // edi
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    KxAcquireSpinLock(&PopCsResiliencyStatsLock);
  }
  dword_140442D94 |= a1;
  for ( i = !_BitScanForward((unsigned int *)&v6, a1); !i; i = !_BitScanForward((unsigned int *)&v6, a1) )
  {
    a1 &= a1 - 1;
    if ( ((1 << v6) & PopDeepSleepDisengageReasonMask) != 0 )
      stru_140442D98[v6] = KeQueryPerformanceCounter(0LL);
  }
  if ( !a2 )
  {
    KxReleaseSpinLock(&PopCsResiliencyStatsLock);
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v2);
  }
}
