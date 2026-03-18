/*
 * XREFs of ExpTryToAcquireResourceExclusiveLite @ 0x14033ADE4
 * Callers:
 *     ExTryToAcquireResourceExclusiveLite @ 0x14033AA60 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x14003DF80 (ExpTryAcquireResourceExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1403316D8 (PerfLogExecutiveResourceAcquire.c)
 */

char __fastcall ExpTryToAcquireResourceExclusiveLite(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // r12d
  struct _KTHREAD *CurrentThread; // r14
  int v5; // r15d
  int v6; // ebp
  char v7; // di
  int v8; // ecx
  unsigned int v9; // eax
  unsigned __int8 OldIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = 65537;
  v6 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  __incgsdword(0x63E0u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v7 = ExpTryAcquireResourceExclusive(a1);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 56) & 7;
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_DWORD *)(a1 + 56) = v8 | 8;
    if ( v6 )
    {
      v2 = 1;
      v5 = 65569;
      v3 = *(_DWORD *)(a1 + 68);
    }
  }
  else if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v9 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v9;
    if ( v6 )
    {
      v3 = *(_DWORD *)(a1 + 68);
      v2 = v9 >> 3;
      v5 = 65585;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v7 )
  {
    __incgsdword(0x63E4u);
    __incgsdword(0x6364u);
  }
  if ( v6 )
    PerfLogExecutiveResourceAcquire(v5, a1, v2, v3);
  return v7;
}
