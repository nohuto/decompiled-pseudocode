/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x1401589E0
 * Callers:
 *     PpmAllocWmiEvent @ 0x140300D90 (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x14073BF50 (WmipSetTraceNotify.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     WmipDoFindRegEntryByDevice @ 0x140158AD8 (WmipDoFindRegEntryByDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG __stdcall IoWMIDeviceObjectToProviderId(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // di
  __int64 RegEntryByDevice; // rax
  ULONG v4; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(DeviceObject);
  if ( RegEntryByDevice )
    v4 = *(_DWORD *)(RegEntryByDevice + 56);
  else
    v4 = 0;
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v4;
}
