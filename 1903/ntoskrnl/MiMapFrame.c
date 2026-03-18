/*
 * XREFs of MiMapFrame @ 0x1402C4FF4
 * Callers:
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x1402C5100 (MiMapSystemCachePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
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
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_16;
      v7 = (v5 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_16;
      v7 = (v5 & 1) == 0;
    }
    if ( !v7 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_16:
  *(_QWORD *)a1 = v5;
  if ( v6 )
    MiWritePteShadow(a1);
  return (__int64)(a1 << 25) >> 16;
}
