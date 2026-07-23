/*
 * XREFs of PfSnRemoveProcessTrace @ 0x1400E25FC
 * Callers:
 *     PfSnDeactivateTrace @ 0x1400E2484 (PfSnDeactivateTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall PfSnRemoveProcessTrace(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  unsigned int v3; // edx
  signed __int64 v4; // r8
  bool v5; // zf
  signed __int64 v6; // rax
  KIRQL v7; // di
  unsigned __int64 v9; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 1192), 0LL);
  v2 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
  v3 = v1 & 0xF;
  if ( v3 )
  {
    _m_prefetchw((const void *)(v2 + 360));
    v4 = *(_QWORD *)(v2 + 360);
    if ( (v4 & 1) != 0 )
    {
LABEL_7:
      v9 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9, -(__int64)v3) == v3
        && !_interlockedbittestandreset((volatile signed __int32 *)(v9 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v9 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 360), v4 - 2 * v3, v4);
        v5 = v4 == v6;
        v4 = v6;
        if ( v5 )
          break;
        if ( (v6 & 1) != 0 )
          goto LABEL_7;
      }
    }
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_14043D2D0);
  KxReleaseSpinLock(&qword_14043D2D0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return v2;
}
