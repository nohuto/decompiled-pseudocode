/*
 * XREFs of MiPurgeSubsection @ 0x1402A2E18
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rax
  unsigned __int8 v4; // di
  __int64 v5; // r13
  unsigned int v6; // r15d
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rsi
  ULONG_PTR v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // r8d
  char v17; // r9
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // r8
  KIRQL v21; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v3 = *(unsigned int *)(BugCheckParameter2 + 44);
  v4 = 17;
  v5 = *(_QWORD *)BugCheckParameter2;
  v6 = 1;
  v24 = 17;
  v7 = 0LL;
  v8 = v1 + 8 * v3;
  if ( v1 >= v8 )
    return v6;
  while ( (v1 & 0xFFF) == 0 || v4 == 17 )
  {
    if ( v4 != 17 )
      MiUnlockProtoPoolPage(v7, v4);
    v7 = MiCheckProtoPtePageState(v1, &v24);
    if ( v7 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
        MiUnlockProtoPoolPage(v7, v24);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      v4 = v24;
      break;
    }
    v1 = (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_36:
    v4 = v24;
LABEL_37:
    if ( v1 >= v8 )
      goto LABEL_43;
  }
  MiLockLeafPage((__int64 *)v1, 0);
  BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v1);
  v12 = BugCheckParameter4;
  if ( !v11 )
  {
    if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v1, BugCheckParameter4);
    v1 += 8LL;
    goto LABEL_37;
  }
  if ( (BugCheckParameter4 & 1) == 0 )
  {
    if ( qword_14043B180 )
    {
      if ( (BugCheckParameter4 & 0x10) != 0 )
        v12 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = ~qword_14043B180 & BugCheckParameter4;
    }
    v13 = (v12 >> 12) & 0xFFFFFFFFFLL;
    v14 = 48 * v13 - 0x58000000000LL;
    if ( (*(_BYTE *)(v14 + 34) & 0x10) != 0 || *(_WORD *)(v14 + 32) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_42;
    }
    MiDereferenceControlAreaPfnList(v5, BugCheckParameter2, v10, 2);
    if ( !MiPteInShadowRange(v1) )
      goto LABEL_30;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_14043B26C) == v17 )
      {
        v18 = (v15 & 1) == 0;
        goto LABEL_28;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v18 = (v15 & 1) == 0;
LABEL_28:
      if ( !v18 )
        v15 |= 0x8000000000000000uLL;
    }
LABEL_30:
    *(_QWORD *)v1 = v15;
    if ( v16 )
      MiWritePteShadow(v1, v15);
    MiUnlinkPageFromList(48 * v13 - 0x58000000000LL, 0);
    MiInsertPageInFreeOrZeroedList(v13, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v25, v19, v20);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    MiDecrementShareCount(v7);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v1 += 8LL;
    goto LABEL_36;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_42:
  v4 = v24;
  v6 = 0;
LABEL_43:
  if ( v4 != 17 )
    MiUnlockProtoPoolPage(v7, v4);
  if ( !v6 )
  {
    v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
    *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v21);
  }
  return v6;
}
