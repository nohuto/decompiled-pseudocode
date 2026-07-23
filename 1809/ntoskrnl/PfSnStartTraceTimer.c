/*
 * XREFs of PfSnStartTraceTimer @ 0x1400E23A8
 * Callers:
 *     PfSnBeginScenario @ 0x140668444 (PfSnBeginScenario.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnStartTraceTimer(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rsi
  struct _EX_RUNDOWN_REF *v2; // rbx
  KSPIN_LOCK *p_Count; // r14
  KIRQL v4; // bp
  unsigned int v5; // edi
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1 + 45;
  v2 = a1;
  if ( ExAcquireRundownProtection_0(a1 + 45) )
  {
    p_Count = &v2[34].Count;
    v4 = KeAcquireSpinLockRaiseToDpc(&v2[34].Count);
    if ( (v2[35].Count & 2) != 0 )
    {
      v5 = -1073741431;
    }
    else if ( (unsigned __int8)KiSetTimerEx((__int64)&v2[17], v2[25].Count, 0, 0, (__int64)&v2[26]) )
    {
      v5 = -1073741595;
    }
    else
    {
      LODWORD(v2[35].Count) |= 1u;
      v2 = 0LL;
      v5 = 0;
    }
    KxReleaseSpinLock(p_Count);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v4);
    if ( v2 )
      ExReleaseRundownProtection_0(v1);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
