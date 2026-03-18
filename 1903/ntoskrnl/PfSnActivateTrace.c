/*
 * XREFs of PfSnActivateTrace @ 0x14012E0E0
 * Callers:
 *     PfSnBeginTrace @ 0x1406D9C78 (PfSnBeginTrace.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PfSnAddProcessTrace @ 0x14012E1A0 (PfSnAddProcessTrace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  KIRQL v2; // si
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140467C80) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140467CD0);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (_QWORD *)qword_140467CC8;
      v5 = (_QWORD *)(a1 + 8);
      if ( *(__int64 **)qword_140467CC8 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v5 = &PfSnGlobals;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      qword_140467CC8 = a1 + 8;
    }
    KxReleaseSpinLock(&qword_140467CD0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
