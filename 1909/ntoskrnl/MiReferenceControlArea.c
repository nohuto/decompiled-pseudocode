/*
 * XREFs of MiReferenceControlArea @ 0x14005F46C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiValidateControlAreaPartition @ 0x1400078D0 (MiValidateControlAreaPartition.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiControlAreaRequiresCharge @ 0x140071490 (MiControlAreaRequiresCharge.c)
 *     MiReferenceActiveControlArea @ 0x140074684 (MiReferenceActiveControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E2E00 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     FsRtlReleaseFile @ 0x1405D5DE0 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *SectionObjectPointer; // r14
  KIRQL v6; // al
  __int64 v7; // r15
  KIRQL v8; // di
  int v9; // ebx
  int v10; // ebx
  int v11; // edx
  __int64 active; // rbx
  PRTL_BALANCED_NODE v14; // rax
  PRTL_BALANCED_NODE v15; // rax
  _RTL_BALANCED_NODE *v16; // rbx
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rcx
  struct _KPRCB *v19; // rcx
  struct _KPRCB *v20; // rcx
  struct _KPRCB *v21; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v23[6]; // [rsp+20h] [rbp-30h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp+40h]

  memset(v23, 0, 0x28uLL);
  FileObject = *(PFILE_OBJECT *)(a1 + 56);
  SectionObjectPointer = (__int64 *)FileObject->SectionObjectPointer;
  if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
    SectionObjectPointer += 2;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140464280);
    v7 = *SectionObjectPointer;
    v8 = v6;
    if ( !*SectionObjectPointer )
    {
      *SectionObjectPointer = a2;
      v14 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 0);
      if ( v14 )
        BYTE2(v14[1].Left) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v8);
      *a3 = a2;
      return 0LL;
    }
    v9 = ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
    if ( v9 )
      break;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    __writecr8(v8);
  }
  v10 = MiValidateControlAreaPartition(a1, v7);
  if ( v10 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
LABEL_47:
    __writecr8(v8);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v10;
  }
  else
  {
    if ( !(*(_DWORD *)(v7 + 56) & 1 | ((*(_DWORD *)(v7 + 56) & 2) != 0)) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        v11 = *(_DWORD *)(a1 + 20);
        if ( (v11 & 0x100000) != 0 && !(unsigned int)MiControlAreaRequiresCharge(v7, ((v11 & 0x200000) == 0) | 2u) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
          {
            v20 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v20);
          }
          v10 = -1073740277;
          goto LABEL_47;
        }
      }
      active = MiReferenceActiveControlArea(a1, v7);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
      }
      __writecr8(v8);
      MiReleaseControlAreaWaiters(active);
      *a3 = v7;
      return 0LL;
    }
    v15 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 0);
    v16 = v15;
    if ( v15 )
      KeAbPreWait(v15);
    HIDWORD(v23[2]) = 0;
    v23[4] = &v23[3];
    LOWORD(v23[2]) = 263;
    v23[3] = &v23[3];
    BYTE2(v23[2]) = 6;
    LODWORD(v23[1]) = 1;
    v23[0] = *(_QWORD *)(v7 + 80);
    *(_QWORD *)(v7 + 80) = v23;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    __writecr8(v8);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    KeWaitForGate(&v23[2], 18LL);
    if ( v16 )
    {
      KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, v16, 0);
      KeAbPostReleaseEx((ULONG_PTR)SectionObjectPointer);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
}
