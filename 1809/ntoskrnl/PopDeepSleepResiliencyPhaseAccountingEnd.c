/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1402E3C40
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x140004F10 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x1402DE450 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

LARGE_INTEGER __fastcall PopDeepSleepResiliencyPhaseAccountingEnd(unsigned int a1, char a2)
{
  KIRQL v2; // di
  KIRQL v3; // si
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v7; // r8
  bool i; // zf
  int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v11; // rcx

  v2 = 0;
  v3 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v3 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  }
  result = KeQueryPerformanceCounter(0LL);
  v7 = result;
  dword_140418514 &= ~a1;
  for ( i = !_BitScanForward((unsigned int *)&v9, a1); !i; i = !_BitScanForward((unsigned int *)&v9, a1) )
  {
    result.QuadPart = a1 - 1;
    a1 &= result.LowPart;
    if ( ((1 << v9) & PopDeepSleepDisengageReasonMask) != 0 )
    {
      result.QuadPart = v7.QuadPart - *(_QWORD *)&PopCsResiliencyStats[8 * v9 + 120];
      *(_QWORD *)&PopCsResiliencyStats[8 * v9 + 200] += result.QuadPart;
      *(_QWORD *)&PopCsResiliencyStats[8 * v9 + 120] = 0LL;
    }
  }
  if ( !a2 )
  {
    KxReleaseSpinLock(&PopCsResiliencyStatsLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v3);
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
    result.QuadPart = v2;
    __writecr8(v2);
  }
  return result;
}
