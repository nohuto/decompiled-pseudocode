/*
 * XREFs of PfSnStartTraceTimer @ 0x1401342F4
 * Callers:
 *     PfSnBeginScenario @ 0x14066C07C (PfSnBeginScenario.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
