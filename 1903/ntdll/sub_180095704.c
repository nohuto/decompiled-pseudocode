/*
 * XREFs of sub_180095704 @ 0x180095704
 * Callers:
 *     fabs @ 0x18008FE30 (fabs.c)
 *     sub_180094590 @ 0x180094590 (sub_180094590.c)
 *     sub_1800946BC @ 0x1800946BC (sub_1800946BC.c)
 *     sub_180094DA0 @ 0x180094DA0 (sub_180094DA0.c)
 *     sub_180095108 @ 0x180095108 (sub_180095108.c)
 *     sub_180095454 @ 0x180095454 (sub_180095454.c)
 * Callees:
 *     sub_180096710 @ 0x180096710 (sub_180096710.c)
 *     sub_1800A32A0 @ 0x1800A32A0 (sub_1800A32A0.c)
 */

__int64 __fastcall sub_180095704(int a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx

  v4 = sub_1800A32A0();
  v5 = a2 & a1 | v4 & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_18015FF20 && (((unsigned __int8)(a2 & a1) | v4 & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    sub_180096710(v5);
  else
    sub_180096710((unsigned int)v5 & 0xFFFFFFBF);
  return v4;
}
