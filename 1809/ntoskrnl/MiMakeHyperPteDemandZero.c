/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x14011B00C
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiFillHyperPtes @ 0x14011AEF4 (MiFillHyperPtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r11
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  int v8; // r9d
  bool v9; // zf

  v3 = a3;
  if ( !*a3 )
    goto LABEL_5;
  MiSwizzleInvalidPte(128LL);
  if ( MiPteInShadowRange(v4) )
  {
    if ( (unsigned int)MiPteHasShadow(v6, v5) )
    {
      v8 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_3;
      v9 = (v5 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_3;
      v9 = (v5 & 1) == 0;
    }
    if ( !v9 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *v7 = v5;
  if ( v8 )
    MiWritePteShadow(v7);
LABEL_5:
  ++*((_QWORD *)v3 + 1);
}
