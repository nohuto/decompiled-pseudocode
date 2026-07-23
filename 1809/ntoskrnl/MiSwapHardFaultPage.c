/*
 * XREFs of MiSwapHardFaultPage @ 0x1402D014C
 * Callers:
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x1400304A0 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x140118A14 (MiUpdateTransitionPteFrame.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiSwapHardFaultPage(unsigned __int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r10
  BOOL v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *v10; // r10
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 result; // rax

  v5 = MI_READ_PTE_LOCK_FREE(a1);
  MiUpdateTransitionPteFrame(v5, (a3 + 0x58000000000LL) / 48);
  v7 = MiPteInShadowRange(v6);
  v11 = v9 + 1;
  if ( v7 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = v11;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_8;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_8;
    }
    if ( ((unsigned __int8)v8 & (unsigned __int8)v11) != 0 )
      v8 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v10 = v8;
  if ( (_DWORD)v9 )
    MiWritePteShadow((__int64)v10, v8);
  MiLockNestedPageAtDpcInline(a3, v8, v9);
  MiCopyPfnEntryEx(a3, a2);
  if ( ((*(_QWORD *)(a2 + 40) >> 54) & 7) == 3 )
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a3 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  v12 = *(_QWORD *)(a2 + 16);
  if ( (((unsigned __int8)v12 >> 2) & (unsigned __int8)v11) != 0 )
  {
    v12 &= ~4uLL;
    *(_QWORD *)(a2 + 16) = v12;
  }
  if ( (((unsigned __int8)v12 >> 1) & (unsigned __int8)v11) != 0 )
    *(_QWORD *)(a2 + 16) = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (unsigned int)MiRemoveLockedPageCharge(a2) )
    MiPfnReferenceCountIsZero(a2, (__int64)(a2 + 0x58000000000LL) / 48);
  else
    *(_WORD *)(a3 + 32) = v11;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
