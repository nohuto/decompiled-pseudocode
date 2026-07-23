/*
 * XREFs of MiCoalesceFreeLargePages @ 0x140090750
 * Callers:
 *     MiProcessLargeCoalesceList @ 0x1400905DC (MiProcessLargeCoalesceList.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400646F0 (MiUnlinkNodeLargePageHelper.c)
 *     MiConstructNewLargeFreePage @ 0x1400910F0 (MiConstructNewLargeFreePage.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCoalesceFreeLargePages(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rbx
  volatile signed __int64 *v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r10
  unsigned int v12; // r11d
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  _QWORD *v17; // r10
  unsigned __int8 v18; // r12
  __int64 v19; // rbx
  unsigned int v20; // ebp
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned int v23; // ebp
  __int64 v24; // rbx
  _QWORD *v25; // r12
  unsigned int j; // edx
  unsigned int v27; // r15d
  __int64 v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  char v31; // al
  unsigned __int64 k; // rax
  ULONG_PTR v33; // rbx
  __int64 v34; // rcx
  unsigned __int8 v36; // al
  __int64 i; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v39; // rcx
  unsigned int v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+38h] [rbp-80h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *v43; // [rsp+48h] [rbp-70h]
  unsigned __int64 v44; // [rsp+50h] [rbp-68h]
  _QWORD v45[12]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int8 v46; // [rsp+C0h] [rbp+8h]
  char v49; // [rsp+D8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v49 = 0;
  v43 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 184);
  BugCheckParameter2 = (volatile signed __int64 *)(a1 + 184);
  ExAcquirePushLockSharedEx(a1 + 184, 0LL);
  v40 = v4 - 1;
  v8 = MiLargePageSizes[v4];
  v9 = 6 * a2;
  v44 = MiLargePageSizes[(unsigned int)(v4 - 1)];
  v10 = MiLargePageContainingFrames[v4];
  v11 = 48 * a2 - 0x58000000000LL;
  v41 = v11;
  v12 = 0;
  v13 = a2;
  v14 = v11;
  v15 = v44 / v8;
  if ( !(v44 / v8) )
  {
LABEL_11:
    v18 = 17;
    v46 = 17;
    v19 = v11;
    v20 = 0;
    if ( v15 )
    {
      v21 = 48 * v8;
      while ( 1 )
      {
        if ( v19 == v11 )
        {
          v36 = MiLockPageInline(v19);
          v11 = v41;
          v18 = v36;
          v46 = v36;
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          for ( i = v19 - v21; i != v11; i -= v21 )
            _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
          _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
            goto LABEL_57;
          goto LABEL_46;
        }
        if ( (*(_BYTE *)(v19 + 34) & 7u) > 1
          || (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFLL) != v10
          || *(__int64 *)(v19 + 8) >= 0
          || *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v19 + 40) >> 40) & 0x3FFLL)) != a1 )
        {
          break;
        }
        ++v20;
        v21 = 48 * v8;
        v19 += 48 * v8;
        if ( v20 >= v15 )
          goto LABEL_20;
      }
      for ( ; v19 != v11; v19 -= v21 )
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
      {
LABEL_57:
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
LABEL_46:
      __writecr8(v18);
      v33 = (ULONG_PTR)BugCheckParameter2;
      if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) == 17 )
        goto LABEL_40;
    }
    else
    {
LABEL_20:
      v22 = *(_QWORD *)(v11 + 40) >> 58;
      v23 = 0;
      v24 = v11;
      v45[0] = 0LL;
      v25 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 1984 * v22);
      v45[1] = v25 + 241;
      KxAcquireQueuedSpinLock(v45);
      for ( j = 0; j < v15; v24 += 48 * v8 )
      {
        if ( (*(_BYTE *)(v24 + 34) & 7u) > 1 )
          break;
        if ( (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) != v10 )
          break;
        if ( *(__int64 *)(v24 + 8) >= 0 )
          break;
        if ( *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v24 + 40) >> 40) & 0x3FFLL)) != a1 )
          break;
        ++j;
      }
      v27 = 0;
      if ( j == v15 )
      {
        v28 = v41;
        v49 = 10;
        if ( v15 )
        {
          do
          {
            v29 = *(_QWORD *)v28;
            v30 = *(_QWORD **)(v28 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 || *v30 != v28 )
              __fastfail(3u);
            *v30 = v29;
            *(_QWORD *)(v29 + 8) = v30;
            MiUnlinkNodeLargePageHelper(v25, v28, a3, (*(_QWORD *)(v28 + 40) >> 36) & 3, 10);
            v31 = *(_BYTE *)(v28 + 34);
            if ( (v31 & 7) != 0 )
              v27 = 1;
            ++v23;
            *(_BYTE *)(v28 + 34) = v31 & 0xF8 | 5;
            v28 += 48 * v8;
          }
          while ( v23 < v15 );
        }
      }
      KxReleaseQueuedSpinLock(v45);
      for ( k = v41 + 48 * (v44 - v8); k != v41; k -= 48 * v8 )
        _InterlockedAnd64((volatile signed __int64 *)(k + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(k + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v49 & 2) != 0 )
        MiConstructNewLargeFreePage(a2, v40, v27);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v46 < 2u )
      {
        v39 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v39);
      }
      __writecr8(v46);
      v33 = (ULONG_PTR)BugCheckParameter2;
      if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) == 17 )
        goto LABEL_40;
    }
    ExfReleasePushLockShared(v33);
LABEL_40:
    KeAbPostRelease(v33);
    v34 = (__int64)v43;
    return KiLeaveGuardedRegionUnsafe(v34);
  }
  v16 = 48 * v8;
  v17 = (_QWORD *)(8 * v9 - 0x57FFFFFFFD8LL);
  while ( v13 <= 0xFFFFFFFFFLL
       && (*v17 & 0x20000000000000LL) != 0
       && (*(_BYTE *)(v14 + 34) & 7u) <= 1
       && (*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFLL) == v10
       && *(__int64 *)(v14 + 8) < 0
       && *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL)) == a1 )
  {
    ++v12;
    v13 += v8;
    v17 = (_QWORD *)((char *)v17 + v16);
    v14 += v16;
    if ( v12 >= v15 )
    {
      v11 = v41;
      goto LABEL_11;
    }
  }
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v34 = (__int64)CurrentThread;
  return KiLeaveGuardedRegionUnsafe(v34);
}
