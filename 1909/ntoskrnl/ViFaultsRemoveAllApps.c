/*
 * XREFs of ViFaultsRemoveAllApps @ 0x14097A7CC
 * Callers:
 *     VfFaultsSetParameters @ 0x140979DB8 (VfFaultsSetParameters.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 ViFaultsRemoveAllApps()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = (PVOID **)ViFaultApplicationsList;
  v2 = v0;
  if ( ViFaultApplicationsList != &ViFaultApplicationsList )
  {
    do
    {
      v3 = *v1;
      ExFreePoolWithTag(v1, 0);
      v1 = (PVOID **)v3;
    }
    while ( v3 != &ViFaultApplicationsList );
  }
  qword_1404358A8 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
