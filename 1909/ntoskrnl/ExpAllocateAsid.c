/*
 * XREFs of ExpAllocateAsid @ 0x14033D43C
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14033C050 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 ExpAllocateAsid()
{
  _KPROCESS *Process; // r15
  unsigned __int8 v1; // di
  struct _KPRCB *v2; // rcx
  unsigned int v3; // edi
  char *PoolWithTag; // r14
  void *v5; // rsi
  unsigned __int8 v6; // bl
  struct _KPRCB *v7; // rcx
  unsigned int v8; // ebx
  _KPROCESS **v9; // rax
  int v10; // ebx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v14; // di
  struct _KPRCB *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
LABEL_24:
  KeAcquireInStackQueuedSpinLock(&qword_14042F338, &LockHandle);
  while ( 1 )
  {
    v8 = dword_14042F324;
    if ( (_DWORD)dword_14042F324 != dword_14042F328 )
      break;
    if ( (_DWORD)dword_14042F324 == ExpSvmAgents )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(OldIrql);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v1 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v2 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v2->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v2);
    }
    __writecr8(v1);
    v3 = v8 + 8;
    if ( v8 + 8 >= v8 )
    {
      if ( v3 > ExpSvmAgents )
        v3 = ExpSvmAgents;
    }
    else
    {
      v3 = ExpSvmAgents;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v3, 0x73417845u);
    if ( !PoolWithTag )
      return 0LL;
    KeAcquireInStackQueuedSpinLock(&qword_14042F338, &LockHandle);
    v5 = PoolWithTag;
    if ( v8 == (_DWORD)dword_14042F324 )
    {
      v5 = qword_14042F330;
      if ( qword_14042F330 )
        memmove(PoolWithTag, qword_14042F330, 16LL * v8);
      memset(&PoolWithTag[16 * v8], 0, 16LL * (v3 - v8));
      qword_14042F330 = PoolWithTag;
      LODWORD(dword_14042F324) = v3;
    }
    if ( v5 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v6 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v7 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v7);
      }
      __writecr8(v6);
      ExFreeHeapPool((ULONG_PTR)v5);
      goto LABEL_24;
    }
  }
  v9 = (_KPROCESS **)qword_14042F330;
  v10 = 0;
  if ( (_DWORD)dword_14042F324 )
  {
    while ( *v9 )
    {
      v9 += 2;
      if ( ++v10 >= (unsigned int)dword_14042F324 )
        goto LABEL_38;
    }
    v9[1] = (_KPROCESS *)1;
    *v9 = Process;
  }
LABEL_38:
  ++dword_14042F328;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v15);
  }
  __writecr8(v14);
  return (unsigned int)(v10 + 1);
}
