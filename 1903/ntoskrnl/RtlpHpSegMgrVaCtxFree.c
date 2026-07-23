/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x14031B850
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x140166A58 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpHpQueryVA @ 0x1401108D8 (RtlpHpQueryVA.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  unsigned __int16 *v7; // rbx
  ULONG_PTR v8; // rbp
  unsigned __int64 v9; // rdi
  KIRQL v10; // al
  unsigned __int16 *v11; // r9
  KIRQL v12; // r15
  int v13; // r10d
  unsigned __int64 v14; // r8
  unsigned __int16 *v15; // rcx
  unsigned __int16 *v16; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v19; // si
  unsigned int v20; // edx
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 v30[4]; // [rsp+30h] [rbp-48h] BYREF
  int v31; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+88h] [rbp+10h]
  unsigned __int16 *v33; // [rsp+90h] [rbp+18h] BYREF

  v6 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  v30[0] = *(_OWORD *)(a1 + 40);
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, v30, &v33, 0LL);
  v8 = a1 + 112;
  v9 = (a2 - v6) / *a3;
  v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
  v11 = v33;
  v12 = v10;
  v13 = (unsigned __int16)(v33[1] ^ (1 << v9));
  v33[1] = v13;
  v14 = (unsigned __int64)*v11 >> 15;
  if ( v13 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( *((_QWORD *)v11 + 1) != -1LL )
    {
      while ( 1 )
      {
        v15 = *(unsigned __int16 **)(a1 + 8 * v14 + 120);
        if ( !v15 )
          NT_ASSERT("Link != ((void *)0)");
        *(_QWORD *)(a1 + 8 * v14 + 120) = *(_QWORD *)v15;
        if ( v15 == v11 + 4 )
          break;
        *(_QWORD *)v15 = v7;
        v7 = v15;
      }
      while ( 1 )
      {
        v16 = v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *(_QWORD *)v16 = *(_QWORD *)(a1 + 8 * v14 + 120);
        *(_QWORD *)(a1 + 8 * v14 + 120) = v16;
      }
    }
  }
  else
  {
    if ( ((v13 - 1) & v13) == 0 )
    {
      *((_QWORD *)v11 + 1) = *(_QWORD *)(a1 + 8 * v14 + 120);
      *(_QWORD *)(a1 + 8 * v14 + 120) = v11 + 4;
    }
    v6 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v12);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    v31 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 112) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v19 = ++CurrentThread->AbAllocationRegionCount;
    v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v21 = !_BitScanReverse((unsigned int *)&v22, v20);
      v32 = v22;
      if ( v21 )
        break;
      v23 = 1 << v22;
      v24 = v22;
      v25 = &CurrentThread->LockEntries[v24];
      v20 &= ~v23;
      if ( (v25->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v25->LockState.0 & 1) == 0
        && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
        && v25->LockState.SessionId == SessionId )
      {
        v25->AcquiredByte &= ~1u;
        if ( v25->LockState.0 )
        {
          if ( v25 )
          {
            v25->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v25->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v24].TreeNode);
            v31 = v25->BoostBitmap.AllFields & 0x1FFFF;
            v25->BoostBitmap.AllFields &= 0xFFFE0000;
            v25->ThreadLocalFlags &= ~1u;
            v25->LockState.0 = 0LL;
            v26 = ((char *)v25 - (char *)CurrentThread - 800) / 96;
            if ( v19 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v26;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
            goto LABEL_31;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8, SessionId, 0LL);
LABEL_31:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v8, &v31);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v27);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v6 )
    *a3 = 0x200000LL;
  return v6;
}
