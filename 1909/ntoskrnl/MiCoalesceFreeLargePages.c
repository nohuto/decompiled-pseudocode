/*
 * XREFs of MiCoalesceFreeLargePages @ 0x1400F7B70
 * Callers:
 *     MiProcessLargeCoalesceList @ 0x1400F7A0C (MiProcessLargeCoalesceList.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400F8050 (MiUnlinkNodeLargePageHelper.c)
 *     MiConstructNewLargeFreePage @ 0x1400F8310 (MiConstructNewLargeFreePage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCoalesceFreeLargePages(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  char v6; // bl
  signed __int64 *v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r11
  unsigned int v11; // r10d
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r12
  __int64 v15; // r11
  _QWORD *v16; // rdx
  unsigned __int8 v17; // dl
  __int64 v18; // rdi
  unsigned int v19; // r14d
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r14
  unsigned int j; // edx
  __int64 v25; // rdi
  unsigned int k; // ebp
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned __int64 m; // rax
  signed __int64 *v30; // rbx
  ULONG_PTR v31; // rcx
  unsigned __int8 v33; // al
  __int64 i; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v36; // rcx
  __int64 v37; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-78h]
  volatile signed __int64 *v39; // [rsp+48h] [rbp-70h]
  unsigned __int64 v40; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int8 v45; // [rsp+D8h] [rbp+20h]

  v3 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a1;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (signed __int64 *)(a1 + 184);
  v39 = (volatile signed __int64 *)(a1 + 184);
  ExAcquirePushLockSharedEx(a1 + 184, 0LL);
  v8 = MiLargePageSizes[v3];
  v40 = MiLargePageSizes[(unsigned int)(v3 - 1)];
  v9 = MiLargePageContainingFrames[v3];
  v10 = 48 * a2 - 0x58000000000LL;
  v37 = v10;
  v11 = 0;
  v12 = v10;
  v13 = a2;
  v14 = v40 / v8;
  if ( !(v40 / v8) )
  {
LABEL_11:
    v17 = 17;
    v45 = 17;
    v18 = v10;
    v19 = 0;
    if ( v14 )
    {
      v20 = 48 * v8;
      while ( 1 )
      {
        if ( v18 == v10 )
        {
          v33 = MiLockPageInline(v18);
          v10 = 48 * a2 - 0x58000000000LL;
          v17 = v33;
          v45 = v33;
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          for ( i = v18 - v20; i != v10; i -= v20 )
            _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
          _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
            goto LABEL_57;
          goto LABEL_47;
        }
        if ( (*(_BYTE *)(v18 + 34) & 7u) > 1
          || (*(_QWORD *)(v18 + 40) & 0xFFFFFFFFFLL) != v9
          || *(__int64 *)(v18 + 8) >= 0
          || *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL)) != a1 )
        {
          break;
        }
        ++v19;
        v20 = 48 * v8;
        v18 += 48 * v8;
        if ( v19 >= v14 )
        {
          v5 = a1;
          goto LABEL_21;
        }
      }
      for ( ; v18 != v10; v18 -= v20 )
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
      {
LABEL_57:
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v17 = v45;
      }
LABEL_47:
      __writecr8(v17);
      v30 = (signed __int64 *)v39;
      if ( _InterlockedCompareExchange64(v39, 0LL, 17LL) == 17 )
        goto LABEL_38;
    }
    else
    {
LABEL_21:
      v21 = *(_QWORD *)(v10 + 40) >> 58;
      v22 = v10;
      LockHandle.LockQueue.Next = 0LL;
      v23 = *(_QWORD *)(v5 + 16) + 1984 * v21;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v23 + 1952);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v23 + 1952));
      for ( j = 0; j < v14; v22 += 48 * v8 )
      {
        if ( (*(_BYTE *)(v22 + 34) & 7u) > 1 )
          break;
        if ( (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL) != v9 )
          break;
        if ( *(__int64 *)(v22 + 8) >= 0 )
          break;
        if ( *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL)) != v5 )
          break;
        ++j;
      }
      if ( j == v14 )
      {
        v25 = 48 * a2 - 0x58000000000LL;
        v6 = 10;
        for ( k = 0; k < v14; v25 += 48 * v8 )
        {
          v27 = *(_QWORD *)v25;
          v28 = *(_QWORD **)(v25 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 || *v28 != v25 )
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          MiUnlinkNodeLargePageHelper(v23, v25, a3, (*(_QWORD *)(v25 + 40) >> 36) & 3, 10);
          ++k;
          *(_BYTE *)(v25 + 34) = *(_BYTE *)(v25 + 34) & 0xF8 | 5;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      for ( m = v37 + 48 * (v40 - v8); m != v37; m -= 48 * v8 )
        _InterlockedAnd64((volatile signed __int64 *)(m + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(m + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v6 & 2) != 0 )
        MiConstructNewLargeFreePage(a2);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
      {
        v36 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v36);
      }
      __writecr8(v45);
      v30 = (signed __int64 *)v39;
      if ( _InterlockedCompareExchange64(v39, 0LL, 17LL) == 17 )
        goto LABEL_38;
    }
    ExfReleasePushLockShared(v30);
LABEL_38:
    v31 = (ULONG_PTR)v30;
    goto LABEL_42;
  }
  v15 = 48 * v8;
  v16 = (_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL);
  while ( v13 <= 0xFFFFFFFFFLL
       && (*v16 & 0x20000000000000LL) != 0
       && (*(_BYTE *)(v12 + 34) & 7u) <= 1
       && (*(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL) == v9
       && *(__int64 *)(v12 + 8) < 0
       && *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL)) == v5 )
  {
    ++v11;
    v13 += v8;
    v16 = (_QWORD *)((char *)v16 + v15);
    v12 += v15;
    if ( v11 >= v14 )
    {
      v10 = 48 * a2 - 0x58000000000LL;
      goto LABEL_11;
    }
  }
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  v31 = (ULONG_PTR)v7;
LABEL_42:
  KeAbPostRelease(v31);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
