/*
 * XREFs of MiChangingSubsectionProtos @ 0x1402B5620
 * Callers:
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B6B98 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402B7370 (MiUnlinkSubsectionWaitBlock.c)
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
  __int64 v16; // rdx
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  PRTL_BALANCED_NODE v20; // rax
  struct _KPRCB *v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+70h] [rbp+8h]
  int v26; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = a2 & 0x10;
  v23 = *BugCheckParameter2;
  v26 = v4;
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
    v24 = v12;
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
            KeAbPreWait((__int64)v15, v16);
          v12 = v24;
        }
      }
    }
    *(_DWORD *)(a3 + 12) = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_BYTE *)(a3 + 18) = 6;
    *(_DWORD *)(a3 + 20) = 0;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    if ( (*(_DWORD *)(v23 + 56) & 0x20) != 0 )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v23 + 80);
      *(_QWORD *)(v23 + 80) = a3;
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
      v20 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
      if ( v20 )
        BYTE2(v20[1].Left) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v10 >= 2u )
        goto LABEL_58;
LABEL_57:
      v21 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v21);
      goto LABEL_58;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v17);
    }
    __writecr8(v10);
    KeWaitForGate(a3 + 16, 0x12u);
    v3 = v23;
    v4 = v26;
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
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v18);
  }
  v9 = -1073740748;
LABEL_58:
  __writecr8(v10);
  return v9;
}
