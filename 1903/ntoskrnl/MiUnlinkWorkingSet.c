/*
 * XREFs of MiUnlinkWorkingSet @ 0x1400AD8C8
 * Callers:
 *     MiUnlinkSessionWorkingSet @ 0x140166C3C (MiUnlinkSessionWorkingSet.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MmDeleteProcessAddressSpace @ 0x1406709CC (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
  _DWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v14[0] = 393479;
  v14[1] = 0;
  p_LockHandle = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v15[1] = v15;
  v15[0] = v15;
  if ( a2 )
    goto LABEL_4;
  p_LockHandle = &LockHandle;
  for ( i = &LockHandle; ; i = p_LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, i);
LABEL_4:
    v5 = *(_BYTE *)(a1 + 185);
    if ( (v5 & 6) == 0 && (v5 & 0xF0) == 0 )
      break;
    *(_QWORD *)(a1 + 104) = v14;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
    OldIrql = p_LockHandle->OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    KeWaitForGate(v14, 18LL);
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
    KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
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
