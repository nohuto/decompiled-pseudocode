/*
 * XREFs of PopPolicyWorkerThread @ 0x140130670
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopPolicyWorkerNotify @ 0x1405B11A0 (PopPolicyWorkerNotify.c)
 *     PopPolicySystemIdle @ 0x1405B14E0 (PopPolicySystemIdle.c)
 *     PopPolicyWorkerAction @ 0x1406DF970 (PopPolicyWorkerAction.c)
 *     PopPolicyTimeChange @ 0x1406E38B0 (PopPolicyTimeChange.c)
 *     PopPolicyWorkerActionPromote @ 0x1406E3910 (PopPolicyWorkerActionPromote.c)
 *     PopCoalescingNotify @ 0x14086C810 (PopCoalescingNotify.c)
 *     PopPreCriticalBatteryNotify @ 0x1408762A0 (PopPreCriticalBatteryNotify.c)
 */

__int64 __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // r8d
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  __int64 (*v7)(void); // rax
  KIRQL v8; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v11; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  v3 = a1 | PopWorkerStatus;
  v4 = 0;
  while ( 1 )
  {
    v8 = v2;
    PopWorkerStatus = v3;
    if ( (PopWorkerPending & v3) == 0 )
      break;
    _BitScanForward((unsigned int *)&v5, PopWorkerPending & v3);
    v6 = ~(1 << v5);
    PopWorkerStatus = v3 & v6;
    PopWorkerPending &= v6;
    KxReleaseSpinLock(&PopWorkerSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
    v7 = PopWorkerTypes[v5];
    if ( v7 )
      v4 |= v7();
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    v3 = (1 << v5) | PopWorkerStatus;
  }
  PopWorkerPending |= v4;
  KxReleaseSpinLock(&PopWorkerSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  result = v8;
  __writecr8(v8);
  return result;
}
