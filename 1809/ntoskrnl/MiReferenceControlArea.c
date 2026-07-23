/*
 * XREFs of MiReferenceControlArea @ 0x14001C358
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     MiValidateControlAreaPartition @ 0x14001CD04 (MiValidateControlAreaPartition.c)
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     MiControlAreaRequiresCharge @ 0x140079E58 (MiControlAreaRequiresCharge.c)
 *     MiRemoveUnusedSegment @ 0x14007BB58 (MiRemoveUnusedSegment.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlReleaseFile @ 0x1405DF940 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *p_DataSectionObject; // r15
  KIRQL v6; // al
  __int64 v7; // r14
  KIRQL v8; // di
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  _KLOCK_ENTRY *v21; // rbx
  __int64 v22; // rdx
  struct _KPRCB *v23; // rcx
  __int64 v24; // rdx
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  int v32; // [rsp+28h] [rbp-28h]
  __int16 v33; // [rsp+30h] [rbp-20h] BYREF
  char v34; // [rsp+32h] [rbp-1Eh]
  int v35; // [rsp+34h] [rbp-1Ch]
  _QWORD v36[3]; // [rsp+38h] [rbp-18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp+40h]

  FileObject = *(PFILE_OBJECT *)(a1 + 56);
  p_DataSectionObject = &FileObject->SectionObjectPointer->DataSectionObject;
  if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
    p_DataSectionObject += 2;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140439C80);
    v7 = *p_DataSectionObject;
    v8 = v6;
    if ( !*p_DataSectionObject )
    {
      *p_DataSectionObject = a2;
      v17 = KeAbPreAcquire((ULONG_PTR)p_DataSectionObject, 0LL);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v18);
      }
      __writecr8(v8);
      *a3 = a2;
      return 0LL;
    }
    v9 = ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
    if ( v9 )
      break;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      v23 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v23, v10);
    }
    __writecr8(v8);
  }
  v11 = MiValidateControlAreaPartition(a1, v7);
  if ( v11 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v25, v24);
    }
LABEL_49:
    __writecr8(v8);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v11;
  }
  else
  {
    if ( !(*(_DWORD *)(v7 + 56) & 1 | ((*(_DWORD *)(v7 + 56) & 2) != 0)) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        v12 = *(_DWORD *)(a1 + 20);
        if ( (v12 & 0x100000) != 0 && !(unsigned int)MiControlAreaRequiresCharge(v7, ((v12 & 0x200000) == 0) | 2u) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
          {
            v28 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v28, v27);
          }
          v11 = -1073740277;
          goto LABEL_49;
        }
      }
      v13 = MiBuildWakeList(v7, 4LL);
      ++*(_QWORD *)(v7 + 24);
      v14 = v13;
      MiRemoveUnusedSegment(v7);
      if ( (*(_DWORD *)a1 & 1) != 0 )
        *(_DWORD *)(v7 + 56) |= 0x8000u;
      else
        ++*(_QWORD *)(v7 + 48);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        v29 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v29, v15);
      }
      __writecr8(v8);
      MiReleaseControlAreaWaiters(v14);
      *a3 = v7;
      return 0LL;
    }
    v19 = KeAbPreAcquire((ULONG_PTR)p_DataSectionObject, 0LL);
    v21 = (_KLOCK_ENTRY *)v19;
    if ( v19 )
      KeAbPreWait(v19, v20);
    v35 = 0;
    v36[1] = v36;
    v33 = 263;
    v36[0] = v36;
    v34 = 6;
    v32 = 1;
    v31 = *(_QWORD *)(v7 + 80);
    *(_QWORD *)(v7 + 80) = &v31;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26, v22);
    }
    __writecr8(v8);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    KeWaitForGate(&v33, 18LL);
    if ( v21 )
    {
      KeAbPreAcquire((ULONG_PTR)p_DataSectionObject, &v21->TreeNode);
      KeAbPostReleaseEx((ULONG_PTR)p_DataSectionObject, v21);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
}
