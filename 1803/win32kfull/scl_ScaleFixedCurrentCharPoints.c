/*
 * XREFs of scl_ScaleFixedCurrentCharPoints @ 0x1C02B557C
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 *     fsg_MergeGlyphData @ 0x1C02BDD24 (fsg_MergeGlyphData.c)
 * Callees:
 *     scl_ScaleFromFixedFUnits @ 0x1C02B56D8 (scl_ScaleFromFixedFUnits.c)
 */

__int64 __fastcall scl_ScaleFixedCurrentCharPoints(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  int v7; // r9d
  int v9; // [rsp+20h] [rbp-18h]

  v4 = *a1;
  v5 = *a1;
  v9 = (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * (*((__int16 *)a1 + 40) - 1)) + 1);
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_ScaleFromFixedFUnits(a2 + 264, *(_DWORD *)(a2 + 184), v4, v5, v9);
    v6 = *(_DWORD *)(a2 + 188);
    v7 = 280;
  }
  else
  {
    scl_ScaleFromFixedFUnits(a2 + 232, *(_DWORD *)(a2 + 176), v4, v5, v9);
    v6 = *(_DWORD *)(a2 + 180);
    v7 = 248;
  }
  return scl_ScaleFromFixedFUnits(
           v7 + (int)a2,
           v6,
           a1[1],
           a1[1],
           (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * (*((__int16 *)a1 + 40) - 1)) + 1));
}
