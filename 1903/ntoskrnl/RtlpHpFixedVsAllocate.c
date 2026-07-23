/*
 * XREFs of RtlpHpFixedVsAllocate @ 0x14013C130
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     RtlFindClearBitsAndSetEx @ 0x140082140 (RtlFindClearBitsAndSetEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlFindLongestRunClearEx @ 0x140177B64 (RtlFindLongestRunClearEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__m128i *__fastcall RtlpHpFixedVsAllocate(unsigned __int64 a1, unsigned int a2, char a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  int v9; // r15d
  KIRQL v10; // si
  __m128i v11; // xmm0
  __m128i *v12; // r14
  int LongestRunClear; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v17; // r15
  unsigned int v18; // r8d
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v27[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 ClearBitsAndSet; // [rsp+80h] [rbp+8h] BYREF
  int v29; // [rsp+88h] [rbp+10h] BYREF
  int v30; // [rsp+90h] [rbp+18h]

  v5 = a2;
  v6 = a1 + 24;
  v9 = a3 & 1;
  if ( (a3 & 1) != 0 )
    v10 = -1;
  else
    v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 24), *(_DWORD *)(a1 + 32));
  v11 = *(__m128i *)(a1 + 48);
  v27[0] = *(_QWORD *)(a1 + 48);
  v27[1] = a1 ^ _mm_srli_si128(v11, 8).m128i_u64[0];
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v27, v5 >> 12, 0LL);
  if ( ClearBitsAndSet == -1LL )
  {
    LongestRunClear = RtlFindLongestRunClearEx(v27, &ClearBitsAndSet);
    v12 = 0LL;
    *a5 = LongestRunClear << 12;
  }
  else
  {
    v12 = (__m128i *)(a1 + (ClearBitsAndSet << 12));
    *a5 = 0;
    *a4 = 0;
  }
  if ( !v9 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6);
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
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6);
      v29 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v17 = ++CurrentThread->AbAllocationRegionCount;
      v18 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v19 = !_BitScanReverse((unsigned int *)&v20, v18);
        v30 = v20;
        if ( v19 )
          goto LABEL_17;
        v21 = 1 << v20;
        v22 = v20;
        v23 = &CurrentThread->LockEntries[v22];
        v18 &= ~v21;
        if ( (v23->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v23->LockState.0 & 1) == 0
          && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
          && v23->LockState.SessionId == SessionId )
        {
          v23->AcquiredByte &= ~1u;
          if ( v23->LockState.0 )
            break;
        }
      }
      if ( !v23 )
      {
LABEL_17:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, SessionId, 0LL);
        goto LABEL_29;
      }
      v23->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v23->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v22].TreeNode);
      v29 = v23->BoostBitmap.AllFields & 0x1FFFF;
      v23->BoostBitmap.AllFields &= 0xFFFE0000;
      v23->ThreadLocalFlags &= ~1u;
      v23->LockState.0 = 0LL;
      v24 = ((char *)v23 - (char *)CurrentThread - 800) / 96;
      if ( v17 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v24;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v24);
LABEL_29:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v6, &v29);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v25);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v12;
}
