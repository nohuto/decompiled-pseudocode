/*
 * XREFs of MiSwapHardFaultPage @ 0x1402EC2A0
 * Callers:
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     MiUpdateTransitionPteFrame @ 0x14009D504 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14009D550 (MiCopyPfnEntryEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MiSwapHardFaultPage(unsigned __int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r10
  BOOL v7; // eax
  __int64 v8; // rdx
  int v9; // r8d
  _QWORD *v10; // r10
  int v11; // esi
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
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_8;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_8;
    }
    if ( ((unsigned __int8)v8 & (unsigned __int8)v11) != 0 )
      v8 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v10 = v8;
  if ( v9 )
    MiWritePteShadow((__int64)v10);
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntryEx(a3, (__int128 *)a2);
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
