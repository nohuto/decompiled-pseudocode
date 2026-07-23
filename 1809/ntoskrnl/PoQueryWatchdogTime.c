/*
 * XREFs of PoQueryWatchdogTime @ 0x14007CC90
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     PopComputeWatchdogTimeout @ 0x140172DE8 (PopComputeWatchdogTimeout.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rbx
  BOOLEAN v3; // si
  _QWORD *DeviceNode; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 OldIrql; // di
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = -1LL;
  v3 = 0;
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = DeviceNode[31];
  if ( v6 )
  {
    v16 = *(char *)(v6 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 72 * v16 + 200) + 196LL) )
    {
      v17 = PopComputeWatchdogTimeout(*(_QWORD *)(v6 + 72 * v16 + 200));
      v19 = *(_QWORD *)(v18 + 48) + 10000000LL * v17;
      if ( v19 != -1 )
        v2 = v19;
    }
  }
  v7 = DeviceNode[33];
  if ( v7 )
  {
    v12 = *(char *)(v7 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 72 * v12 + 200) + 196LL) )
    {
      v13 = PopComputeWatchdogTimeout(*(_QWORD *)(v7 + 72 * v12 + 200));
      v15 = *(_QWORD *)(v14 + 48) + 10000000LL * v13;
      if ( v15 < v2 )
        v2 = v15;
    }
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v2 != -1LL )
  {
    v3 = 1;
    LOBYTE(v8) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v8);
    if ( UnbiasedInterruptTime > v2 )
      *SecondsRemaining = 0;
    else
      *SecondsRemaining = (v2 - UnbiasedInterruptTime) / 0x989680;
  }
  return v3;
}
