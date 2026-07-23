/*
 * XREFs of MiExpandPtes @ 0x1400E5D60
 * Callers:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 *     MiObtainSystemVa @ 0x1400E648C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400E6D50 (MiReturnSystemVa.c)
 *     MiSplitBitmapPages @ 0x1400E8500 (MiSplitBitmapPages.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     MiObtainSessionVa @ 0x140138FF4 (MiObtainSessionVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
  __int64 v40; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v42; // rsi
  __int64 v43; // r8
  unsigned __int64 v44; // rcx
  char v45; // bl
  unsigned __int64 v46; // rdi
  unsigned __int8 v47; // bl
  struct _KPRCB *v48; // rcx
  int v49; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v50; // [rsp+34h] [rbp-4Ch]
  int v51; // [rsp+38h] [rbp-48h]
  int v52; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v53; // [rsp+40h] [rbp-40h]
  unsigned __int64 v54; // [rsp+48h] [rbp-38h]
  unsigned __int64 v55; // [rsp+50h] [rbp-30h]
  unsigned __int64 v56; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  struct _KTHREAD *v58; // [rsp+78h] [rbp-8h]
  unsigned __int8 v60; // [rsp+D0h] [rbp+50h]
  unsigned int v61; // [rsp+D8h] [rbp+58h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 + 511 < a2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 6);
  v4 = 0;
  v5 = *((_DWORD *)a1 + 7);
  v61 = v5;
  if ( a2 >= 0x200 )
    v4 = a1 == &qword_1404666C0;
  v6 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v7 = v6 >> 9;
  v8 = (v3 & 4) != 0 ? 16LL : 1LL;
  v56 = v8;
  v54 = v6 / v8;
  if ( (v3 & 2) != 0 )
  {
    v50 = 16;
    v9 = v5;
    if ( v4 )
      v9 = 13LL;
    v10 = MiObtainSystemVa(v7, v9);
  }
  else
  {
    v50 = 1;
    v10 = MiObtainSessionVa(v7);
  }
  v53 = v10;
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = (unsigned int)((v12 - a1[2]) >> 3);
  v55 = v13;
  if ( v4 )
    goto LABEL_24;
  v14 = (ULONG_PTR *)(a1 + 6);
  CurrentThread = KeGetCurrentThread();
  v58 = CurrentThread;
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
  v18 = MiSplitBitmapPages(v61, v17, v54 + (v16 & 7));
  v19 = *((_DWORD *)a1 + 6);
  v52 = v18;
  if ( (v19 & 2) != 0 )
  {
    if ( v18 == 1 )
    {
      v20 = (v6 + v55) / v56;
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
    v49 = 0;
    v31 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v31->ApcState.Process);
    else
      SessionId = -1;
    --v31->SpecialApcDisable;
    v60 = ++v31->AbAllocationRegionCount;
    v33 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v34 = !_BitScanReverse((unsigned int *)&v35, v33);
      v51 = v35;
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
            v49 = v38->BoostBitmap.AllFields & 0x1FFFF;
            v38->BoostBitmap.AllFields &= 0xFFFE0000;
            v38->ThreadLocalFlags &= ~1u;
            v38->LockState.0 = 0LL;
            v39 = 1 << (((char *)v38 - (char *)v31 - 800) / 96);
            if ( v60 == 1 )
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v31, v30, &v49);
    v34 = v31->SpecialApcDisable++ == -1;
    if ( v34 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
      KiCheckForKernelApcDelivery(1LL, v40);
    KiLeaveGuardedRegionUnsafe((__int64)v58);
  }
  if ( v52 )
  {
    v5 = v61;
    v11 = v53;
LABEL_24:
    if ( (unsigned int)MiMakeZeroedPageTablesEx(v12, v12 + 8 * (v6 - 1), v50, v5, 0) )
    {
      _InterlockedExchangeAdd64(a1 + 11, v54);
      _InterlockedExchangeAdd64(a1 + 7, v54);
      if ( (dword_14057118C & 2) != 0 && a1 == &qword_1404666C0 )
      {
        v45 = 2 * v55;
        v46 = qword_140466320 + ((2 * v55) >> 3);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
        if ( !(unsigned int)MiSplitBitmapPages(v5, v46, (v45 & 7) + 2 * v54) )
          dword_14057118C &= ~2u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v47 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v48 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v48);
        }
        __writecr8(v47);
      }
      if ( v4 || a2 == v6 )
        return v12;
      v23 = (v6 - a2) / v56;
      v24 = (a2 + v55) / v56;
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
    v42 = v12 << 25;
    v43 = v5;
    v44 = v11;
    goto LABEL_74;
  }
  v42 = v12 << 25;
  v43 = v61;
  v44 = v53;
LABEL_74:
  MiReturnSystemVa(v44, (__int64)((v6 << 28) + v42) >> 16, v43);
  return 0LL;
}
