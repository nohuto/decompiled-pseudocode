/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x14001EC20
 * Callers:
 *     RtlpHpSegFree @ 0x14001D8B4 (RtlpHpSegFree.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     RtlpHpSegPageRangeFree @ 0x14031B60C (RtlpHpSegPageRangeFree.c)
 * Callees:
 *     RtlpHpSegPageRangeCoalesce @ 0x14001F1D0 (RtlpHpSegPageRangeCoalesce.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlpHpSegSegmentFree @ 0x140166420 (RtlpHpSegSegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // r14d
  int v5; // r10d
  unsigned __int8 CurrentIrql; // bp
  char v9; // di
  int v10; // esi
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v13; // edx
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbx
  char v20; // cl
  int v21; // r11d
  int v22; // r10d
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // r9
  __int16 *v27; // rcx
  int v28; // eax
  unsigned int i; // edx
  __int64 v30; // rdx
  BOOLEAN v31; // al
  __int64 v32; // rax
  __int64 result; // rax
  _QWORD *v34; // r14
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  char *v37; // rax
  __int64 v38; // r9
  char v39; // cl
  struct _KTHREAD *v40; // rdi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v42; // bp
  unsigned int v43; // edx
  bool v44; // zf
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  _KLOCK_ENTRY *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v54; // rcx
  int v55; // eax
  int v56; // eax
  signed __int32 v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  struct _KPRCB *v60; // rcx
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v62; // [rsp+90h] [rbp+8h] BYREF
  int v63; // [rsp+98h] [rbp+10h] BYREF
  int v64; // [rsp+A0h] [rbp+18h] BYREF
  int v65; // [rsp+A8h] [rbp+20h]

  v65 = a4;
  v64 = a3;
  v4 = *(unsigned __int8 *)(a2 + 31);
  v5 = a4;
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v37 = (char *)(a2 + 56);
    v38 = (unsigned int)(v4 - 2);
    do
    {
      v39 = *v37;
      v37 += 32;
      *(v37 - 32) = v39 & 0xFE;
      --v38;
    }
    while ( v38 );
  }
  CurrentIrql = -1;
  v9 = 2;
  v10 = v5 & 1;
  if ( (v5 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64, CurrentIrql);
      }
      else
      {
        v62 = 0;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v55 = SchedulerAssist[5];
            SchedulerAssist[5] = v55 + 1;
            if ( v55 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 64), 0x1Fu) )
        {
          v54 = CurrentPrcb->SchedulerAssist;
          if ( v54 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v56 = v54[5] - 1;
              v54[5] = v56;
              if ( !v56 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          v62 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64, CurrentIrql);
        }
        v13 = *(_DWORD *)(a1 + 64);
        while ( (v13 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v13 & 0x40000000) == 0 )
          {
            v57 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v13 | 0x40000000, v13);
            v44 = v13 == v57;
            v13 = v57;
            if ( !v44 )
              continue;
          }
          KeYieldProcessorEx(&v62);
          v13 = *(_DWORD *)(a1 + 64);
        }
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      CurrentIrql = -1;
    }
    v5 = v65;
  }
  v14 = *(_DWORD *)(a2 + 28);
  LOBYTE(v64) = CurrentIrql;
  if ( HIBYTE(v14) != v4 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_WORD *)(a2 + 28) = -1;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + a2 + 31) = v4 - 1;
  *(_WORD *)(a2 + 28) = v14;
  *(_BYTE *)(a2 + 31) = v4;
  *(_DWORD *)a2 = -857879331;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v15 = RtlpHpSegPageRangeCoalesce(a1, a2, v5, 0, (__int64)&v64);
  v18 = *(unsigned __int8 *)(a1 + 13);
  v19 = v15;
  if ( (v18 & 0x10) != 0
    && (result = *(unsigned __int8 *)(v15 + 31), (_DWORD)result == 256 - *(unsigned __int8 *)(a1 + 10)) )
  {
    v34 = (_QWORD *)(v19 & *(_QWORD *)a1);
    *(_DWORD *)v19 = -857879297;
    if ( v34 )
    {
      v58 = *v34;
      result = v34[1];
      if ( *(_QWORD **)(*v34 + 8LL) != v34 || *(_QWORD **)result != v34 )
        __fastfail(3u);
      *(_QWORD *)result = v58;
      *(_QWORD *)(v58 + 8) = result;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v18 & 7) != 0 )
    {
      v20 = *(_BYTE *)(a1 + 8);
      v21 = 0;
      v22 = *(unsigned __int8 *)(v19 + 31) << v20;
      v23 = (v19 & *(_QWORD *)a1) + ((v19 - (v19 & *(_QWORD *)a1)) >> 5 << v20);
      v24 = v23 & *(_QWORD *)a1;
      LODWORD(v23) = v23 - v24;
      v25 = *(_QWORD *)(v24 + 24);
      v26 = v25 + 2 * ((unsigned __int64)(unsigned int)(v22 + v23 - 1) >> 21);
      v27 = (__int16 *)(v25 + 2 * ((unsigned __int64)(unsigned int)v23 >> 21));
      v28 = 0;
      for ( i = ((__int64)(2 * ((unsigned __int64)(unsigned int)(v22 + v23 - 1) >> 21)
                         - 2 * ((unsigned __int64)(unsigned int)v23 >> 21)) >> 1)
              + 1; (unsigned __int64)v27 <= v26; ++v27 )
      {
        if ( (*v27 & 0x7FF) != 0 )
        {
          if ( *v27 < 0 )
            ++v28;
        }
        else
        {
          ++v21;
        }
      }
      if ( v28 == i )
      {
        v9 = i > (unsigned int)(v22 + 0x1FFFFF) >> 21;
      }
      else if ( !v28 )
      {
        v9 = 4;
        if ( v21 )
          v9 = 3;
      }
    }
    else
    {
      v9 = 4;
    }
    *(_BYTE *)(v19 + 30) = v9;
    v30 = *(_QWORD *)(a1 + 96);
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
    {
      if ( v30 )
        v30 ^= a1 + 96;
      else
        v30 = 0LL;
    }
    v31 = 0;
    if ( v30 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v19 + 28) < *(_DWORD *)(v30 + 28) )
        {
          v32 = *(_QWORD *)v30;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_36;
            v32 ^= v30;
          }
          if ( !v32 )
          {
LABEL_36:
            v31 = 0;
            break;
          }
        }
        else
        {
          v32 = *(_QWORD *)(v30 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_37;
            v32 ^= v30;
          }
          if ( !v32 )
          {
LABEL_37:
            v31 = 1;
            break;
          }
        }
        v30 = v32;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v30, v31, (PRTL_BALANCED_NODE)v19);
    result = *(__int16 *)(a1 + 22);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), (unsigned __int16)~*(_WORD *)(v19 + 28));
    v34 = 0LL;
  }
  if ( !v10 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
      else
        *(_DWORD *)(a1 + 64) = 0;
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      if ( v36 )
      {
        if ( v35->NestingLevel <= 1u )
        {
          v59 = v36[5] - 1;
          v36[5] = v59;
          if ( !v59 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v64 < 2u )
      {
        v60 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v60->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v60);
      }
      result = (unsigned __int8)v64;
      __writecr8((unsigned __int8)v64);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      v63 = 0;
      v40 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 64, v18, v16, v17) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(v40->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v40->SpecialApcDisable;
      v42 = ++v40->AbAllocationRegionCount;
      v43 = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
      v44 = !_BitScanReverse((unsigned int *)&v45, v43);
      if ( v44 )
        goto LABEL_76;
      while ( 1 )
      {
        v46 = 1 << v45;
        v47 = v45;
        v48 = &v40->LockEntries[v47];
        v43 &= ~v46;
        if ( (v48->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v48->LockState.0 & 1) == 0
          && (*(_QWORD *)&v48->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
          && v48->LockState.SessionId == (_DWORD)SessionId )
        {
          v48->AcquiredByte &= ~1u;
          if ( v48->LockState.0 )
            break;
        }
        v44 = !_BitScanReverse((unsigned int *)&v45, v43);
        if ( v44 )
          goto LABEL_76;
      }
      if ( !v48 )
      {
LABEL_76:
        if ( (*((_DWORD *)&v40->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v40, a1 + 64, SessionId, 0LL);
      }
      else
      {
        v48->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v48->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v40->LockEntries[v47].TreeNode);
        v63 = v48->BoostBitmap.AllFields & 0x1FFFF;
        v48->BoostBitmap.AllFields &= 0xFFFE0000;
        v48->ThreadLocalFlags &= ~1u;
        v48->LockState.0 = 0LL;
        v49 = ((char *)v48 - (char *)v40 - 800) / 96;
        if ( v42 == 1 )
          v40->AbEntrySummary |= 1 << v49;
        else
          _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, 1 << v49);
      }
      --v40->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v40, a1 + 64, &v63);
      v44 = v40->SpecialApcDisable++ == -1;
      if ( v44 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
        KiCheckForKernelApcDelivery();
      result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v50, v51, v52);
    }
  }
  if ( v34 )
    return RtlpHpSegSegmentFree(a1);
  return result;
}
