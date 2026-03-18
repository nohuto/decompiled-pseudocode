/*
 * XREFs of MiCopyHeaderIfResident @ 0x1400E2B4C
 * Callers:
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400A8124 (MiTryLockProtoPoolPageAtDpc.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdatePageAttributeStamp @ 0x14013256C (MiUpdatePageAttributeStamp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  KIRQL v4; // al
  __int64 *v5; // r14
  unsigned __int8 v6; // di
  __int64 v7; // r14
  volatile LONG *v8; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // r15
  __int64 v13; // rbx
  char v14; // al
  unsigned __int64 v15; // rax
  int v16; // esi
  ULONG_PTR v17; // rax
  __int64 v18; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v20; // rcx
  __int64 v21; // [rsp+60h] [rbp+40h] BYREF
  ULONG_PTR v22; // [rsp+70h] [rbp+50h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp+58h] BYREF

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140464580);
    v5 = *(__int64 **)(a1 + 40);
    v6 = v4;
    if ( !v5 || (v7 = *v5) == 0 )
    {
      v8 = &dword_140464580;
      goto LABEL_4;
    }
    v10 = ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v7 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
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
  if ( (*(_DWORD *)(v7 + 56) & 3) != 0
    || (v12 = *(_QWORD *)(v7 + 136)) == 0
    || (v21 = 0LL, v22 = 0LL, (int)MiTryLockProtoPoolPageAtDpc(v12, v11, (__int64 *)&v22, (__int64)&v21) < 0) )
  {
    v8 = (volatile LONG *)(v7 + 72);
LABEL_4:
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v20);
    }
    __writecr8(v6);
    return 0LL;
  }
  v13 = v21;
  v14 = *(_BYTE *)(v21 + 34);
  if ( (v14 & 0x20) != 0 || (v14 & 0xC0) != 0x40 || (*(_BYTE *)(v21 + 35) & 0x40) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_43;
  }
  v15 = MI_READ_PTE_LOCK_FREE(v12);
  v23 = v15;
  if ( (v15 & 1) != 0 )
  {
    v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23);
    v16 = 0;
  }
  else
  {
    if ( qword_140465B00 )
    {
      if ( (v15 & 0x10) != 0 )
        v15 &= ~0x10uLL;
      else
        v15 &= ~qword_140465B00;
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
LABEL_43:
    MiUnlockProtoPoolPage(v22, v6);
    return 0LL;
  }
  MiCopyPage(a2, v17, 0LL, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
    KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( v16 == 1 )
    MiUpdatePageAttributeStamp(v21);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v22, v6);
  return 1LL;
}
