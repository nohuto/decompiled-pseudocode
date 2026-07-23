/*
 * XREFs of MiChangingSubsectionProtos @ 0x1402CA7FC
 * Callers:
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CC978 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402CD18C (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(_QWORD *BugCheckParameter2, char a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // edi
  char v6; // r13
  volatile LONG *v8; // rbp
  unsigned int v9; // ebx
  KIRQL v10; // si
  bool v11; // zf
  int v12; // edx
  __int64 **v13; // rdi
  _KLOCK_ENTRY *v14; // r13
  PRTL_BALANCED_NODE v15; // rax
  struct _KPRCB *v16; // rcx
  struct _KPRCB *v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  PRTL_BALANCED_NODE v19; // rax
  struct _KPRCB *v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+70h] [rbp+8h]
  int v25; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = a2 & 0x10;
  v22 = *BugCheckParameter2;
  v25 = v4;
  v6 = a2;
  v8 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v9 = 0;
  while ( 1 )
  {
    v10 = ExAcquireSpinLockExclusive(v8);
    if ( v4 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      v11 = *(_DWORD *)(a3 + 12) == 2;
      *(_DWORD *)(a3 + 8) = 0;
      if ( v11 )
        break;
    }
    v12 = v6 & 8;
    v23 = v12;
    *(_DWORD *)(a3 + 8) = v12 != 0 ? 0x40 : 0;
    if ( (v6 & 0x20) != 0 )
      *(_DWORD *)(a3 + 8) |= 0x100u;
    if ( v4 )
      *(_DWORD *)(a3 + 8) |= 0x80u;
    if ( BugCheckParameter2[1] && (v6 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      v9 = -1073741302;
      goto LABEL_58;
    }
    v13 = 0LL;
    v14 = 0LL;
    if ( !v12 )
    {
      v13 = (*(_DWORD *)(v3 + 56) & 0x20) != 0 ? *(__int64 ***)(v3 + 80) : (__int64 **)BugCheckParameter2[3];
      if ( v13 )
      {
        do
        {
          if ( ((_DWORD)v13[1] & 0x40) == 0 )
            break;
          v13 = (__int64 **)*v13;
        }
        while ( v13 );
        if ( v13 )
        {
          v15 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
          v14 = (_KLOCK_ENTRY *)v15;
          if ( v15 )
            KeAbPreWait((__int64)v15);
          v12 = v23;
        }
      }
    }
    *(_DWORD *)(a3 + 12) = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_BYTE *)(a3 + 18) = 6;
    *(_DWORD *)(a3 + 20) = 0;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    if ( (*(_DWORD *)(v22 + 56) & 0x20) != 0 )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v22 + 80);
      *(_QWORD *)(v22 + 80) = a3;
    }
    else
    {
      *(_QWORD *)a3 = BugCheckParameter2[3];
      BugCheckParameter2[3] = a3;
    }
    if ( v12 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v10 >= 2u )
        goto LABEL_58;
      goto LABEL_57;
    }
    if ( !v13 )
    {
      v19 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
      if ( v19 )
        BYTE2(v19[1].Left) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v10 >= 2u )
        goto LABEL_58;
LABEL_57:
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v20);
      goto LABEL_58;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
    __writecr8(v10);
    KeWaitForGate(a3 + 16, 18);
    v3 = v22;
    v4 = v25;
    if ( v14 )
    {
      KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, &v14->TreeNode, 0);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v14);
    }
    v6 = a2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v17);
  }
  v9 = -1073740748;
LABEL_58:
  __writecr8(v10);
  return v9;
}
