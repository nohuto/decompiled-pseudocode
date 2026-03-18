/*
 * XREFs of MiPurgeSubsection @ 0x1402B9D38
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiCheckProtoPtePageState @ 0x1400549A0 (MiCheckProtoPtePageState.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A020 (MiDereferenceControlAreaPfnList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rax
  unsigned __int8 v4; // di
  __int64 v5; // r13
  unsigned int v6; // r15d
  ULONG_PTR v7; // rbp
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
  KIRQL v19; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v3 = *(unsigned int *)(BugCheckParameter2 + 44);
  v4 = 17;
  v5 = *(_QWORD *)BugCheckParameter2;
  v6 = 1;
  v22 = 17;
  v7 = 0LL;
  v8 = v1 + 8 * v3;
  if ( v1 >= v8 )
    return v6;
  while ( (v1 & 0xFFF) == 0 || v4 == 17 )
  {
    if ( v4 != 17 )
      MiUnlockProtoPoolPage(v7, v4);
    v7 = MiCheckProtoPtePageState(v1, &v22);
    if ( v7 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
        MiUnlockProtoPoolPage(v7, v22);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      v4 = v22;
      break;
    }
    v1 = (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_36:
    v4 = v22;
LABEL_37:
    if ( v1 >= v8 )
      goto LABEL_43;
  }
  MiLockLeafPage((unsigned __int64 *)v1, 0);
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
    if ( qword_140465800 )
    {
      if ( (BugCheckParameter4 & 0x10) != 0 )
        v12 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = ~qword_140465800 & BugCheckParameter4;
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
      if ( HIBYTE(word_1404658EC) == v17 )
      {
        v18 = (v15 & 1) == 0;
        goto LABEL_28;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v18 = (v15 & 1) == 0;
LABEL_28:
      if ( !v18 )
        v15 |= 0x8000000000000000uLL;
    }
LABEL_30:
    *(_QWORD *)v1 = v15;
    if ( v16 )
      MiWritePteShadow(v1);
    MiUnlinkPageFromList(48 * v13 - 0x58000000000LL, 0);
    MiInsertPageInFreeOrZeroedList(v13, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    MiDecrementShareCount(v7);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v1 += 8LL;
    goto LABEL_36;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_42:
  v4 = v22;
  v6 = 0;
LABEL_43:
  if ( v4 != 17 )
    MiUnlockProtoPoolPage(v7, v4);
  if ( !v6 )
  {
    v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
    *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v19);
  }
  return v6;
}
