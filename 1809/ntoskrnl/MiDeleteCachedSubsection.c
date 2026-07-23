/*
 * XREFs of MiDeleteCachedSubsection @ 0x1402A1C08
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1402A3220 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140022DA0 (MiDecrementModifiedWriteCount.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSegment @ 0x14007B590 (MiInsertUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x14007B7CC (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSegment @ 0x14007BB58 (MiRemoveUnusedSegment.c)
 *     MiReduceUnusedSubsectionCount @ 0x14007BC44 (MiReduceUnusedSubsectionCount.c)
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x1401698BC (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiIsSubsectionClean @ 0x1402A2884 (MiIsSubsectionClean.c)
 *     MiPreventControlAreaDelete @ 0x1402A2B34 (MiPreventControlAreaDelete.c)
 *     MiPurgeSubsection @ 0x1402A2E18 (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405DDE70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  volatile LONG *v1; // rbp
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  _QWORD **v5; // r15
  KIRQL v6; // r14
  _QWORD *i; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  int v13; // eax
  struct _KPRCB *v14; // rcx
  __int64 inserted; // rdi
  struct _KPRCB *v16; // rcx
  int v17; // ebx
  struct _KPRCB *v18; // rcx
  int IsSubsectionClean; // eax
  int v20; // r14d
  KIRQL v21; // al
  KIRQL v22; // r14
  struct _KPRCB *v23; // rcx
  struct _FILE_OBJECT *v24; // r15
  struct _KPRCB *v25; // rcx
  KIRQL v26; // r12
  signed __int64 v27; // r8
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx
  KIRQL v30; // al
  int v31; // ecx
  KIRQL v32; // r15
  struct _KPRCB *v33; // rcx
  BOOL v34; // r12d
  KIRQL v35; // al
  int v36; // eax
  unsigned int v37; // ecx
  __int64 *v38; // rdi
  struct _KPRCB *v39; // rcx
  __int64 v40; // r12
  __int64 *v41; // rdi
  bool v42; // zf
  struct _KPRCB *v43; // rcx
  signed __int64 v44; // [rsp+40h] [rbp-68h]
  NTSTATUS v45[24]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v47; // [rsp+B8h] [rbp+10h]
  PVOID P; // [rsp+C0h] [rbp+18h]
  ULONG_PTR v49; // [rsp+C8h] [rbp+20h]

  v1 = (volatile LONG *)(a1 + 1280);
  v3 = 1LL;
  v4 = 1LL;
  v5 = (_QWORD **)(a1 + 1656);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v4 = (ULONG_PTR)(i - 10);
    v3 = *(i - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v3 + 72)) )
      break;
  }
  if ( i == v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = 3221226021LL;
LABEL_21:
    __writecr8(v6);
    return result;
  }
  v10 = (_QWORD *)(v4 + 80);
  v11 = *(_QWORD *)(v4 + 80);
  v12 = *(_QWORD **)(v4 + 88);
  if ( *(_QWORD *)(v11 + 8) != v4 + 80 || (_QWORD *)*v12 != v10 )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  *(_WORD *)(v4 + 34) &= ~8u;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *v10 = v10;
  MiReduceUnusedSubsectionCount((_DWORD *)v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v13 = *(_DWORD *)(v3 + 56);
  if ( (v13 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      v14 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
    result = 3221225587LL;
    goto LABEL_21;
  }
  if ( (v13 & 8) != 0 )
  {
    if ( *(int *)(v4 + 52) < 0 )
    {
      inserted = MiInsertUnusedSubsection(v4);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
      __writecr8(v6);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      return 3221225504LL;
    }
    v17 = 1;
  }
  else
  {
    v17 = 0;
  }
  if ( *(_QWORD *)(v4 + 96) )
    KeBugCheckEx(0x1Au, 0x42004uLL, v4, 0LL, 0LL);
  *(_QWORD *)(v4 + 96) = 1LL;
  *(_WORD *)(v4 + 32) &= ~1u;
  MiRemoveUnusedSegment(v3);
  *(_DWORD *)(v3 + 56) |= 0x100u;
  P = *(PVOID *)(v4 + 8);
  if ( v17 == 1 )
  {
    ++*(_DWORD *)(v3 + 76);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v18);
    }
    __writecr8(v6);
    IsSubsectionClean = MiIsSubsectionClean(v4);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        *(_DWORD *)(v4 + 52) |= 0x80000000;
        v22 = v21;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
        {
          v23 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v23);
        }
        __writecr8(v22);
      }
      v20 = -1073741792;
    }
    else
    {
      v20 = 0;
    }
  }
  else
  {
    v24 = (struct _FILE_OBJECT *)MiPreventControlAreaDelete(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v25);
    }
    __writecr8(v6);
    v49 = *(_QWORD *)(v4 + 8);
    v47 = v49 - 8 + 8LL * *(unsigned int *)(v4 + 44);
    v20 = FsRtlAcquireFileForCcFlushEx(v24);
    v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v27 = _InterlockedDecrement64((volatile signed __int64 *)(v3 + 112));
    v44 = v27;
    *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) + 1624LL) = 0LL;
    if ( v20 < 0 || (*(_DWORD *)(v3 + 56) & 1) != 0 )
    {
      if ( v27 )
        ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v26 < 2u )
      {
        v29 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v29);
      }
      __writecr8(v26);
      if ( v20 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(v24);
        v20 = -1073741431;
      }
      if ( !v44 )
      {
        MiDeleteControlArea((PVOID)v3);
        ObfDereferenceObjectWithTag(v24, 0x746C6644u);
        return (unsigned int)v20;
      }
    }
    else
    {
      ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v26 < 2u )
      {
        v28 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v28);
      }
      __writecr8(v26);
      KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
      v20 = MiFlushSectionInternal(v49, v47, (__int64 *)v4, v4, 0LL, 2u, v45);
      KeGetCurrentThread()[1].TrapFrame = 0LL;
      FsRtlReleaseFileForCcFlush(v24);
    }
    MiDereferenceControlAreaFile(v3, (unsigned __int64)v24);
  }
  v30 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v31 = *(_DWORD *)(v3 + 56);
  v32 = v30;
  if ( (v31 & 1) != 0 )
  {
    *(_DWORD *)(v3 + 56) = v31 & 0xFFFFFEFF;
    goto LABEL_92;
  }
  if ( v20 < 0 )
    goto LABEL_90;
  if ( *(_QWORD *)(v4 + 96) != 1LL || (*(_BYTE *)(v4 + 32) & 1) != 0 )
  {
    v20 = -1073741823;
LABEL_90:
    v36 = 1;
    goto LABEL_91;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
  {
    v33 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v33);
  }
  __writecr8(v32);
  v34 = MiPurgeSubsection(v4) == 0;
  v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v31 = *(_DWORD *)(v3 + 56);
  v32 = v35;
  v36 = v34;
LABEL_91:
  v37 = v31 & 0xFFFFFEFF;
  *(_DWORD *)(v3 + 56) = v37;
  if ( (v37 & 1) == 0 )
  {
    v40 = 0LL;
    if ( v36 == 1 || *(_QWORD *)(v4 + 96) != 1LL || *(_DWORD *)(v4 + 104) || (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      v20 = -1073741823;
      v40 = MiDecrementSubsectionViewCount((__int64 *)v4, 0);
      if ( !*(_QWORD *)(v4 + 96) )
        v40 += MiInsertUnusedSubsection(v4);
      P = 0LL;
    }
    else
    {
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v4 + 112), 0);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    v41 = MiDecrementModifiedWriteCount(v3, 1);
    if ( *(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v42 = (KiIrqlFlags & 1) == 0;
LABEL_114:
        if ( !v42 && KeGetCurrentIrql() >= 2u && v32 < 2u )
        {
          v43 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v43);
        }
      }
    }
    else
    {
      if ( !*(_QWORD *)(v3 + 32) )
      {
        MiDestroySection(v3, v32, 0LL);
        goto LABEL_120;
      }
      v40 += MiInsertUnusedSegment(v3);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v42 = (KiIrqlFlags & 1) == 0;
        goto LABEL_114;
      }
    }
    __writecr8(v32);
LABEL_120:
    if ( v41 )
      MiReleaseControlAreaWaiters(v41);
    if ( v40 )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, v40);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v20;
  }
LABEL_92:
  MiDecrementSubsectionViewCount((__int64 *)v4, 0);
  v38 = MiDecrementModifiedWriteCount(v3, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
  {
    v39 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v39);
  }
  __writecr8(v32);
  if ( v38 )
    MiReleaseControlAreaWaiters(v38);
  return 3221225473LL;
}
