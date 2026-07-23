/*
 * XREFs of MiInitializeTransitionPfn @ 0x140028D84
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiSectionCreated @ 0x140092660 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x1400930D8 (MiInitializeImageProtos.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 ContainingPageTable; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // al
  char v10; // al
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rbx
  __int64 result; // rax
  char v18; // r8
  bool v19; // zf
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)v4 = 0LL;
  v6 = ContainingPageTable;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 16) = v7;
  *(_QWORD *)(v4 + 8) = a2;
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  v9 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 40) = v6 & 0xFFFFFFFFFLL | v8 & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  if ( (v9 & 0x10) != 0 )
    v10 = v9 & 0xF8 | 3;
  else
    v10 = v9 & 0xF8 | 2;
  *(_BYTE *)(v4 + 34) = v10;
  v20 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v20) >> 5) & 0x1F;
  v12 = MiProtectionToCacheAttribute(v11);
  MiFinalizePageAttribute(v4, v12, 1LL);
  *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
  v20 = MiSwizzleInvalidPte(32 * (((a1 & 0xFFFFFFFFFLL) << 7) | (unsigned int)v11 | 0x40));
  if ( (unsigned int)MiPteInShadowRange(a2, v20, v20) )
  {
    if ( (unsigned int)MiPteHasShadow(v14, v13) )
    {
      v15 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_4;
      v19 = (v18 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_4;
      v19 = (v18 & 1) == 0;
    }
    if ( !v19 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *a2 = v13;
  if ( v15 )
    MiWritePteShadow(a2);
  v16 = 48 * v6 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v16);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
