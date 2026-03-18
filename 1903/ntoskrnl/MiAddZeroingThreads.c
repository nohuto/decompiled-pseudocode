/*
 * XREFs of MiAddZeroingThreads @ 0x14018FE30
 * Callers:
 *     MiReassessZeroThreads @ 0x14018FC84 (MiReassessZeroThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAddZeroingThreads(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // esi
  unsigned __int8 OldIrql; // bl
  __int64 v6; // r8
  unsigned __int8 v7; // bl
  struct _KPRCB *v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v10[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 224);
  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_DWORD *)(v1 + 112);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 24), &LockHandle);
  if ( v3 == *(_DWORD *)(v1 + 120) )
    goto LABEL_2;
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v1 + 96) + 16LL * v3 + 8) & 2) != 0 )
      break;
    ++v2;
    ++v3;
  }
  while ( v3 != *(_DWORD *)(v1 + 120) );
  if ( !v2 )
  {
LABEL_2:
    *(_DWORD *)(v1 + 88) = 4;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    return 0LL;
  }
  else
  {
    if ( *(_DWORD *)(v1 + 116) > v2 )
      *(_DWORD *)(v1 + 116) = v2;
    v6 = 2LL * *(unsigned int *)(v1 + 112);
    --*(_DWORD *)(v1 + 124);
    ++*(_DWORD *)(v1 + 112);
    _InterlockedOr(v10, 0);
    *(_BYTE *)(*(_QWORD *)(v1 + 96) + 8 * v6 + 8) &= ~1u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v7 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v8 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v8);
    }
    __writecr8(v7);
    return 1LL;
  }
}
