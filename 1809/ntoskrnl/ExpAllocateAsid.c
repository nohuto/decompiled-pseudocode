/*
 * XREFs of ExpAllocateAsid @ 0x14031DD68
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14031D550 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 ExpAllocateAsid()
{
  _KPROCESS *Process; // r14
  unsigned __int8 v1; // di
  struct _KPRCB *v2; // rcx
  unsigned int v3; // edi
  char *PoolWithTag; // rbp
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
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140407F38, &LockHandle);
  while ( 1 )
  {
    v8 = dword_140407F24;
    if ( (_DWORD)dword_140407F24 != dword_140407F28 )
      break;
    if ( (_DWORD)dword_140407F24 == ExpSvmAgents )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
    KeAcquireInStackQueuedSpinLock(&qword_140407F38, &LockHandle);
    v5 = PoolWithTag;
    if ( v8 == (_DWORD)dword_140407F24 )
    {
      v5 = qword_140407F30;
      if ( qword_140407F30 )
        memmove(PoolWithTag, qword_140407F30, 16LL * v8);
      memset(&PoolWithTag[16 * v8], 0, 16LL * (v3 - v8));
      qword_140407F30 = PoolWithTag;
      LODWORD(dword_140407F24) = v3;
    }
    if ( v5 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v6 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v7 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v7);
      }
      __writecr8(v6);
      ExFreePoolWithTag(v5, 0);
      KeAcquireInStackQueuedSpinLock(&qword_140407F38, &LockHandle);
    }
  }
  v9 = (_KPROCESS **)qword_140407F30;
  v10 = 0;
  if ( (_DWORD)dword_140407F24 )
  {
    while ( *v9 )
    {
      v9 += 2;
      if ( ++v10 >= (unsigned int)dword_140407F24 )
        goto LABEL_37;
    }
    v9[1] = (_KPROCESS *)1;
    *v9 = Process;
  }
LABEL_37:
  ++dword_140407F28;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
