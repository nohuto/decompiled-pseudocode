/*
 * XREFs of ExpAllocateAsid @ 0x14033D9DC
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14033C5F0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_14042F358, &LockHandle);
  while ( 1 )
  {
    v8 = dword_14042F344;
    if ( (_DWORD)dword_14042F344 != dword_14042F348 )
      break;
    if ( (_DWORD)dword_14042F344 == ExpSvmAgents )
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
    KeAcquireInStackQueuedSpinLock(&qword_14042F358, &LockHandle);
    v5 = PoolWithTag;
    if ( v8 == (_DWORD)dword_14042F344 )
    {
      v5 = qword_14042F350;
      if ( qword_14042F350 )
        memmove(PoolWithTag, qword_14042F350, 16LL * v8);
      memset(&PoolWithTag[16 * v8], 0, 16LL * (v3 - v8));
      qword_14042F350 = PoolWithTag;
      LODWORD(dword_14042F344) = v3;
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
  v9 = (_KPROCESS **)qword_14042F350;
  v10 = 0;
  if ( (_DWORD)dword_14042F344 )
  {
    while ( *v9 )
    {
      v9 += 2;
      if ( ++v10 >= (unsigned int)dword_14042F344 )
        goto LABEL_38;
    }
    v9[1] = (_KPROCESS *)1;
    *v9 = Process;
  }
LABEL_38:
  ++dword_14042F348;
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
