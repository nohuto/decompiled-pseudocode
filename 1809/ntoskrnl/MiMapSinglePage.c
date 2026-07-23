/*
 * XREFs of MiMapSinglePage @ 0x14012194C
 * Callers:
 *     MiFillCombinePage @ 0x140121854 (MiFillCombinePage.c)
 *     MiInitializeForkMaps @ 0x1402CAA68 (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x1402CADF8 (MiUpdateForkMaps.c)
 *     MiMapRetpolineStubs @ 0x140854EDC (MiMapRetpolineStubs.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

ULONG_PTR __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 v7; // rdi
  ULONG_PTR result; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // eax
  char v11; // cl
  int ProtectionPfnCompatible; // eax
  __int64 v13; // rdx
  int v14; // r8d
  bool v15; // zf
  __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // r11d

  v7 = a1;
  if ( a1 )
  {
    v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v9) )
    {
LABEL_4:
      v10 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
      v11 = v10 | 2;
      if ( (a3 & 0x40000000) != 0 )
        v11 = v10;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v11, 48 * a2 - 0x58000000000LL);
      MiMakeValidPte((unsigned __int64)v9, a2, ProtectionPfnCompatible | 0xA0000000);
      goto LABEL_7;
    }
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = v18;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_24;
LABEL_22:
        if ( ((unsigned __int8)v16 & (unsigned __int8)v18) != 0 )
          v16 |= 0x8000000000000000uLL;
        goto LABEL_24;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        goto LABEL_22;
    }
LABEL_24:
    *v9 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v9, v16);
    KeFlushSingleTb(v7, 0, v18);
    goto LABEL_4;
  }
  result = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
  v9 = (_QWORD *)result;
  if ( !result )
    return result;
  v7 = (__int64)(result << 25) >> 16;
  if ( (a4 & 2) == 0 )
    goto LABEL_4;
LABEL_7:
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_8;
      v15 = (v13 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_8;
      v15 = (v13 & 1) == 0;
    }
    if ( !v15 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v9 = v13;
  if ( v14 )
    MiWritePteShadow((__int64)v9, v13);
  return v7;
}
