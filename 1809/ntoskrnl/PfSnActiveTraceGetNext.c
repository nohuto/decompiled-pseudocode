/*
 * XREFs of PfSnActiveTraceGetNext @ 0x14008BD7C
 * Callers:
 *     PfSnNameRemoveAll @ 0x1405FA650 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  __int64 **v2; // rbx
  KIRQL v3; // bp
  __int64 *i; // rbx
  __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (__int64 **)&a1[2];
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_14043D2D0);
  if ( !a1 )
    v2 = (__int64 **)&qword_14043D2C8;
  for ( i = *v2; i != &PfSnGlobals; i = (__int64 *)i[1] )
  {
    v5 = i - 1;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)i + 44) )
      goto LABEL_6;
  }
  v5 = 0LL;
LABEL_6:
  KxReleaseSpinLock(&qword_14043D2D0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 45);
  return v5;
}
