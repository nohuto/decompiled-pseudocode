/*
 * XREFs of MiExpandPtes @ 0x1400AA84C
 * Callers:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiObtainSystemVa @ 0x1400AAF7C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400AB840 (MiReturnSystemVa.c)
 *     MiSplitBitmapPages @ 0x1400ACFF0 (MiSplitBitmapPages.c)
 *     MiObtainSessionVa @ 0x140138958 (MiObtainSessionVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
  ULONG_PTR *v14; // r12
  struct _KTHREAD *CurrentThread; // rdx
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
  unsigned int v29; // eax
  ULONG_PTR v30; // r12
  struct _KTHREAD *v31; // rbx
  unsigned int SessionId; // edx
  unsigned int v33; // r8d
  bool v34; // zf
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  _KLOCK_ENTRY *v38; // rdi
  unsigned __int8 v39; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v41; // rsi
  __int64 v42; // r8
  unsigned __int64 v43; // rcx
  char v44; // bl
  unsigned __int64 v45; // rdi
  unsigned __int8 v46; // bl
  struct _KPRCB *v47; // rcx
  int v48; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v49; // [rsp+34h] [rbp-4Ch]
  int v50; // [rsp+38h] [rbp-48h]
  int v51; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v52; // [rsp+40h] [rbp-40h]
  unsigned __int64 v53; // [rsp+48h] [rbp-38h]
  unsigned __int64 v54; // [rsp+50h] [rbp-30h]
  unsigned __int64 v55; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  struct _KTHREAD *v57; // [rsp+78h] [rbp-8h]
  unsigned __int8 v59; // [rsp+D0h] [rbp+50h]
  unsigned int v60; // [rsp+D8h] [rbp+58h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 + 511 < a2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 6);
  v4 = 0;
  v5 = *((_DWORD *)a1 + 7);
  v60 = v5;
  if ( a2 >= 0x200 )
    v4 = a1 == &qword_1404669C0;
  v6 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v7 = v6 >> 9;
  v8 = (v3 & 4) != 0 ? 16LL : 1LL;
  v55 = v8;
  v53 = v6 / v8;
  if ( (v3 & 2) != 0 )
  {
    v49 = 16;
    v9 = v5;
    if ( v4 )
      v9 = 13LL;
    v10 = MiObtainSystemVa(v7, v9);
  }
  else
  {
    v49 = 1;
    v10 = MiObtainSessionVa(v7);
  }
  v52 = v10;
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = (unsigned int)((v12 - a1[2]) >> 3);
  v54 = v13;
  if ( v4 )
    goto LABEL_24;
  v14 = (ULONG_PTR *)(a1 + 6);
  CurrentThread = KeGetCurrentThread();
  v57 = CurrentThread;
  v16 = v13 / v8;
  v17 = a1[1] + ((v13 / v8) >> 3);
  if ( (a1[3] & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(*v14, 0LL);
  }
  v18 = MiSplitBitmapPages(v60, v17, v53 + (v16 & 7));
  v19 = *((_DWORD *)a1 + 6);
  v51 = v18;
  if ( (v19 & 2) != 0 )
  {
    if ( v18 == 1 )
    {
      v20 = (v6 + v54) / v55;
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
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
    v30 = *v14;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v30);
    v48 = 0;
    v31 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v31->ApcState.Process);
    else
      SessionId = -1;
    --v31->SpecialApcDisable;
    v59 = ++v31->AbAllocationRegionCount;
    v33 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v34 = !_BitScanReverse((unsigned int *)&v35, v33);
      v50 = v35;
      if ( v34 )
        break;
      v36 = 1 << v35;
      v37 = v35;
      v38 = &v31->LockEntries[v37];
      v33 &= ~v36;
      if ( (v38->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v38->LockState.0 & 1) == 0
        && (*(_QWORD *)&v38->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v30 & 0x7FFFFFFFFFFFFFFCLL)
        && v38->LockState.SessionId == SessionId )
      {
        v38->AcquiredByte &= ~1u;
        if ( v38->LockState.0 )
        {
          if ( v38 )
          {
            v38->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v38->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v31->LockEntries[v37].TreeNode);
            v48 = v38->BoostBitmap.AllFields & 0x1FFFF;
            v38->BoostBitmap.AllFields &= 0xFFFE0000;
            v38->ThreadLocalFlags &= ~1u;
            v38->LockState.0 = 0LL;
            v39 = 1 << (((char *)v38 - (char *)v31 - 800) / 96);
            if ( v59 == 1 )
              v31->AbEntrySummary |= v39;
            else
              _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, v39);
            goto LABEL_55;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v31, v30, SessionId, 0LL);
LABEL_55:
    --v31->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v31, v30, &v48);
    v34 = v31->SpecialApcDisable++ == -1;
    if ( v34 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
      KiCheckForKernelApcDelivery(1LL);
    KiLeaveGuardedRegionUnsafe((__int64)v57);
  }
  if ( v51 )
  {
    v5 = v60;
    v11 = v52;
LABEL_24:
    if ( (unsigned int)MiMakeZeroedPageTablesEx(v12, v12 + 8 * (v6 - 1), v49, v5, 0) )
    {
      _InterlockedExchangeAdd64(a1 + 11, v53);
      _InterlockedExchangeAdd64(a1 + 7, v53);
      if ( (dword_14057118C & 2) != 0 && a1 == &qword_1404669C0 )
      {
        v44 = 2 * v54;
        v45 = qword_140466620 + ((2 * v54) >> 3);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
        if ( !(unsigned int)MiSplitBitmapPages(v5, v45, (v44 & 7) + 2 * v53) )
          dword_14057118C &= ~2u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v46 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v47 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v47);
        }
        __writecr8(v46);
      }
      if ( v4 || a2 == v6 )
        return v12;
      v23 = (v6 - a2) / v55;
      v24 = (a2 + v54) / v55;
      v25 = v24 & 0x1F;
      v26 = (volatile signed __int32 *)(a1[1] + 4 * (v24 >> 5));
      if ( (v24 & 0x1F) + v23 <= 0x20 )
      {
        if ( v23 == 32 )
        {
          *v26 = 0;
          return v12;
        }
        v29 = ~(((1 << v23) - 1) << v25);
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
        if ( !v23 )
          return v12;
        v29 = -1 << v23;
      }
      _InterlockedAnd(v26, v29);
      return v12;
    }
    if ( v4 )
      v5 = 13;
    v41 = v12 << 25;
    v42 = v5;
    v43 = v11;
    goto LABEL_74;
  }
  v41 = v12 << 25;
  v42 = v60;
  v43 = v52;
LABEL_74:
  MiReturnSystemVa(v43, (__int64)((v6 << 28) + v41) >> 16, v42);
  return 0LL;
}
