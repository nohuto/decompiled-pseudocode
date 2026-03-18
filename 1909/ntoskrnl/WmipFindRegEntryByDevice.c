/*
 * XREFs of WmipFindRegEntryByDevice @ 0x140158A48
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1406A44A0 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x140716650 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x140716728 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x1407346C8 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x140738A64 (WmipRegisterDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     WmipDoFindRegEntryByDevice @ 0x140158AD8 (WmipDoFindRegEntryByDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall WmipFindRegEntryByDevice(__int64 a1)
{
  KIRQL v2; // di
  __int64 RegEntryByDevice; // rax
  __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(a1);
  v4 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByDevice + 48));
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
