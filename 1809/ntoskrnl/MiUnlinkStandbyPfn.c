/*
 * XREFs of MiUnlinkStandbyPfn @ 0x140120514
 * Callers:
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiUnlinkStandbyPfn(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbx
  char v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // bp
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d

  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  if ( qword_14043B180 )
  {
    if ( (v4 & 0x10) != 0 )
      v4 &= ~0x10uLL;
    else
      v4 &= ~qword_14043B180;
  }
  v5 = (v4 >> 12) & 0xFFFFFFFFFLL;
  v6 = 48 * v5 - 0x58000000000LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    return 2LL;
  if ( !(unsigned int)MiUnlinkPageFromList(48 * v5 - 0x58000000000LL, 0) )
  {
    MiDiscardTransitionPte(48 * v5 - 0x58000000000LL);
    return 1LL;
  }
  v7 = *(_BYTE *)(v6 + 34);
  ++*(_WORD *)(v6 + 32);
  *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 6;
  *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xC000000000000000uLL | 1;
  if ( (a2 & 2) != 0 && (unsigned int)MiGetPfnPriority(48 * v5 - 0x58000000000LL) > 2 )
    *(_BYTE *)(v6 + 35) = *(_BYTE *)(v6 + 35) & 0xF8 | 2;
  v8 = MI_READ_PTE_LOCK_FREE(v6 + 16);
  v9 = *(_BYTE *)(v6 + 34);
  v10 = v9 >> 6;
  v11 = v8 >> 5;
  if ( v10 )
  {
    if ( v10 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  MiMakeValidPte(0LL, v5, v11);
  if ( (a2 & 4) == 0 || !MiIsPfnFileOnly(48 * v5 - 0x58000000000LL) )
    *(_BYTE *)(v6 + 34) = v9 | 0x10;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v13, v12) )
    {
      v14 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_13;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_13;
    }
    if ( (v12 & 1) != 0 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_13:
  *a1 = v12;
  if ( v14 )
    MiWritePteShadow(a1);
  return 0LL;
}
