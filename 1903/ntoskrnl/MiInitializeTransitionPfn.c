/*
 * XREFs of MiInitializeTransitionPfn @ 0x1400A3DA8
 * Callers:
 *     MiInitializeImageProtos @ 0x1400A2264 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CB23C (MiCopyImageExtentContents.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     MiFinalizePageAttribute @ 0x1400A3F48 (MiFinalizePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x1400A456C (MiProtectionToCacheAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int64 ContainingPageTable; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // al
  char v12; // al
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rbx
  __int64 result; // rax
  char v21; // r8
  bool v22; // zf
  __int64 TransitionPte; // [rsp+50h] [rbp+8h] BYREF

  v6 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
  *(_QWORD *)v6 = 0LL;
  v8 = ContainingPageTable;
  v9 = MI_READ_PTE_LOCK_FREE(a2);
  TransitionPte = v9;
  if ( (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
  {
    v9 = *(_QWORD *)(48 * a3 - 0x57FFFFFFFF0LL);
    TransitionPte = v9;
  }
  v10 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 16) = v9;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
  v11 = *(_BYTE *)(v6 + 34);
  *(_QWORD *)(v6 + 40) = v8 & 0xFFFFFFFFFLL | v10 & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  if ( (v11 & 0x10) != 0 )
    v12 = v11 & 0xF8 | 3;
  else
    v12 = v11 & 0xF8 | 2;
  *(_BYTE *)(v6 + 34) = v12;
  TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
  v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPte) >> 5) & 0x1F;
  v14 = MiProtectionToCacheAttribute(v13);
  MiFinalizePageAttribute(v6, v14, 1LL, v15);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  if ( a3 == -1 )
  {
    TransitionPte = MiMakeTransitionPte(a1, v13);
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
      goto LABEL_6;
    if ( (unsigned int)MiPteHasShadow(v17) )
    {
      v18 = 1;
      if ( !HIBYTE(word_140465BEC) )
      {
        v22 = (v21 & 1) == 0;
        goto LABEL_17;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v22 = (v21 & 1) == 0;
LABEL_17:
      if ( !v22 )
        v16 |= 0x8000000000000000uLL;
    }
LABEL_6:
    *a2 = v16;
    if ( v18 )
      MiWritePteShadow(a2, v16);
  }
  v19 = 48 * v8 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v19);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
