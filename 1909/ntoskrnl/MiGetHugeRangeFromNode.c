/*
 * XREFs of MiGetHugeRangeFromNode @ 0x1402C1B28
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x14089B9D0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MiUnlinkHugeRange @ 0x1402C286C (MiUnlinkHugeRange.c)
 */

__int64 __fastcall MiGetHugeRangeFromNode(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  _QWORD *v12; // r8
  int v13; // ecx
  _QWORD *v14; // rax
  __int64 v15; // r15
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v18; // di
  struct _KPRCB *v19; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  KSPIN_LOCK *SpinLock; // [rsp+80h] [rbp+8h]

  v3 = a1[889];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v6 = a1[2] + 1984LL * a2;
  if ( v3 )
  {
    v7 = dword_140465840[0];
    v8 = (unsigned int)dword_140465840[0];
    v9 = (_QWORD *)(v3 + 16LL * a2 * dword_140465840[0]);
    if ( a3 )
    {
      v10 = 0LL;
    }
    else
    {
      v9 += (unsigned int)dword_140465840[0];
      v10 = 1LL;
    }
    v11 = 0LL;
    SpinLock = a1 + 508;
    KeAcquireInStackQueuedSpinLock(a1 + 508, &LockHandle);
    while ( 1 )
    {
      if ( *(_QWORD *)(v6 + 8 * v10 + 1824) )
      {
        v12 = &v9[v8];
        v4 &= 0xFFFFFFFFFFFC0000uLL;
        v13 = 0;
        v11 = &v9[*(_DWORD *)(v6 + 1816) % v7];
        if ( v7 )
        {
          while ( 1 )
          {
            v4 ^= (v4 ^ *v11) & 0x3FFFF;
            if ( (v4 & 0x3FFFF) != 0 )
              break;
            v14 = v11 + 1;
            v11 = v9;
            if ( v14 != v12 )
              v11 = v14;
            if ( ++v13 >= v7 )
              goto LABEL_14;
          }
          v4 = MiUnlinkHugeRange(a1, v11, v12, 0x3FFFFLL, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
        }
      }
LABEL_14:
      v15 = v4 & 0x3FFFF;
      if ( (v4 & 0x3FFFF) != 0 )
        break;
      if ( a3 )
      {
        if ( v10 )
          goto LABEL_22;
        v9 += v8;
        v10 = 1LL;
      }
      else
      {
        if ( v10 != 1 )
          goto LABEL_22;
        v10 = 0LL;
        v9 -= v8;
      }
      v7 = v8;
    }
    *(_DWORD *)(v6 + 1816) = v11 - v9 + 1;
LABEL_22:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( v15 && a3 && (*(_DWORD *)(qword_140465EB0 + 8 * v15) & 0x3FFFF) == 1LL )
    {
      MiHugePageOperation(v4);
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      *(_QWORD *)(qword_140465EB0 + 8 * v15) &= 0xFFFFFFFFFFFC0000uLL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v18 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v19 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
      __writecr8(v18);
    }
  }
  return v4;
}
