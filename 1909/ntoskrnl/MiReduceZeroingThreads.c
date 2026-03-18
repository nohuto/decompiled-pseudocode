/*
 * XREFs of MiReduceZeroingThreads @ 0x1402DB00C
 * Callers:
 *     MiReassessZeroThreads @ 0x14018FE24 (MiReassessZeroThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReduceZeroingThreads(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  unsigned int v5; // edi
  char v6; // cl
  __int64 v7; // rax
  unsigned int v8; // r9d
  char v9; // r10
  __int64 v10; // r8
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 224);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v5 = *(_DWORD *)(v2 + 120);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
  do
  {
    v6 = *(_BYTE *)(*(_QWORD *)(v2 + 96) + 16LL * --v5 + 8);
    if ( (v6 & 2) == 0 )
    {
      if ( (v6 & 1) == 0 )
        break;
      v7 = *(_QWORD *)(v2 + 96);
      v4 = 1;
      --*(_DWORD *)(v2 + 124);
      *(_BYTE *)(*(_QWORD *)(v2 + 96) + 16LL * v5 + 8) = *(_BYTE *)(v7 + 16LL * v5 + 8) | 2;
    }
  }
  while ( v5 );
  v8 = *(_DWORD *)(v2 + 116);
  if ( v5 <= v8 )
    v8 = v5;
  if ( v8 )
  {
    v4 = 1;
    v9 = 1;
    if ( a2 == 1 )
    {
      v9 = 3;
      *(_DWORD *)(v2 + 88) = 4;
    }
    else
    {
      *(_DWORD *)(v2 + 124) += v8;
    }
    *(_DWORD *)(v2 + 112) -= v8;
    do
    {
      v10 = v5--;
      *(_BYTE *)(*(_QWORD *)(v2 + 96) + 16 * v10 + 8) |= v9;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    *(_DWORD *)(v2 + 88) = 4;
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
  return v4;
}
