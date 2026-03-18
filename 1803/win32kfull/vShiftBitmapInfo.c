/*
 * XREFs of vShiftBitmapInfo @ 0x1C02241C8
 * Callers:
 *     lQueryTTOutline @ 0x1C021DB14 (lQueryTTOutline.c)
 *     lGGOBitmap @ 0x1C021F1E4 (lGGOBitmap.c)
 *     lGetGlyphBitmap @ 0x1C021F444 (lGetGlyphBitmap.c)
 *     vShiftOutlineInfo @ 0x1C0224288 (vShiftOutlineInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vShiftBitmapInfo(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r10d
  int v4; // r9d
  __int64 result; // rax

  v3 = ((*(int *)(a1 + 392) >> 15) + 1) >> 1;
  v4 = ((*(int *)(a1 + 396) >> 15) + 1) >> 1;
  *(_WORD *)(a2 + 104) = v3 + *(_WORD *)(a3 + 104);
  *(_WORD *)(a2 + 100) = v3 + *(_WORD *)(a3 + 100);
  *(_WORD *)(a2 + 98) = v4 + *(_WORD *)(a3 + 98);
  *(_WORD *)(a2 + 102) = v4 + *(_WORD *)(a3 + 102);
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 392) + *(_DWORD *)(a3 + 80);
  *(_DWORD *)(a2 + 84) = *(_DWORD *)(a1 + 396) + *(_DWORD *)(a3 + 84);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a3 + 76);
  *(_DWORD *)(a2 + 76) = -*(_DWORD *)(a3 + 72);
  *(_DWORD *)(a2 + 204) = *(_DWORD *)(a3 + 208);
  *(_DWORD *)(a2 + 208) = -*(_DWORD *)(a3 + 204);
  *(_DWORD *)(a2 + 212) = *(_DWORD *)(a3 + 212);
  result = *(unsigned int *)(a3 + 216);
  *(_DWORD *)(a2 + 216) = result;
  return result;
}
