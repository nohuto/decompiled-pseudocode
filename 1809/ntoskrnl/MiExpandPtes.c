/*
 * XREFs of MiExpandPtes @ 0x1400F6494
 * Callers:
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiObtainSystemVa @ 0x1400F69E4 (MiObtainSystemVa.c)
 *     MiObtainSessionVa @ 0x1400F7324 (MiObtainSessionVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  int v3; // r8d
  BOOL v4; // r13d
  unsigned int v5; // r12d
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR *v15; // r12
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  int v18; // eax
  int v19; // r8d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int8 OldIrql; // bl
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  char v25; // r10
  volatile signed __int32 *v26; // r8
  unsigned __int64 v27; // rcx
  ULONG_PTR v29; // r12
  struct _KTHREAD *v30; // rbx
  __int64 SessionId; // rdx
  unsigned int v32; // r8d
  bool v33; // zf
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  _KLOCK_ENTRY *v37; // rdi
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v40; // rsi
  signed int v41; // r8d
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  unsigned __int8 v44; // bl
  struct _KPRCB *v45; // rcx
  unsigned int v46; // [rsp+30h] [rbp-50h]
  unsigned int v47; // [rsp+34h] [rbp-4Ch]
  int v48; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v49; // [rsp+40h] [rbp-40h]
  unsigned __int64 v50; // [rsp+48h] [rbp-38h]
  unsigned __int64 v51; // [rsp+50h] [rbp-30h]
  unsigned __int64 v52; // [rsp+58h] [rbp-28h]
  __int64 v53; // [rsp+60h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int8 v56; // [rsp+D0h] [rbp+50h]
  int v57; // [rsp+D8h] [rbp+58h] BYREF

  if ( a2 + 511 < a2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 6);
  v4 = 0;
  v5 = *((_DWORD *)a1 + 7);
  v46 = v5;
  if ( a2 >= 0x200 )
    v4 = a1 == &qword_14043C060;
  v6 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v7 = v6 >> 9;
  v8 = (v3 & 4) != 0 ? 16LL : 1LL;
  v52 = v8;
  v50 = v6 / v8;
  if ( (v3 & 2) != 0 )
  {
    v47 = 16;
    v9 = v5;
    if ( v4 )
      v9 = 14LL;
    v10 = MiObtainSystemVa(v7, v9);
  }
  else
  {
    v47 = 1;
    v10 = MiObtainSessionVa(v7);
  }
  v49 = v10;
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = (unsigned int)((v12 - a1[2]) >> 3);
  v51 = v13;
  if ( !v4 )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = (ULONG_PTR *)(a1 + 6);
    v53 = (__int64)CurrentThread;
    v16 = v13 / v8;
    v17 = a1[1] + ((v13 / v8) >> 3);
    if ( (a1[3] & 2) != 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*v15, 0LL);
    }
    v18 = MiSplitBitmapPages(v46, v17, v50 + (v16 & 7));
    v19 = *((_DWORD *)a1 + 6);
    v48 = v18;
    if ( (v19 & 2) != 0 )
    {
      if ( v18 == 1 )
      {
        v20 = (v6 + v51) / v52;
        if ( v20 > *a1 )
          *a1 = v20;
        v21 = v16 & 0xFFFFFFFFFFFFFFC0uLL;
        if ( (v16 & 0x3F) == 0 )
          v21 = v16;
        if ( v21 < a1[9] || (v19 & 8) == 0 )
        {
          a1[9] = v21;
          *((_DWORD *)a1 + 6) = v19 | 8;
        }
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    else
    {
      v29 = *v15;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v29);
      v57 = 0;
      v30 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v29) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v30->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v30->SpecialApcDisable;
      v56 = ++v30->AbAllocationRegionCount;
      v32 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v33 = !_BitScanReverse((unsigned int *)&v34, v32);
        if ( v33 )
          break;
        v35 = 1 << v34;
        v36 = v34;
        v37 = &v30->LockEntries[v36];
        v32 &= ~v35;
        if ( (v37->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v37->LockState.0 & 1) == 0
          && (*(_QWORD *)&v37->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v29 & 0x7FFFFFFFFFFFFFFCLL)
          && v37->LockState.SessionId == (_DWORD)SessionId )
        {
          v37->AcquiredByte &= ~1u;
          if ( v37->LockState.0 )
          {
            if ( v37 )
            {
              v37->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v37->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v30->LockEntries[v36].TreeNode, SessionId);
              v57 = 0;
              v57 = v37->BoostBitmap.AllFields & 0x1FFFF;
              v37->BoostBitmap.AllFields &= 0xFFFE0000;
              v37->ThreadLocalFlags &= ~1u;
              v37->LockState.0 = 0LL;
              v38 = 1 << (((char *)v37 - (char *)v30 - 800) / 96);
              if ( v56 == 1 )
                v30->AbEntrySummary |= v38;
              else
                _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, v38);
              goto LABEL_55;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v30, v29, (unsigned int)SessionId, 0LL);
LABEL_55:
      --v30->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v30, v29, (__int64)&v57);
      v33 = v30->SpecialApcDisable++ == -1;
      if ( v33 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
        KiCheckForKernelApcDelivery(1LL);
      KiLeaveGuardedRegionUnsafe(v53);
    }
    if ( !v48 )
    {
      v40 = v12 << 25;
      v41 = v46;
      v42 = v49;
LABEL_75:
      MiReturnSystemVa(v42, (__int64)((v6 << 28) + v40) >> 16, v41);
      return 0LL;
    }
    v5 = v46;
    v11 = v49;
  }
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(v12, v12 + 8 * (v6 - 1), v47, v5) )
  {
    if ( v4 )
      v5 = 14;
    v40 = v12 << 25;
    v41 = v5;
    v42 = v11;
    goto LABEL_75;
  }
  _InterlockedExchangeAdd64(a1 + 11, v50);
  _InterlockedExchangeAdd64(a1 + 7, v50);
  if ( (dword_14054117C & 2) != 0 && a1 == &qword_14043C060 )
  {
    v43 = qword_14043BC60 + ((2 * v51) >> 3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
    if ( !(unsigned int)MiSplitBitmapPages(v5, v43, ((2 * (_BYTE)v51) & 7) + 2 * v50) )
      dword_14054117C &= ~2u;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v44 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v45 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v45);
    }
    __writecr8(v44);
  }
  if ( !v4 && a2 != v6 )
  {
    v23 = (v6 - a2) / v52;
    v24 = (a2 + v51) / v52;
    v25 = v24 & 0x1F;
    v26 = (volatile signed __int32 *)(a1[1] + 4 * (v24 >> 5));
    if ( (v24 & 0x1F) + v23 <= 0x20 )
    {
      if ( v23 == 32 )
        *v26 = 0;
      else
        _InterlockedAnd(v26, ~(((1 << v23) - 1) << v25));
    }
    else
    {
      if ( (v24 & 0x1F) != 0 )
      {
        _InterlockedAnd(v26, ~(((1 << (32 - (v24 & 0x1F))) - 1) << v25));
        v23 -= 32 - (unsigned int)(v24 & 0x1F);
        ++v26;
      }
      if ( v23 >= 0x20 )
      {
        v27 = v23 >> 5;
        v23 += -32LL * (v23 >> 5);
        do
        {
          *v26++ = 0;
          --v27;
        }
        while ( v27 );
      }
      if ( v23 )
        _InterlockedAnd(v26, ~((1 << v23) - 1));
    }
  }
  return v12;
}
