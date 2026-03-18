/*
 * XREFs of MiDeleteCachedSubsection @ 0x1402B8BA0
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1402BA140 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     MiInsertUnusedSegment @ 0x140070468 (MiInsertUnusedSegment.c)
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 *     MiRemoveUnusedSegment @ 0x1400745DC (MiRemoveUnusedSegment.c)
 *     MiDeleteControlArea @ 0x1400BF77C (MiDeleteControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x1400BF958 (MiDecrementModifiedWriteCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400BFFF0 (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
 *     MiReduceUnusedSubsectionCount @ 0x1400C0958 (MiReduceUnusedSubsectionCount.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E2E00 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x1401708F8 (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiIsSubsectionClean @ 0x1402B97A4 (MiIsSubsectionClean.c)
 *     MiPreventControlAreaDelete @ 0x1402B9A54 (MiPreventControlAreaDelete.c)
 *     MiPurgeSubsection @ 0x1402B9D38 (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1406247F0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140624A44 (FsRtlAcquireFileForCcFlushEx.c)
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
  __int64 v31; // r8
  int v32; // ecx
  KIRQL v33; // r15
  struct _KPRCB *v34; // rcx
  BOOL v35; // r12d
  KIRQL v36; // al
  int v37; // eax
  unsigned int v38; // ecx
  __int64 *v39; // rdi
  struct _KPRCB *v40; // rcx
  __int64 v41; // r12
  __int64 *v42; // rdi
  bool v43; // zf
  struct _KPRCB *v44; // rcx
  signed __int64 v45; // [rsp+40h] [rbp-68h]
  _QWORD v46[12]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+10h]
  PVOID P; // [rsp+C0h] [rbp+18h]
  ULONG_PTR v50; // [rsp+C8h] [rbp+20h]

  v1 = (volatile LONG *)(a1 + 1280);
  v46[0] = 0LL;
  v46[1] = 0LL;
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
    v50 = *(_QWORD *)(v4 + 8);
    v48 = v50 - 8 + 8LL * *(unsigned int *)(v4 + 44);
    v20 = FsRtlAcquireFileForCcFlushEx(v24);
    v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v27 = _InterlockedDecrement64((volatile signed __int64 *)(v3 + 112));
    v45 = v27;
    *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) + 1624LL) = 0LL;
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
      if ( !v45 )
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
      v20 = MiFlushSectionInternal(v50, v48, (__int64 *)v4, v4, 0LL, 2u, (unsigned int *)v46);
      KeGetCurrentThread()[1].TrapFrame = 0LL;
      FsRtlReleaseFileForCcFlush(v24);
    }
    MiDereferenceControlAreaFile(v3, (unsigned __int64)v24);
  }
  v30 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v32 = *(_DWORD *)(v3 + 56);
  v33 = v30;
  if ( (v32 & 1) != 0 )
  {
    *(_DWORD *)(v3 + 56) = v32 & 0xFFFFFEFF;
    goto LABEL_92;
  }
  if ( v20 < 0 )
    goto LABEL_90;
  if ( *(_QWORD *)(v4 + 96) != 1LL || (*(_BYTE *)(v4 + 32) & 1) != 0 )
  {
    v20 = -1073741823;
LABEL_90:
    v37 = 1;
    goto LABEL_91;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
  {
    v34 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v34);
  }
  __writecr8(v33);
  v35 = MiPurgeSubsection(v4) == 0;
  v36 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v32 = *(_DWORD *)(v3 + 56);
  v33 = v36;
  v37 = v35;
LABEL_91:
  v38 = v32 & 0xFFFFFEFF;
  *(_DWORD *)(v3 + 56) = v38;
  if ( (v38 & 1) == 0 )
  {
    v41 = 0LL;
    if ( v37 == 1 || *(_QWORD *)(v4 + 96) != 1LL || *(_DWORD *)(v4 + 104) || (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      v20 = -1073741823;
      v41 = MiDecrementSubsectionViewCount((_QWORD *)v4, 0LL, v31);
      if ( !*(_QWORD *)(v4 + 96) )
        v41 += MiInsertUnusedSubsection(v4);
      P = 0LL;
    }
    else
    {
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v4 + 112), 0);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    v42 = MiDecrementModifiedWriteCount(v3, 1);
    if ( *(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v43 = (KiIrqlFlags & 1) == 0;
LABEL_114:
        if ( !v43 && KeGetCurrentIrql() >= 2u && v33 < 2u )
        {
          v44 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v44);
        }
      }
    }
    else
    {
      if ( !*(_QWORD *)(v3 + 32) )
      {
        MiDestroySection(v3, v33, 0LL);
        goto LABEL_120;
      }
      v41 += MiInsertUnusedSegment(v3);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v43 = (KiIrqlFlags & 1) == 0;
        goto LABEL_114;
      }
    }
    __writecr8(v33);
LABEL_120:
    if ( v42 )
      MiReleaseControlAreaWaiters(v42);
    if ( v41 )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, v41);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v20;
  }
LABEL_92:
  MiDecrementSubsectionViewCount((_QWORD *)v4, 0LL, v31);
  v39 = MiDecrementModifiedWriteCount(v3, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
  {
    v40 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v40);
  }
  __writecr8(v33);
  if ( v39 )
    MiReleaseControlAreaWaiters(v39);
  return 3221225473LL;
}
