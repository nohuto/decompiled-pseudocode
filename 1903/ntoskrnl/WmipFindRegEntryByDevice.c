/*
 * XREFs of WmipFindRegEntryByDevice @ 0x1401583A8
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1406BF4A0 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x140714870 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x140714948 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140732468 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x140736804 (WmipRegisterDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     WmipDoFindRegEntryByDevice @ 0x140158438 (WmipDoFindRegEntryByDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
