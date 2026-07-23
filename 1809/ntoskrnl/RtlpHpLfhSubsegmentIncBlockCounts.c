/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402FDDF0
 * Callers:
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402FD508 (RtlpHpLfhSubsegmentCommitBlock.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        int a6,
        KIRQL *a7)
{
  int v7; // r14d
  KIRQL v10; // bp
  char v11; // cl
  __int64 v12; // rax
  signed __int16 *v13; // rdi
  unsigned int v14; // r15d
  __int64 v15; // rbx
  int v16; // esi
  signed __int16 v17; // ax
  signed __int16 v18; // tt
  __int64 v19; // r9
  volatile signed __int64 *v20; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v23; // bp
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  _KLOCK_ENTRY *v27; // rdi
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int16 *v34; // [rsp+30h] [rbp-48h]
  __int64 v35; // [rsp+88h] [rbp+10h]

  v7 = a6;
  if ( a6 )
    v10 = *a7;
  else
    v10 = -1;
  v11 = *(_BYTE *)(a2 + 44);
  v12 = a3 >> v11;
  v13 = (signed __int16 *)(2 * v12 + a2 + *(unsigned __int16 *)(a2 + 46));
  v35 = 2 * v12;
  _m_prefetchw(v13);
  v14 = -1;
  LODWORD(v15) = 0;
  v34 = &v13[((a3 + a4 - 1) >> v11) - (unsigned int)v12 + 1];
  v16 = 0;
  if ( v13 < v34 )
  {
    do
    {
      while ( 2 )
      {
        v17 = *v13;
        while ( v17 > 0 )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange16(v13, v17 + 1, v17);
          if ( v18 == v17 )
          {
            v19 = v35;
            goto LABEL_11;
          }
        }
        if ( !v7 )
        {
          v7 = 1;
          v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 24), *(unsigned __int8 *)(a1 + 57));
          continue;
        }
        break;
      }
      v19 = v35;
      if ( v17 )
      {
        ++v16;
        v15 = v35 >> 1;
        if ( v14 == -1 )
          v14 = v35 >> 1;
      }
      else
      {
        --v16;
      }
      *v13 = v17 + 1;
LABEL_11:
      ++v13;
      v35 = v19 + 2;
    }
    while ( v13 < v34 );
    if ( v16 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        (v16 << *(_BYTE *)(a2 + 44)) / 4096);
    if ( v14 != -1 )
    {
      v7 = 0;
      *a5 = v15 - v14 + 1;
      *a7 = v10;
    }
  }
  if ( v7 )
  {
    v20 = (volatile signed __int64 *)(a2 + 24);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 24));
      a6 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 24) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v23 = ++CurrentThread->AbAllocationRegionCount;
      LODWORD(v24) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v28 = !_BitScanReverse((unsigned int *)&v29, v24);
        if ( v28 )
          goto LABEL_36;
        v25 = 1 << v29;
        v26 = v29;
        v27 = &CurrentThread->LockEntries[v26];
        v24 = ~v25 & (unsigned int)v24;
        if ( (v27->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v27->LockState.0 & 1) == 0
          && (*(_QWORD *)&v27->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v20 & 0x7FFFFFFFFFFFFFFCLL)
          && v27->LockState.SessionId == SessionId )
        {
          v27->AcquiredByte &= ~1u;
          if ( v27->LockState.0 )
            break;
        }
      }
      if ( !v27 )
      {
LABEL_36:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 24, SessionId, 0LL);
        goto LABEL_43;
      }
      v27->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v27->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v26].TreeNode, v24);
      a6 = 0;
      a6 = v27->BoostBitmap.AllFields & 0x1FFFF;
      v27->BoostBitmap.AllFields &= 0xFFFE0000;
      v27->ThreadLocalFlags &= ~1u;
      v27->LockState.0 = 0LL;
      v30 = ((char *)v27 - (char *)CurrentThread - 800) / 96;
      if ( v23 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v30;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v30);
LABEL_43:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a2 + 24, (__int64)&a6);
      v28 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v28
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v31);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v14;
}
