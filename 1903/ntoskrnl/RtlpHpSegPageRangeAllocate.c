/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1400601E0
 * Callers:
 *     RtlpHpSegAlloc @ 0x14005FD40 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x14001F398 (RtlpHpSegLockAcquire.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14005EE10 (RtlpHpSegFreeRangeInsert.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlpHpSegSegmentInitialize @ 0x14010DF10 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegSegmentAllocate @ 0x14010EFCC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegHeapAddSegment @ 0x140135B48 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1401767B4 (RtlpHpSegLargeRangeAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  char v6; // cl
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  unsigned int v9; // ebx
  int v10; // ebp
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v14; // edx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rax
  unsigned __int16 v20; // ax
  int v21; // ecx
  unsigned int v22; // ebp
  bool v23; // zf
  unsigned __int64 v24; // r15
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  int v28; // ecx
  unsigned __int64 v29; // r10
  __int16 v30; // r8
  unsigned __int64 v31; // r14
  __int16 v32; // r9
  __int16 v33; // r11
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rcx
  char *v36; // rcx
  char v37; // dl
  struct _KTHREAD *v38; // r14
  ULONG_PTR v39; // r9
  unsigned __int8 v40; // r12
  unsigned int v41; // edx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  _KLOCK_ENTRY *v45; // rbx
  __int64 v46; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v48; // rcx
  struct _KTHREAD *v49; // rsi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v51; // r15
  unsigned int v52; // edx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  _KLOCK_ENTRY *v56; // rbp
  unsigned __int8 v57; // al
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rbp
  __int64 v61; // r8
  int v62; // eax
  int v63; // eax
  signed __int32 v64; // eax
  struct _KPRCB *v65; // rcx
  int v66; // eax
  struct _KPRCB *v67; // rcx
  int v68; // [rsp+30h] [rbp-68h] BYREF
  int v69; // [rsp+34h] [rbp-64h]
  int v70; // [rsp+38h] [rbp-60h]
  __int64 v71; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v73; // [rsp+A0h] [rbp+8h] BYREF
  int v74; // [rsp+A8h] [rbp+10h]
  unsigned int v75; // [rsp+B0h] [rbp+18h]
  int v76; // [rsp+B8h] [rbp+20h] BYREF

  v75 = a3;
  v4 = 1;
  v6 = *(_BYTE *)(a1 + 9);
  LOBYTE(v3) = -1;
  v71 = v3;
  v7 = (unsigned int)((1 << v6) + a2 - 1) >> v6;
  v8 = a3;
  v9 = v7 << 24;
  v10 = a3 & 1;
  v74 = v10;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v71 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64, (unsigned __int8)CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v73 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v62 = SchedulerAssist[5];
            SchedulerAssist[5] = v62 + 1;
            if ( v62 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 64), 0x1Fu) )
        {
          v48 = CurrentPrcb->SchedulerAssist;
          if ( v48 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v63 = v48[5] - 1;
              v48[5] = v63;
              if ( !v63 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          v73 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64, (unsigned __int8)CurrentIrql);
        }
        v14 = *(_DWORD *)(a1 + 64);
        while ( (v14 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v14 & 0x40000000) == 0 )
          {
            v64 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v14 | 0x40000000, v14);
            v23 = v14 == v64;
            v14 = v64;
            if ( !v23 )
              continue;
          }
          KeYieldProcessorEx(&v73);
          v14 = *(_DWORD *)(a1 + 64);
        }
        v10 = v74;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      LOBYTE(v71) = -1;
    }
  }
  v15 = *(_QWORD *)(a1 + 104);
  v16 = *(_QWORD *)(a1 + 96);
  if ( (v15 & 1) != 0 && v16 )
    v16 ^= a1 + 96;
  v17 = 0LL;
  v18 = v15 & 1;
  while ( v16 )
  {
    if ( v9 < *(_DWORD *)(v16 + 28) )
    {
      v19 = *(_QWORD *)v16;
      v17 = v16;
      if ( v18 && v19 )
        goto LABEL_37;
    }
    else
    {
      if ( v9 <= *(_DWORD *)(v16 + 28) )
        goto LABEL_19;
      v19 = *(_QWORD *)(v16 + 8);
      if ( v18 && v19 )
      {
LABEL_37:
        v16 ^= v19;
        continue;
      }
    }
    v16 = v19;
  }
  v16 = v17;
