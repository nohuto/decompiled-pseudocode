/*
 * XREFs of KeIntSteerAssignCpuSet @ 0x1402B1760
 * Callers:
 *     IoSteerInterrupt @ 0x14085D0B0 (IoSteerInterrupt.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIntSteerAssignCpuSet @ 0x1402B190C (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1402B1968 (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSet(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // ebx
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v8 = *(_QWORD *)(v3 + 16);
    v9 = v7;
    if ( a3 )
    {
      v6 = KiIntSteerAssignCpuSet(v8, a2, a3);
    }
    else
    {
      KiIntSteerClearCpuSetAssignment(v8);
      v6 = 0;
    }
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v9);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v6;
}
