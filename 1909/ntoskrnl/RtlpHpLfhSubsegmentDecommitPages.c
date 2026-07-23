/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x14001E510
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x14001DA54 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001DBF0 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x14001DBB0 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x14001E9E0 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpScheduleCompaction @ 0x14001F6F0 (RtlpHpScheduleCompaction.c)
 *     RtlpHpAcquireLockExclusive @ 0x14001F7B0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14012743C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentDecommitPages(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // r15
  unsigned __int8 v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // cl
  unsigned int v25; // esi
  unsigned int v26; // edi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v30; // si
  unsigned int v31; // r8d
  bool v32; // zf
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  _KLOCK_ENTRY *v36; // rbx
  unsigned __int8 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _KPRCB *v41; // rcx
  KIRQL v42; // [rsp+30h] [rbp-58h]
  unsigned int v43; // [rsp+34h] [rbp-54h] BYREF
  int v44; // [rsp+38h] [rbp-50h]
  int v45; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v46; // [rsp+A8h] [rbp+20h]

  v46 = a4;
  v42 = -1;
  LOBYTE(v45) = -1;
  v5 = a4;
  v6 = a3;
  v9 = 0;
  if ( a3 < 0 )
  {
    v10 = 1;
    v6 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && !v10 )
  {
    v11 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
    {
      v12 = *(__int16 *)(v11 + 22);
      result = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 11);
      if ( result <= 8 )
        result = 8LL;
      v14 = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 12);
      if ( v14 <= 8 )
        v14 = 8LL;
      v15 = *(_QWORD *)(v12 + v11 + 16) + *(_QWORD *)(v12 + v11 + 24);
      if ( v15 <= result || (result = RtlpHpScheduleCompaction(*(_QWORD *)(v11 + 56)), (result & 0x80000000) == 0LL) )
      {
        if ( v15 <= v14 )
          return result;
      }
      v5 = v46;
    }
  }
  result = *(unsigned __int8 *)(a2 + 45);
  if ( v6 < (unsigned int)result )
  {
    do
    {
      result = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v6, &v43);
      v6 = result;
      if ( (_DWORD)result == -1 )
        break;
      result = v43;
      if ( v43 < v5 )
      {
        if ( !v10 )
          break;
        v6 += v43;
      }
      else if ( v9 )
      {
        v24 = *(_BYTE *)(a2 + 44);
        v25 = v6 << v24;
        v26 = v43 << v24;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
          *(_QWORD *)a1,
          a2 + (v6 << v24),
          v43 << v24);
        result = RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v25, v26);
        if ( !v10 )
          break;
        v6 += v43;
        v5 = v46;
      }
      else
      {
        if ( (a5 & 1) == 0 )
          v42 = RtlpHpAcquireLockShared((volatile LONG *)(a1 + 72), *(unsigned __int8 *)(a1 + 57));
        v9 = 2;
        LOBYTE(v45) = RtlpHpAcquireLockExclusive(a2 + 24, *(unsigned __int8 *)(a1 + 57), v17);
      }
      result = *(unsigned __int8 *)(a2 + 45);
    }
    while ( v6 < (unsigned int)result );
    if ( v9 )
    {
      v19 = a2 + 24;
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v19);
        v20 = v45;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v45 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        result = v20;
        __writecr8(v20);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v19);
        v45 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v19, v16, v17, v18) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v30 = ++CurrentThread->AbAllocationRegionCount;
        v31 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v32 = !_BitScanReverse((unsigned int *)&v33, v31);
        v44 = v33;
        if ( v32 )
          goto LABEL_49;
        while ( 1 )
        {
          v34 = 1 << v33;
          v35 = v33;
          v36 = &CurrentThread->LockEntries[v35];
          v31 &= ~v34;
          if ( (v36->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v36->LockState.0 & 1) == 0
            && (*(_QWORD *)&v36->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
            && v36->LockState.SessionId == SessionId )
          {
            v36->AcquiredByte &= ~1u;
            if ( v36->LockState.0 )
              break;
          }
          v32 = !_BitScanReverse((unsigned int *)&v33, v31);
          v44 = v33;
          if ( v32 )
            goto LABEL_49;
        }
        if ( !v36 )
        {
LABEL_49:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v19, SessionId, 0LL);
        }
        else
        {
          v36->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v36->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v35].TreeNode);
          v45 = v36->BoostBitmap.AllFields & 0x1FFFF;
          v36->BoostBitmap.AllFields &= 0xFFFE0000;
          v36->ThreadLocalFlags &= ~1u;
          v36->LockState.0 = 0LL;
          v37 = 1 << (((char *)v36 - (char *)CurrentThread - 800) / 96);
          if ( v30 == 1 )
            CurrentThread->AbEntrySummary |= v37;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v37);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(CurrentThread, v19, &v45);
        v32 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v32
          && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v38, v39, v40);
      }
      if ( (a5 & 1) == 0 )
      {
        if ( *(_BYTE *)(a1 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v42 < 2u )
          {
            v41 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v41);
          }
          result = v42;
          __writecr8(v42);
        }
        else
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(a1 + 72);
          KeAbPostRelease(a1 + 72);
          return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v21, v22, v23);
        }
      }
    }
  }
  return result;
}
