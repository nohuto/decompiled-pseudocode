/*
 * XREFs of MiUnlinkWorkingSet @ 0x140091BBC
 * Callers:
 *     MiUnlinkSessionWorkingSet @ 0x140154B88 (MiUnlinkSessionWorkingSet.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MmDeleteProcessAddressSpace @ 0x140609AD0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _KLOCK_QUEUE_HANDLE *__fastcall MiUnlinkWorkingSet(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rbx
  struct _KLOCK_QUEUE_HANDLE *i; // rdx
  char v5; // al
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  struct _KLOCK_QUEUE_HANDLE *result; // rax
  unsigned __int8 v10; // bl
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  __int16 v14; // [rsp+20h] [rbp-30h] BYREF
  char v15; // [rsp+22h] [rbp-2Eh]
  int v16; // [rsp+24h] [rbp-2Ch]
  _QWORD v17[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v14 = 263;
  v16 = 0;
  p_LockHandle = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v17[1] = v17;
  v17[0] = v17;
  v15 = 6;
  if ( a2 )
    goto LABEL_4;
  p_LockHandle = &LockHandle;
  for ( i = &LockHandle; ; i = p_LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, i);
LABEL_4:
    v5 = *(_BYTE *)(a1 + 185);
    if ( (v5 & 6) == 0 && (v5 & 0xF0) == 0 )
      break;
    *(_QWORD *)(a1 + 104) = &v14;
    KxReleaseQueuedSpinLock(p_LockHandle);
    OldIrql = p_LockHandle->OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    KeWaitForGate(&v14, 18LL);
  }
  v6 = (_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    v8 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v7 + 8) != v6 || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
  }
  *(_QWORD *)(a1 + 104) = MmBadPointer;
  result = &LockHandle;
  if ( p_LockHandle == &LockHandle )
  {
    KxReleaseQueuedSpinLock(p_LockHandle);
    v10 = p_LockHandle->OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v13);
    }
    result = (struct _KLOCK_QUEUE_HANDLE *)v10;
    __writecr8(v10);
  }
  return result;
}
