/*
 * XREFs of PipSetDevNodeState @ 0x140159DB8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14015A93C (PnpRemoveLockedDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA66C (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E30 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1406E7E44 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x1406E7F30 (PipEnumerateDevice.c)
 *     PnpProcessAssignResources @ 0x1406E836C (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PnpStartDeviceNode @ 0x1406EBA7C (PnpStartDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406ECD68 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406ED448 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x1406FD644 (PipProcessStartPhase2.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140709174 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLegacyResourceAllocation @ 0x14072CEB4 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PnpRestartDeviceNode @ 0x14075FE8C (PnpRestartDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x1407630D0 (PnpDriverLoadingFailed.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408283FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14083F824 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14083FC04 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x140841840 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140007294 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400072E0 (PipAreDriversLoadedWorker.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpRemoveDeviceActionRequests @ 0x14015EE44 (PnpRemoveDeviceActionRequests.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E5A90 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
