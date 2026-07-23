/*
 * XREFs of MxSwapPages @ 0x1409C14C8
 * Callers:
 *     MxRelocatePageTables @ 0x1409C0C44 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x1409C0EB0 (MxMovePageTables.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiWriteValidPteNewPage @ 0x1400EEBAC (MiWriteValidPteNewPage.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MxGetPhase0Mapping @ 0x1409C17B0 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v4; // r14
  __int64 result; // rax
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int8 v10; // si
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // r8d
  BOOL v16; // r12d
  size_t v17; // r11
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  int v20; // r8d
  unsigned __int8 v21; // bl
  char v22; // dl
  __int64 *v23; // r8
  int v24; // r9d
  __int64 v25; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v27; // r9
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  struct _KPRCB *v31; // rcx
  __int64 v32; // [rsp+60h] [rbp+18h] BYREF

  v32 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v6 = result;
  if ( !result )
    return result;
  result = MiGetPage(
             (__int64)&MiSystemPartition,
             (unsigned __int16)(*(_WORD *)(a1 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u)) | (unsigned int)*(unsigned __int16 *)(a1 + 10),
             8u);
  v7 = result;
  if ( result == -1 )
    return result;
  v8 = 48 * result - 0x58000000000LL;
  v9 = 48 * v4 - 0x58000000000LL;
  v10 = MiLockPageInline(v9);
  MiLockNestedPageAtDpcInline(v8, v11, v12);
  MiFinalizePageAttribute(v8, *(unsigned __int8 *)(v9 + 34) >> 6, 1u);
  MiCopyPfnEntryEx(v8, v9);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v10);
  v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMakeValidPte(v13, v7, -1610612732);
  v16 = MiPteInShadowRange(v13);
  v17 = 4096LL;
  if ( v16 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_5;
      v28 = (v14 & 1) == 0;
    }
    else
    {
      if ( ((unsigned int)v17 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0])) == 0 )
        goto LABEL_5;
      v28 = (v14 & 1) == 0;
    }
    if ( !v28 )
      v14 |= v27;
  }
LABEL_5:
  *(_QWORD *)v13 = v14;
  if ( v15 )
    MiWritePteShadow(v13, v14);
  v18 = (__int64)(a2 << 25) >> 16;
  memmove((void *)v6, (const void *)v18, v17);
  v19 = ZeroPte;
  if ( ((v13 ^ v18) & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v20 = 0;
    if ( !v16 )
    {
LABEL_9:
      *(_QWORD *)v13 = v19;
      if ( !v20 )
        goto LABEL_10;
      v25 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      goto LABEL_42;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v20 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_9;
      v30 = (v19 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_9;
      v30 = (v19 & 1) == 0;
    }
    if ( !v30 )
      v19 |= 0x8000000000000000uLL;
    goto LABEL_9;
  }
  if ( MiPteInShadowRange(v6 + 8 * ((v13 >> 3) & 0x1FF)) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v24 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_14;
      v29 = (v19 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_14;
      v29 = (v19 & 1) == 0;
    }
    if ( !v29 )
      v19 |= 0x8000000000000000uLL;
  }
LABEL_14:
  *v23 = v19;
  if ( !v24 )
    goto LABEL_10;
  v25 = (__int64)v23;
LABEL_42:
  MiWritePteShadow(v25, v19);
LABEL_10:
  v32 = v32 ^ (v32 ^ (v7 << 12)) & 0xFFFFFFFFF000LL | 0x20;
  MiWriteValidPteNewPage((__int64 *)a2, v32, 0);
  KeFlushSingleTb(v18, 0, 1u);
  KeFlushSingleTb(v6, 0, 1u);
  v21 = MiLockPageInline(48 * v4 - 0x58000000000LL);
  v22 = *(_BYTE *)(v9 + 34) & 0xDF;
  *(_WORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(v9 + 34) = v22;
  *(_BYTE *)(v9 + 34) &= ~8u;
  MiInsertPageInFreeOrZeroedList(v4, 2);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
  {
    v31 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v31);
  }
  result = v21;
  __writecr8(v21);
  return result;
}
