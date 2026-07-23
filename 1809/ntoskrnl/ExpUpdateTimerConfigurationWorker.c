/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x14012EAE0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400FD1E8 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x14012EBC8 (KiSetClockInterval.c)
 *     KeSetTimeAdjustment @ 0x14016831C (KeSetTimeAdjustment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  KIRQL v4; // si
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v6; // rcx
  char *v7; // rax
  __int64 result; // rax
  int v9; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    LOBYTE(v3) = 1;
    v9 = KiSetClockInterval((unsigned int)ExpLastRequestedTime, v3, &ExpClockIntervalRequest);
    KiSendClockInterruptToClockOwner();
    **(_DWORD **)a2 = v9;
  }
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
    KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v6 = *(_QWORD **)(a2 + 8);
  if ( v6 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v6);
  v7 = *(char **)(a2 + 16);
  if ( v7 )
    KeTimeSynchronization = *v7;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
