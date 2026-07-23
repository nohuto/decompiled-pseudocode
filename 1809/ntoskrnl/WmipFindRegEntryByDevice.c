/*
 * XREFs of WmipFindRegEntryByDevice @ 0x14012EA18
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1406A8E70 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x1406BA1A0 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x1406BA278 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140708794 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x14070C4CC (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x14012EAA8 (WmipDoFindRegEntryByDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
