/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD8EC
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BED70 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhOwnerCompact @ 0x1401B6758 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockShared @ 0x140009644 (RtlpHpAcquireLockShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x14010E950 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1402FD820 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpScheduleCompaction @ 0x14031F0A4 (RtlpHpScheduleCompaction.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentDecommitPages(__int64 a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  int v5; // r13d
  unsigned int v6; // ebx
  unsigned int v7; // esi
  KIRQL v10; // r14
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  unsigned int SessionId; // r12d
  int v18; // r12d
  ULONG_PTR v19; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v21; // bp
  __int64 v22; // rdx
  char v23; // cl
  unsigned int v24; // edi
  int v25; // ebx
  int v26; // eax
  __int64 v27; // rcx
  _KLOCK_ENTRY *v28; // rsi
  bool v29; // zf
  __int64 v30; // rcx
  unsigned __int8 v31; // al
  __int64 v32; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v34; // rcx
  int v35; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v36[21]; // [rsp+34h] [rbp-54h] BYREF
  KIRQL v37; // [rsp+A0h] [rbp+18h]

  v5 = 0;
  v37 = -1;
  v6 = a4;
  v7 = a3;
  v10 = -1;
  if ( a3 >= 0 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    v7 = 1;
  }
  v35 = v11;
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && !v11 )
  {
    v12 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
    {
      v13 = *(__int16 *)(v12 + 22);
      result = *(_QWORD *)(v13 + v12 + 8) >> *(_BYTE *)(v12 + 11);
      if ( result <= 8 )
        result = 8LL;
      v15 = *(_QWORD *)(v13 + v12 + 8) >> *(_BYTE *)(v12 + 12);
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = *(_QWORD *)(v13 + v12 + 16) + *(_QWORD *)(v13 + v12 + 24);
      if ( v16 <= result
        || (result = RtlpHpScheduleCompaction(*(_QWORD *)(v12 + 56), v13, v12, 8LL), (result & 0x80000000) == 0LL) )
      {
        if ( v16 <= v15 )
          return result;
      }
      v6 = a4;
    }
  }
  result = *(unsigned __int8 *)(a2 + 45);
  if ( v7 >= (unsigned int)result )
    return result;
  SessionId = -1;
  do
  {
    result = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v7, v36);
    v7 = result;
    if ( (_DWORD)result == -1 )
      break;
    v18 = v36[0];
    if ( v36[0] >= v6 )
    {
      if ( !v5 )
      {
        if ( (a5 & 1) == 0 )
          v37 = RtlpHpAcquireLockShared((volatile LONG *)(a1 + 72), *(unsigned __int8 *)(a1 + 57));
        v5 = 2;
        v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 24), *(unsigned __int8 *)(a1 + 57));
        goto LABEL_35;
      }
      v23 = *(_BYTE *)(a2 + 44);
      v24 = (_DWORD)result << v23;
      v25 = v36[0] << v23;
      ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
        *(_QWORD *)a1,
        a2 + (unsigned int)((_DWORD)result << v23),
        (unsigned int)(v36[0] << v23));
      result = RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v24, v25);
      v11 = v35;
      if ( !v35 )
      {
LABEL_20:
        SessionId = -1;
        break;
      }
      v6 = a4;
    }
    else if ( !v11 )
    {
      goto LABEL_20;
    }
    v7 += v18;
LABEL_35:
    result = *(unsigned __int8 *)(a2 + 45);
    SessionId = -1;
  }
  while ( v7 < (unsigned int)result );
  if ( v5 )
  {
    v19 = a2 + 24;
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v19);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      result = v10;
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 24));
      v35 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 24) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      --CurrentThread->SpecialApcDisable;
      v21 = ++CurrentThread->AbAllocationRegionCount;
      LODWORD(v22) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v29 = !_BitScanReverse((unsigned int *)&v30, v22);
        v36[1] = v30;
        if ( v29 )
          goto LABEL_43;
        v26 = 1 << v30;
        v27 = v30;
        v28 = &CurrentThread->LockEntries[v27];
        v22 = ~v26 & (unsigned int)v22;
        if ( (v28->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v28->LockState.0 & 1) == 0
          && (*(_QWORD *)&v28->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
          && v28->LockState.SessionId == SessionId )
        {
          v28->AcquiredByte &= ~1u;
          if ( v28->LockState.0 )
            break;
        }
      }
      if ( !v28 )
      {
LABEL_43:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v19, SessionId, 0LL);
        goto LABEL_50;
      }
      v28->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v28->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v27].TreeNode, v22);
      v35 = 0;
      v35 = v28->BoostBitmap.AllFields & 0x1FFFF;
      v28->BoostBitmap.AllFields &= 0xFFFE0000;
      v28->ThreadLocalFlags &= ~1u;
      v28->LockState.0 = 0LL;
      v31 = 1 << (((char *)v28 - (char *)CurrentThread - 800) / 96);
      if ( v21 == 1 )
        CurrentThread->AbEntrySummary |= v31;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v31);
LABEL_50:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v19, (__int64)&v35);
      v29 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v29
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v32);
      }
      result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    if ( (a5 & 1) == 0 )
    {
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v37 < 2u )
        {
          v34 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v34);
        }
        result = v37;
        __writecr8(v37);
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
        KeAbPostRelease(a1 + 72);
        return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
  }
  return result;
}
