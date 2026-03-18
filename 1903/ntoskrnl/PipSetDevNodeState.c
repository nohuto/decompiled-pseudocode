/*
 * XREFs of PipSetDevNodeState @ 0x14014568C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140172AD4 (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x140701E28 (PnpProcessAssignResources.c)
 *     PipEnumerateDevice @ 0x140702370 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140702480 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140705EC0 (PipEnumerateCompleted.c)
 *     PnpStartDeviceNode @ 0x14071802C (PnpStartDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x14071838C (PipProcessStartPhase2.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1407304D4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140731698 (PnpRequestDeviceRemovalWorker.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140733AA4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLegacyResourceAllocation @ 0x140750B1C (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140788FD4 (PnpDriverLoadingFailed.c)
 *     PnpRestartDeviceNode @ 0x1408623E8 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408628C8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14087B260 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14087B634 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x14087D23C (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PipIsDevNodeDNStarted @ 0x1400EE53C (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400EE588 (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x140177278 (PnpRemoveDeviceActionRequests.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
