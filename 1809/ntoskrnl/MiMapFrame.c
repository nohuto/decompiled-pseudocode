/*
 * XREFs of MiMapFrame @ 0x1402ABFA4
 * Callers:
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x1402AC0B0 (MiMapSystemCachePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiMapFrame(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // r8d
  int v4; // eax
  __int64 v5; // rdx
  int v6; // r8d
  bool v7; // zf

  v3 = 4;
  if ( a2 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
  {
    v4 = *(unsigned __int8 *)(48 * a2 - 0x57FFFFFFFDELL) >> 6;
    if ( !v4 || v4 == 3 )
    {
      v3 = 12;
    }
    else if ( v4 == 2 )
    {
      v3 = 28;
    }
  }
  MiMakeValidPte(a1, a2, v3 | 0xA0000000);
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_16;
      v7 = (v5 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_16;
      v7 = (v5 & 1) == 0;
    }
    if ( !v7 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_16:
  *(_QWORD *)a1 = v5;
  if ( v6 )
    MiWritePteShadow(a1, v5);
  return (__int64)(a1 << 25) >> 16;
}
