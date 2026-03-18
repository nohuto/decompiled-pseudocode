/*
 * XREFs of PfSnActiveTraceGetNext @ 0x1400D3254
 * Callers:
 *     PfSnNameRemoveAll @ 0x14066AE00 (PfSnNameRemoveAll.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  __int64 **v2; // rbx
  KIRQL v3; // bp
  __int64 *i; // rbx
  __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (__int64 **)&a1[2];
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1404679D0);
  if ( !a1 )
    v2 = (__int64 **)&qword_1404679C8;
  for ( i = *v2; i != &PfSnGlobals; i = (__int64 *)i[1] )
  {
    v5 = i - 1;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)i + 44) )
      goto LABEL_6;
  }
  v5 = 0LL;
LABEL_6:
  KxReleaseSpinLock(&qword_1404679D0);
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
