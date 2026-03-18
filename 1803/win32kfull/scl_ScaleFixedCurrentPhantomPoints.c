/*
 * XREFs of scl_ScaleFixedCurrentPhantomPoints @ 0x1C02B5644
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C02BDD24 (fsg_MergeGlyphData.c)
 * Callees:
 *     scl_ScaleFromFixedFUnits @ 0x1C02B56D8 (scl_ScaleFromFixedFUnits.c)
 */

__int64 __fastcall scl_ScaleFixedCurrentPhantomPoints(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // r9d

  v4 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
  scl_ScaleFromFixedFUnits(a2 + 264, *(_DWORD *)(a2 + 184), *(_QWORD *)a1 + 4 * v4, *(_QWORD *)a1 + 4 * v4, 8);
  v5 = *(_QWORD *)(a1 + 8) + 4 * v4;
  return scl_ScaleFromFixedFUnits((int)a2 + 280, *(_DWORD *)(a2 + 188), v5, v5, 8);
}
