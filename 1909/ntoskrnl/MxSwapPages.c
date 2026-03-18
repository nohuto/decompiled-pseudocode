/*
 * XREFs of MxSwapPages @ 0x1409FC9A4
 * Callers:
 *     MxRelocatePageTables @ 0x1409FC0C0 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x1409FC334 (MxMovePageTables.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiWriteValidPteNewPage @ 0x1400FA008 (MiWriteValidPteNewPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     MxGetPhase0Mapping @ 0x1409FCC88 (MxGetPhase0Mapping.c)
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
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // r8d
  BOOL v14; // r12d
  size_t v15; // r11
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // r8d
  unsigned __int8 v19; // bl
  char v20; // dl
  __int64 v21; // rdx
  _QWORD *v22; // r8
  int v23; // r9d
  __int64 v24; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v26; // r9
  bool v27; // zf
  bool v28; // zf
  bool v29; // zf
  struct _KPRCB *v30; // rcx
  __int64 v31; // [rsp+60h] [rbp+18h] BYREF

  v31 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v6 = result;
  if ( !result )
    return result;
  result = MiGetPage(
             (__int64)&MiSystemPartition,
             *(_DWORD *)(a1 + 8) & (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) | *(_DWORD *)(a1 + 12),
             8LL);
  v7 = result;
  if ( result == -1 )
    return result;
  v8 = 48 * result - 0x58000000000LL;
  v9 = 48 * v4 - 0x58000000000LL;
  v10 = MiLockPageInline(v9);
  MiLockNestedPageAtDpcInline(v8);
  MiFinalizePageAttribute(v8, *(unsigned __int8 *)(v9 + 34) >> 6, 1u);
  MiCopyPfnEntryEx(v8, (__int128 *)v9);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v10);
  v11 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMakeValidPte(v11, v7, -1610612732);
  v14 = MiPteInShadowRange(v11);
  v15 = 4096LL;
  if ( v14 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_5;
      v27 = (v12 & 1) == 0;
    }
    else
    {
      if ( ((unsigned int)v15 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4])) == 0 )
        goto LABEL_5;
      v27 = (v12 & 1) == 0;
    }
    if ( !v27 )
      v12 |= v26;
  }
LABEL_5:
  *(_QWORD *)v11 = v12;
  if ( v13 )
    MiWritePteShadow(v11);
  v16 = (__int64)(a2 << 25) >> 16;
  memmove((void *)v6, (const void *)v16, v15);
  v17 = ZeroPte;
  if ( ((v11 ^ v16) & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v18 = 0;
    if ( !v14 )
    {
LABEL_9:
      *(_QWORD *)v11 = v17;
      if ( !v18 )
        goto LABEL_10;
      v24 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      goto LABEL_42;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v18 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_9;
      v29 = (v17 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_9;
      v29 = (v17 & 1) == 0;
    }
    if ( !v29 )
      v17 |= 0x8000000000000000uLL;
    goto LABEL_9;
  }
  if ( MiPteInShadowRange(v6 + 8 * ((v11 >> 3) & 0x1FF)) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v23 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_14;
      v28 = (v21 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_14;
      v28 = (v21 & 1) == 0;
    }
    if ( !v28 )
      v21 |= 0x8000000000000000uLL;
  }
LABEL_14:
  *v22 = v21;
  if ( !v23 )
    goto LABEL_10;
  v24 = (__int64)v22;
LABEL_42:
  MiWritePteShadow(v24);
LABEL_10:
  v31 = v31 ^ (v31 ^ (v7 << 12)) & 0xFFFFFFFFF000LL | 0x20;
  MiWriteValidPteNewPage((__int64 *)a2, v31, 0);
  KeFlushSingleTb(v16, 0, 1u);
  KeFlushSingleTb(v6, 0, 1u);
  v19 = MiLockPageInline(48 * v4 - 0x58000000000LL);
  v20 = *(_BYTE *)(v9 + 34) & 0xDF;
  *(_WORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(v9 + 34) = v20;
  *(_BYTE *)(v9 + 34) &= ~8u;
  MiInsertPageInFreeOrZeroedList(v4, 2);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
  {
    v30 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v30);
  }
  result = v19;
  __writecr8(v19);
  return result;
}
