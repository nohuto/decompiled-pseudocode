/*
 * XREFs of PipSetDevNodeState @ 0x140145D2C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140173204 (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x140703C08 (PnpProcessAssignResources.c)
 *     PipEnumerateDevice @ 0x140704150 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140704260 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140707CA0 (PipEnumerateCompleted.c)
 *     PnpStartDeviceNode @ 0x140719E1C (PnpStartDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x14071A17C (PipProcessStartPhase2.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140732734 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407338F8 (PnpRequestDeviceRemovalWorker.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140735D04 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLegacyResourceAllocation @ 0x1407515AC (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14078B434 (PnpDriverLoadingFailed.c)
 *     PnpRestartDeviceNode @ 0x140861AE8 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140861FC8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14087A960 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14087AD34 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x14087C93C (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PipIsDevNodeDNStarted @ 0x1400D4DF4 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400D4E40 (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x140177968 (PnpRemoveDeviceActionRequests.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140708810 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  BOOL v4; // r15d
  int v5; // edi
  char v6; // r14
  KIRQL v7; // al
  int v8; // r8d
  KIRQL v9; // si
  BOOL IsDevNodeDNStarted; // eax
  __int64 v11; // rcx
  int v12; // r8d
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v8 = *(_DWORD *)(a1 + 300);
  v9 = v7;
  if ( v8 != a2 )
  {
    v4 = PipAreDriversLoadedWorker(v8, *(_DWORD *)(a1 + 304));
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    v11 = *(unsigned int *)(a1 + 388);
    v5 = IsDevNodeDNStarted;
    *(_DWORD *)(a1 + 304) = v12;
    *(_DWORD *)(a1 + 300) = a2;
    v6 = 1;
    *(_DWORD *)(a1 + 4 * v11 + 308) = v12;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v9;
  __writecr8(v9);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304)) != v4
        || (result = PipIsDevNodeDNStarted(a1), (_DWORD)result != v5) )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v14, v15, 11LL);
        result = PipIsDevNodeDNStarted(a1);
        if ( (_DWORD)result != v5 )
          result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v16, *(_QWORD *)(a1 + 48), 26LL);
      }
    }
  }
  if ( a2 == 788 )
    return PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
  return result;
}
