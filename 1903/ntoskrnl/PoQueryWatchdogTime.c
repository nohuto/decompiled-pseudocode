/*
 * XREFs of PoQueryWatchdogTime @ 0x14011DE00
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     PopComputeWatchdogTimeout @ 0x1401736E0 (PopComputeWatchdogTimeout.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rbx
  BOOLEAN v3; // si
  _QWORD *DeviceNode; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int8 OldIrql; // di
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = -1LL;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = DeviceNode[31];
  if ( v6 )
  {
    v15 = *(char *)(v6 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 72 * v15 + 200) + 196LL) )
    {
      v16 = PopComputeWatchdogTimeout(*(_QWORD *)(v6 + 72 * v15 + 200));
      v18 = *(_QWORD *)(v17 + 48) + 10000000LL * v16;
      if ( v18 != -1 )
        v2 = v18;
    }
  }
  v7 = DeviceNode[33];
  if ( v7 )
  {
    v11 = *(char *)(v7 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 72 * v11 + 200) + 196LL) )
    {
      v12 = PopComputeWatchdogTimeout(*(_QWORD *)(v7 + 72 * v11 + 200));
      v14 = *(_QWORD *)(v13 + 48) + 10000000LL * v12;
      if ( v14 < v2 )
        v2 = v14;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime > v2 )
      *SecondsRemaining = 0;
    else
      *SecondsRemaining = (v2 - UnbiasedInterruptTime) / 0x989680;
  }
  return v3;
}
