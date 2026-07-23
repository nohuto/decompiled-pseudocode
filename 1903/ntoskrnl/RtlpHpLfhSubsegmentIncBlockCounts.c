/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x140119FA4
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140038A80 (RtlpHpLfhSlotAllocate.c)
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
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
  __int64 v18; // r9
  volatile signed __int64 *v19; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v24; // bp
  unsigned int v25; // edx
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _KLOCK_ENTRY *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  signed __int16 v33; // tt
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
          v33 = v17;
          v17 = _InterlockedCompareExchange16(v13, v17 + 1, v17);
          if ( v33 == v17 )
          {
            v18 = v35;
            goto LABEL_10;
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
      v18 = v35;
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
LABEL_10:
      ++v13;
      v35 = v18 + 2;
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
    v19 = (volatile signed __int64 *)(a2 + 24);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 24));
      a6 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 24) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v24 = ++CurrentThread->AbAllocationRegionCount;
      v25 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v26 = !_BitScanReverse((unsigned int *)&v27, v25);
        if ( v26 )
          break;
        v28 = 1 << v27;
        v29 = v27;
        v30 = &CurrentThread->LockEntries[v29];
        v25 &= ~v28;
        if ( (v30->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v30->LockState.0 & 1) == 0
          && (*(_QWORD *)&v30->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v19 & 0x7FFFFFFFFFFFFFFCLL)
          && v30->LockState.SessionId == SessionId )
        {
          v30->AcquiredByte &= ~1u;
          if ( v30->LockState.0 )
          {
            if ( v30 )
            {
              v30->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v30->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v29].TreeNode);
              a6 = v30->BoostBitmap.AllFields & 0x1FFFF;
              v30->BoostBitmap.AllFields &= 0xFFFE0000;
              v30->ThreadLocalFlags &= ~1u;
              v30->LockState.0 = 0LL;
              v31 = ((char *)v30 - (char *)CurrentThread - 800) / 96;
              if ( v24 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v31;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v31);
              goto LABEL_42;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 24, SessionId, 0LL);
LABEL_42:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a2 + 24, &a6);
      v26 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v26
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v32);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v14;
}