LABEL_19:
  if ( !v16 )
    goto LABEL_74;
  if ( (v8 & 0x800000) != 0 )
  {
    v16 = RtlpHpSegLargeRangeAllocate(a1, v16, v7, 1LL);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v16);
    *(_QWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    v20 = ~(unsigned __int16)*(_DWORD *)(v16 + 28);
    *(_DWORD *)v16 = -857879331;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v20);
  }
  if ( !v16 )
  {
LABEL_74:
    if ( !v10 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v71 < 2u )
        {
          v65 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v65);
        }
        __writecr8((unsigned __int8)v71);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        v76 = 0;
        v49 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v49->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v49->SpecialApcDisable;
        v51 = ++v49->AbAllocationRegionCount;
        v52 = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
        v23 = !_BitScanReverse((unsigned int *)&v53, v52);
        v69 = v53;
        if ( v23 )
          goto LABEL_105;
        while ( 1 )
        {
          v54 = 1 << v53;
          v55 = v53;
          v56 = &v49->LockEntries[v55];
          v52 &= ~v54;
          if ( (v56->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v56->LockState.0 & 1) == 0
            && (*(_QWORD *)&v56->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
            && v56->LockState.SessionId == (_DWORD)SessionId )
          {
            v56->AcquiredByte &= ~1u;
            if ( v56->LockState.0 )
              break;
          }
          v23 = !_BitScanReverse((unsigned int *)&v53, v52);
          v69 = v53;
          if ( v23 )
            goto LABEL_105;
        }
        if ( !v56 )
        {
LABEL_105:
          if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v49, a1 + 64, SessionId, 0LL);
        }
        else
        {
          v56->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v56->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v49->LockEntries[v55].TreeNode);
          v76 = v56->BoostBitmap.AllFields & 0x1FFFF;
          v56->BoostBitmap.AllFields &= 0xFFFE0000;
          v56->ThreadLocalFlags &= ~1u;
          v56->LockState.0 = 0LL;
          v57 = 1 << (((char *)v56 - (char *)v49 - 800) / 96);
          if ( v51 == 1 )
            v49->AbEntrySummary |= v57;
          else
            _InterlockedOr8((volatile signed __int8 *)&v49->AbOrphanedEntrySummary, v57);
        }
        --v49->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v49, a1 + 64, &v76);
        v23 = v49->SpecialApcDisable++ == -1;
        if ( v23 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        v8 = v75;
      }
    }
    v58 = 0LL;
    if ( (v8 & 0x800000) != 0 )
      v58 = 2LL;
    v59 = RtlpHpSegSegmentAllocate(a1, 0LL, v58);
    v60 = v59;
    if ( !v59 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v59, 0LL);
    v16 = v60 + 32LL * *(unsigned __int8 *)(a1 + 10);
    LOBYTE(v71) = RtlpHpSegLockAcquire(a1, v8, v61);
    RtlpHpSegHeapAddSegment(a1, v60);
    if ( (v8 & 0x800000) != 0 )
      v16 = RtlpHpSegLargeRangeAllocate(a1, v16, v7, 0LL);
  }
  v21 = *(unsigned __int8 *)(v16 + 31);
  if ( v21 != v7 )
  {
    v28 = v21 - v7;
    v29 = (unsigned __int8)v28;
    v30 = 0;
    v31 = v16 + 32LL * v7;
    v32 = 0;
    v33 = 0;
    v34 = v31 + 32LL * (unsigned __int8)v28;
    *(_BYTE *)(v31 + 24) |= 2u;
    *(_BYTE *)(32LL * (unsigned int)(v28 - 1) + v31 + 31) = v28 - 1;
    v35 = v31;
    *(_BYTE *)(v31 + 31) = v29;
    if ( v31 < v34 )
    {
      if ( v29 >= 2 )
      {
        do
        {
          v30 += *(unsigned __int8 *)(v35 + 25);
          v32 += *(unsigned __int8 *)(v35 + 57);
          v35 += 64LL;
        }
        while ( v35 < v34 - 32 );
      }
      if ( v35 < v34 )
        v33 = *(unsigned __int8 *)(v35 + 25);
      v33 += v30 + v32;
    }
    *(_DWORD *)v31 = -857879331;
    *(_WORD *)(v31 + 28) = ~v33;
    *(_BYTE *)(32LL * (v7 - 1) + v16 + 31) = v7 - 1;
    *(_BYTE *)(v16 + 31) = v7;
    *(_WORD *)(v16 + 28) = ~(~(unsigned __int16)*(_DWORD *)(v16 + 28) + *(_WORD *)(v31 + 28) + 1);
    RtlpHpSegFreeRangeInsert(a1, v16 + 32LL * v7, 0);
  }
  v22 = v7 - 1;
  *(_BYTE *)(v16 + 24) |= (unsigned __int8)(4 * ((v8 >> 26) & 3)) | 1;
  v23 = v74 == 0;
  *(_BYTE *)(32LL * (v7 - 1) + v16 + 24) |= 1u;
  if ( v23 )
  {
    v24 = a1 + 64;
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
      else
        *(_DWORD *)v24 = 0;
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      if ( v26 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v66 = v26[5] - 1;
          v26[5] = v66;
          if ( !v66 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v71 < 2u )
      {
        v67 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v67->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v67);
      }
      __writecr8((unsigned __int8)v71);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      v68 = 0;
      v38 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v24) == 1 )
        v39 = (unsigned int)MmGetSessionIdEx((__int64)v38->ApcState.Process);
      else
        v39 = 0xFFFFFFFFLL;
      --v38->SpecialApcDisable;
      v40 = ++v38->AbAllocationRegionCount;
      v41 = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
      v23 = !_BitScanReverse((unsigned int *)&v42, v41);
      v70 = v42;
      if ( v23 )
        goto LABEL_72;
      while ( 1 )
      {
        v43 = 1 << v42;
        v44 = v42;
        v45 = &v38->LockEntries[v44];
        v41 &= ~v43;
        if ( (v45->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v45->LockState.0 & 1) == 0
          && (*(_QWORD *)&v45->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v24 & 0x7FFFFFFFFFFFFFFCLL)
          && v45->LockState.SessionId == (_DWORD)v39 )
        {
          v45->AcquiredByte &= ~1u;
          if ( v45->LockState.0 )
            break;
        }
        v23 = !_BitScanReverse((unsigned int *)&v42, v41);
        v70 = v42;
        if ( v23 )
          goto LABEL_72;
      }
      if ( !v45 )
      {
LABEL_72:
        if ( (*((_DWORD *)&v38->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v38, v24, v39, 0LL);
      }
      else
      {
        v45->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v45->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v38->LockEntries[v44].TreeNode);
        v68 = v45->BoostBitmap.AllFields & 0x1FFFF;
        v45->BoostBitmap.AllFields &= 0xFFFE0000;
        v45->ThreadLocalFlags &= ~1u;
        v45->LockState.0 = 0LL;
        v46 = ((char *)v45 - (char *)v38 - 800) / 96;
        if ( v40 == 1 )
          v38->AbEntrySummary |= 1 << v46;
        else
          _InterlockedOr8((volatile signed __int8 *)&v38->AbOrphanedEntrySummary, 1 << v46);
      }
      --v38->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v38, v24, &v68);
      v23 = v38->SpecialApcDisable++ == -1;
      if ( v23 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( v22 > 1 )
  {
    v36 = (char *)(v16 + 56);
    do
    {
      v36[7] = v4++;
      v37 = *v36;
      v36 += 32;
      *(v36 - 32) = v37 | 1;
    }
    while ( v4 < v22 );
  }
  return v16;
}
