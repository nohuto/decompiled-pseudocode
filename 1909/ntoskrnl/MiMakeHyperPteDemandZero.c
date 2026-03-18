/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x140124288
 * Callers:
 *     MiFillHyperPtes @ 0x14001FA40 (MiFillHyperPtes.c)
 *     MiMakeHyperRangeAccessible @ 0x140052580 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r11
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r8
  int v7; // r9d
  bool v8; // zf

  v3 = a3;
  if ( !*a3 )
    goto LABEL_5;
  MiSwizzleInvalidPte(128LL);
  if ( MiPteInShadowRange(v4) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v7 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_3;
      v8 = (v5 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_3;
      v8 = (v5 & 1) == 0;
    }
    if ( !v8 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *v6 = v5;
  if ( v7 )
    MiWritePteShadow((__int64)v6);
LABEL_5:
  ++*((_QWORD *)v3 + 1);
}
