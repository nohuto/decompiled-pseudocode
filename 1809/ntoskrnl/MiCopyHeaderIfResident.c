/*
 * XREFs of MiCopyHeaderIfResident @ 0x140092DB0
 * Callers:
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14011B894 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiUpdatePageAttributeStamp @ 0x140132CD0 (MiUpdatePageAttributeStamp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 *v5; // rbp
  unsigned __int8 v6; // di
  __int64 v7; // rbp
  volatile LONG *v8; // rcx
  int v10; // ebx
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rbx
  char v14; // al
  unsigned __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v20; // rcx
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140439C80);
    v5 = *(__int64 **)(a1 + 40);
    v6 = v4;
    if ( !v5 || (v7 = *v5) == 0 )
    {
      v8 = &dword_140439C80;
LABEL_4:
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v6 >= 2u )
        goto LABEL_5;
      goto LABEL_58;
    }
    v10 = ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
    if ( v10 )
      break;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
  }
  if ( (*(_DWORD *)(v7 + 56) & 3) != 0 )
  {
    v8 = (volatile LONG *)(v7 + 72);
    goto LABEL_4;
  }
  v11 = *(_QWORD *)(v7 + 136);
  if ( !v11 || (v12 = MiTryLockLeafAndContainingPagesAtDpc(*(_QWORD *)(v7 + 136), &v21, 0LL)) == 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v6 >= 2u )
      goto LABEL_5;
LABEL_58:
    v20 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v20);
LABEL_5:
    __writecr8(v6);
    return 0LL;
  }
  v13 = v21;
  if ( !v21 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
    goto LABEL_30;
  }
  v14 = *(_BYTE *)(v21 + 34);
  if ( (v14 & 0x20) != 0 || (v14 & 0xC0) != 0x40 || (*(_BYTE *)(v21 + 35) & 0x40) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_30;
  }
  v15 = MI_READ_PTE_LOCK_FREE(v11);
  v22 = v15;
  if ( (v15 & 1) != 0 )
  {
    v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22);
    v16 = 0;
  }
  else
  {
    if ( qword_14043B180 )
    {
      if ( (v15 & 0x10) != 0 )
        v15 &= ~0x10uLL;
      else
        v15 &= ~qword_14043B180;
    }
    v16 = 1;
  }
  v17 = (v15 >> 12) & 0xFFFFFFFFFLL;
  v18 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_30:
    MiUnlockProtoPoolPage(v12, v6);
    return 0LL;
  }
  MiCopyPage(a2, v17, 0LL, 4LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
    KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( v16 == 1 )
    MiUpdatePageAttributeStamp(v21);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v12, v6);
  return 1LL;
}
