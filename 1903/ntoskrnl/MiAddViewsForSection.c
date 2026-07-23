/*
 * XREFs of MiAddViewsForSection @ 0x140071B80
 * Callers:
 *     MmMapViewInSystemCache @ 0x140074B60 (MmMapViewInSystemCache.c)
 *     MiReferenceDataSubsections @ 0x1400A8B68 (MiReferenceDataSubsections.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiCommitPagefileBackedSection @ 0x14066EC04 (MiCommitPagefileBackedSection.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400715F0 (MiDecrementSubsections.c)
 *     MiReferenceActiveSubsection @ 0x140072320 (MiReferenceActiveSubsection.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(__int64 *BugCheckParameter2, unsigned __int64 a2, __int16 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebp
  ULONG_PTR v7; // rsi
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v9; // rcx
  int active; // eax
  unsigned __int64 v11; // rcx
  struct _KPRCB *v12; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rsi
  struct _KTHREAD *v16; // rdi
  unsigned __int8 v17; // r14
  unsigned int v18; // edx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rax
  ULONG_PTR v25; // rcx
  unsigned int SessionId; // r8d
  ULONG_PTR v27; // r10
  ULONG_PTR v28; // r11
  ULONG_PTR v29; // r9
  unsigned int v30; // edx
  __int64 v31; // rcx
  ULONG_PTR v32; // rcx
  unsigned __int8 v33; // al
  ULONG_PTR v34; // rcx
  unsigned int v35; // esi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v37; // rcx
  struct _KPRCB *v38; // rcx
  unsigned __int64 v39; // rax
  struct _KTHREAD *v40; // r15
  ULONG_PTR v41; // r9
  __int64 v42; // r10
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int8 v47; // bl
  int *v48; // r8
  int v49; // eax
  struct _KPRCB *v50; // rcx
  struct _KPRCB *v51; // rcx
  unsigned __int64 v52; // rax
  unsigned int v53; // r8d
  unsigned int v54; // edx
  __int64 v55; // rcx
  _KLOCK_ENTRY *v56; // rcx
  unsigned __int8 v57; // bl
  __int64 v58; // rbx
  KIRQL v59; // r15
  __int64 v60; // rbx
  struct _KPRCB *v61; // rcx
  KIRQL v62; // al
  int BugCheckParameter3; // [rsp+34h] [rbp-C4h]
  int BugCheckParameter3_4; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+40h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-B0h]
  int v67; // [rsp+50h] [rbp-A8h] BYREF
  int v68; // [rsp+54h] [rbp-A4h] BYREF
  int v69; // [rsp+58h] [rbp-A0h] BYREF
  int v70; // [rsp+5Ch] [rbp-9Ch]
  __int64 v71; // [rsp+60h] [rbp-98h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-90h]
  ULONG_PTR v73; // [rsp+70h] [rbp-88h]
  int v74; // [rsp+78h] [rbp-80h]
  int v75; // [rsp+7Ch] [rbp-7Ch]
  int v76; // [rsp+80h] [rbp-78h]
  int v77; // [rsp+84h] [rbp-74h]
  int v78; // [rsp+88h] [rbp-70h]
  ULONG_PTR BugCheckParameter2a; // [rsp+90h] [rbp-68h]
  __int64 v80; // [rsp+98h] [rbp-60h]
  ULONG_PTR v81; // [rsp+A0h] [rbp-58h]
  void *retaddr; // [rsp+F8h] [rbp+0h]
  int v83; // [rsp+100h] [rbp+8h]
  ULONG_PTR v84; // [rsp+100h] [rbp+8h]
  ULONG_PTR v85; // [rsp+100h] [rbp+8h]
  char v87; // [rsp+110h] [rbp+18h]
  unsigned __int8 v88; // [rsp+110h] [rbp+18h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+110h] [rbp+18h]
  unsigned int v90; // [rsp+118h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = 0;
  v73 = 0LL;
  v7 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(v3 + 64) )
  {
    v83 = 1;
    CurrentThread = 0LL;
    v65 = 0LL;
  }
  else
  {
    v24 = *(_QWORD *)v3;
    v83 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v65 = v24;
    ExAcquirePushLockExclusiveEx(v24 + 40, 0LL);
  }
  v70 = a3 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v9 = (volatile signed __int32 *)(v3 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v9, CurrentIrql);
  if ( (a3 & 1) != 0 )
  {
    ++*(_QWORD *)(v3 + 40);
    ++*(_DWORD *)(v3 + 88);
    a3 |= 4u;
  }
  BugCheckParameter3 = -1;
  v80 = 0x7FFFFFFFFFFFFFFCLL;
  while ( 1 )
  {
    v71 = v7;
    if ( !*(_QWORD *)(v7 + 8) )
    {
      v75 = *(_DWORD *)(v7 + 52) & 0x3FFFFFFF;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      if ( !v83 )
      {
        v25 = v65 + 40;
        BugCheckParameter2a = v65 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v25);
          v25 = BugCheckParameter2a;
        }
        BugCheckParameter3_4 = 0;
        BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v25) == 1 )
          SessionId = MmGetSessionIdEx(*(_QWORD *)(BugCheckParameter1 + 184));
        else
          SessionId = -1;
        v27 = BugCheckParameter1;
        --*(_WORD *)(BugCheckParameter1 + 486);
        ++*(_BYTE *)(v27 + 794);
        v28 = BugCheckParameter2a;
        v87 = *(_BYTE *)(v27 + 794);
        v29 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
        v30 = (*(char *)(v27 + 792) | *(char *)(v27 + 1422)) ^ 0x3F;
        v19 = !_BitScanReverse((unsigned int *)&v31, v30);
        v74 = v31;
        if ( v19 )
          goto LABEL_80;
        while ( 1 )
        {
          v30 &= ~(1 << v31);
          v32 = v27 + 96 * v31 + 800;
          v81 = v32;
          if ( (*(_BYTE *)(v32 + 26) & 1) != 0
            && (*(_DWORD *)(v32 + 32) & 1) == 0
            && (v80 & *(_QWORD *)(v32 + 32)) == v29
            && *(_DWORD *)(v32 + 40) == SessionId )
          {
            *(_BYTE *)(v32 + 26) &= ~1u;
            if ( *(_QWORD *)(v32 + 32) )
              break;
          }
          v19 = !_BitScanReverse((unsigned int *)&v31, v30);
          v74 = v31;
          if ( v19 )
            goto LABEL_80;
        }
        if ( !v32 )
        {
LABEL_80:
          if ( (*(_DWORD *)(v27 + 120) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, v27, v28, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v32 + 32) |= 2u;
          if ( *(__int64 *)(v32 + 32) < 0 )
          {
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
            v32 = v81;
            v27 = BugCheckParameter1;
            v28 = BugCheckParameter2a;
          }
          BugCheckParameter3_4 = 0;
          BugCheckParameter3_4 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
          *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v32 + 25) &= ~1u;
          *(_QWORD *)(v32 + 32) = 0LL;
          v33 = 1 << ((__int64)(v32 - v27 - 800) / 96);
          if ( v87 == 1 )
            *(_BYTE *)(v27 + 792) |= v33;
          else
            _InterlockedOr8((volatile signed __int8 *)(v27 + 1422), v33);
        }
        --*(_BYTE *)(v27 + 794);
        KiAbThreadRemoveBoosts(v27, v28, &BugCheckParameter3_4);
        v34 = BugCheckParameter1;
        v19 = (*(_WORD *)(BugCheckParameter1 + 486))++ == 0xFFFF;
        if ( v19 && *(_QWORD *)(v34 + 152) != v34 + 152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( (a3 & 2) != 0 )
        return 3221225865LL;
      result = MiCreatePrototypePtes(v7);
      v90 = result;
      if ( (int)result < 0 )
      {
        if ( (_DWORD)result != -1073741302 )
          goto LABEL_89;
        if ( !v83 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v65 + 40, 0LL);
        }
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        goto LABEL_56;
      }
      if ( !v83 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v65 + 40, 0LL);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        goto LABEL_14;
      }
LABEL_48:
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
LABEL_14:
      if ( a2 )
      {
        v11 = *(unsigned int *)(v7 + 44);
        if ( a2 <= v11 )
          goto LABEL_16;
        a2 -= v11;
      }
      v7 = *(_QWORD *)(v7 + 16);
      v73 = v71;
      if ( !v83 )
        v73 = v71;
      goto LABEL_56;
    }
    if ( (a3 & 0x400) != 0 )
    {
      v90 = -1073741800;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v51 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v51);
      }
      __writecr8(CurrentIrql);
      v35 = v83;
      if ( !v83 )
      {
        v52 = v65 + 40;
        v85 = v65 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v52);
          v52 = v85;
        }
        v69 = 0;
        v40 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v52) == 1 )
          v53 = MmGetSessionIdEx((__int64)v40->ApcState.Process);
        else
          v53 = -1;
        --v40->SpecialApcDisable;
        ++v40->AbAllocationRegionCount;
        v42 = v85;
        AbAllocationRegionCount = v40->AbAllocationRegionCount;
        v54 = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
        v19 = !_BitScanReverse((unsigned int *)&v55, v54);
        v78 = v55;
        if ( v19 )
          goto LABEL_183;
        while ( 1 )
        {
          v54 &= ~(1 << v55);
          v56 = &v40->LockEntries[v55];
          v71 = (__int64)v56;
          if ( (v56->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v56->LockState.0 & 1) == 0
            && (*(_QWORD *)&v56->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v85 & 0x7FFFFFFFFFFFFFFCLL)
            && v56->LockState.SessionId == v53 )
          {
            v56->AcquiredByte &= ~1u;
            if ( v56->LockState.0 )
              break;
          }
          v19 = !_BitScanReverse((unsigned int *)&v55, v54);
          v78 = v55;
          if ( v19 )
            goto LABEL_183;
        }
        if ( !v56 )
        {
LABEL_183:
          if ( (*((_DWORD *)&v40->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v40, v85, v53, 0LL);
        }
        else
        {
          v56->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v56->LockState.LockState < 0 )
          {
            KiAbEntryRemoveFromTree(&v56->TreeNode);
            v56 = (_KLOCK_ENTRY *)v71;
            v42 = v85;
          }
          v69 = v56->BoostBitmap.AllFields & 0x1FFFF;
          v56->BoostBitmap.AllFields &= 0xFFFE0000;
          v56->ThreadLocalFlags &= ~1u;
          v56->LockState.0 = 0LL;
          v57 = 1 << ((char)((_BYTE)v56 - (_BYTE)v40 - 32) / 96);
          if ( AbAllocationRegionCount == 1 )
            v40->AbEntrySummary |= v57;
          else
            _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, v57);
        }
        --v40->AbAllocationRegionCount;
        v48 = &v69;
LABEL_164:
        KiAbThreadRemoveBoosts((ULONG_PTR)v40, v42, v48);
        v19 = v40->SpecialApcDisable++ == -1;
        if ( v19 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
LABEL_168:
      result = v90;
      goto LABEL_169;
    }
    active = MiReferenceActiveSubsection(v7);
    v90 = active;
    if ( active >= 0 )
      break;
    if ( active != -1073741302 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v38 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v38);
      }
      __writecr8(CurrentIrql);
      v35 = v83;
      if ( !v83 )
      {
        v39 = v65 + 40;
        v84 = v65 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v39);
          v39 = v84;
        }
        v67 = 0;
        v40 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v39) == 1 )
          v41 = (unsigned int)MmGetSessionIdEx((__int64)v40->ApcState.Process);
        else
          v41 = 0xFFFFFFFFLL;
        --v40->SpecialApcDisable;
        ++v40->AbAllocationRegionCount;
        v42 = v84;
        v88 = v40->AbAllocationRegionCount;
        v43 = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
        v19 = !_BitScanReverse((unsigned int *)&v44, v43);
        v76 = v44;
        if ( v19 )
          goto LABEL_129;
        while ( 1 )
        {
          v45 = (__int64)&v40->LockEntries[v44];
          v43 &= ~(1 << v44);
          v71 = v45;
          if ( (*(_BYTE *)(v45 + 26) & 1) != 0
            && (*(_DWORD *)(v45 + 32) & 1) == 0
            && (*(_QWORD *)(v45 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v84 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v45 + 40) == (_DWORD)v41 )
          {
            *(_BYTE *)(v45 + 26) &= ~1u;
            if ( *(_QWORD *)(v45 + 32) )
              break;
          }
          v19 = !_BitScanReverse((unsigned int *)&v44, v43);
          v76 = v44;
          if ( v19 )
            goto LABEL_129;
        }
        if ( !v45 )
        {
LABEL_129:
          if ( (*((_DWORD *)&v40->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v40, v84, v41, 0LL);
        }
        else
        {
          *(_BYTE *)(v45 + 32) |= 2u;
          if ( *(__int64 *)(v45 + 32) < 0 )
          {
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v45);
            v45 = v71;
            v42 = v84;
          }
          v67 = *(_DWORD *)(v45 + 88) & 0x1FFFF;
          *(_DWORD *)(v45 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v45 + 25) &= ~1u;
          *(_QWORD *)(v45 + 32) = 0LL;
          v46 = (__int64)((unsigned __int128)((v45 - (__int64)v40 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
          v47 = 1 << (v46 + (v46 < 0));
          if ( v88 == 1 )
            v40->AbEntrySummary |= v47;
          else
            _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, v47);
        }
        --v40->AbAllocationRegionCount;
        v48 = &v67;
        goto LABEL_164;
      }
      goto LABEL_168;
    }
LABEL_56:
    if ( !v7 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 72, retaddr);
      else
        *(_DWORD *)(v3 + 72) = 0;
      v12 = KeGetCurrentPrcb();
      SchedulerAssist = v12->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v49 = SchedulerAssist[5] - 1;
          SchedulerAssist[5] = v49;
          if ( !v49 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50);
      }
      __writecr8(CurrentIrql);
      if ( v83 )
        return 0LL;
      v15 = v65 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      v68 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      --v16->SpecialApcDisable;
      v17 = ++v16->AbAllocationRegionCount;
      v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      v19 = !_BitScanReverse((unsigned int *)&v20, v18);
      v77 = v20;
      if ( v19 )
      {
LABEL_50:
        v22 = BugCheckParameter3;
      }
      else
      {
        while ( 1 )
        {
          v21 = (__int64)&v16->LockEntries[v20];
          v18 &= ~(1 << v20);
          if ( (*(_BYTE *)(v21 + 26) & 1) != 0
            && (*(_DWORD *)(v21 + 32) & 1) == 0
            && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL) )
          {
            v22 = BugCheckParameter3;
            if ( *(_DWORD *)(v21 + 40) == BugCheckParameter3 )
            {
              *(_BYTE *)(v21 + 26) &= ~1u;
              if ( *(_QWORD *)(v21 + 32) )
                break;
            }
          }
          v19 = !_BitScanReverse((unsigned int *)&v20, v18);
          v77 = v20;
          if ( v19 )
            goto LABEL_50;
        }
        if ( v21 )
        {
          *(_BYTE *)(v21 + 32) |= 2u;
          if ( *(__int64 *)(v21 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
          v68 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
          *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v21 + 25) &= ~1u;
          *(_QWORD *)(v21 + 32) = 0LL;
          v23 = (v21 - (__int64)v16 - 800) / 96;
          if ( v17 == 1 )
            v16->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
LABEL_38:
          --v16->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v16, v15, &v68);
          v19 = v16->SpecialApcDisable++ == -1;
          if ( v19 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          return 0LL;
        }
      }
      if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, v22, 0LL);
      goto LABEL_38;
    }
  }
  v73 = v7;
  if ( v83 != 1 || (*(_DWORD *)(v7 + 52) & 0x40000000) == 0 )
    goto LABEL_14;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v37 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v37);
  }
  __writecr8(CurrentIrql);
  result = MiAllocateFileExtents(v7, 0);
  v90 = result;
  if ( (int)result >= 0 )
    goto LABEL_48;
LABEL_89:
  v35 = v83;
LABEL_169:
  v58 = v73;
  if ( v73 )
  {
    v59 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    if ( (a3 & 5) == 0 )
      v4 = v70 | 8;
    v60 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, v58, v4);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v59 < 2u )
    {
      v61 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v61->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v61);
    }
    __writecr8(v59);
    if ( v60 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), v35, v60);
    result = v90;
  }
  if ( (a3 & 1) != 0 )
  {
    v62 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    --*(_QWORD *)(v3 + 40);
    --*(_DWORD *)(v3 + 88);
    MiCheckControlArea(v3, v62);
    return v90;
  }
  return result;
}
