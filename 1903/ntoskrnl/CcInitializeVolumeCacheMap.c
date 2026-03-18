/*
 * XREFs of CcInitializeVolumeCacheMap @ 0x140120DF4
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcInitializeVolumeCacheMap(__int64 a1, __int64 **a2)
{
  __int64 v2; // r15
  __int64 v4; // r15
  __int64 *i; // rax
  __int64 *v6; // rdi
  unsigned __int8 v7; // r14
  unsigned __int8 OldIrql; // di
  __int64 *PoolWithTag; // rax
  __int64 *j; // rax
  __int64 *v12; // r14
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v16; // r15
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 8);
  else
    v4 = *(_QWORD *)(a1 + 8);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    v6 = i - 2;
    if ( *(i - 1) == v4 )
    {
      ++*((_DWORD *)v6 + 1);
      goto LABEL_8;
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
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6D566343u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xD0uLL);
  ++*((_DWORD *)v6 + 1);
  *(_DWORD *)v6 = 13632248;
  v6[1] = v4;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( j = (__int64 *)CcVolumeCacheMapList; j != &CcVolumeCacheMapList; j = (__int64 *)*j )
  {
    v12 = j - 2;
    if ( *(j - 1) == v4 )
    {
      ++*((_DWORD *)v12 + 1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v16 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v17 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v17);
      }
      __writecr8(v16);
      ExFreePoolWithTag(v6, 0x6D566343u);
      *a2 = v12;
      return 0LL;
    }
  }
  v13 = (_QWORD *)qword_140463DA8;
  v14 = v6 + 2;
  if ( *(__int64 **)qword_140463DA8 != &CcVolumeCacheMapList )
    __fastfail(3u);
  *v14 = &CcVolumeCacheMapList;
  v6[3] = (__int64)v13;
  *v13 = v14;
  qword_140463DA8 = (__int64)(v6 + 2);
LABEL_8:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v7 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(v7);
  *a2 = v6;
  return 0LL;
}
