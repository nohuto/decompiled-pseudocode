/*
 * XREFs of MiUnlinkStandbyPfn @ 0x1401216A0
 * Callers:
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
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
  int v13; // r8d

  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  if ( qword_140465800 )
  {
    if ( (v4 & 0x10) != 0 )
      v4 &= ~0x10uLL;
    else
      v4 &= ~qword_140465800;
  }
  v5 = (v4 >> 12) & 0xFFFFFFFFFLL;
  v6 = 48 * v5 - 0x58000000000LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    return 2LL;
  if ( !(unsigned int)MiUnlinkPageFromList(48 * v5 - 0x58000000000LL, 0) )
  {
    MiDiscardTransitionPteEx(48 * v5 - 0x58000000000LL, 0LL);
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
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_13;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_13;
    }
    if ( (v12 & 1) != 0 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_13:
  *a1 = v12;
  if ( v13 )
    MiWritePteShadow((__int64)a1);
  return 0LL;
}
