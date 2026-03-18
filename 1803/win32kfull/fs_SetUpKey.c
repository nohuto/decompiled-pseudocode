/*
 * XREFs of fs_SetUpKey @ 0x1C02B1F84
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 *     fs_FindBitMapSize @ 0x1C02B0CCC (fs_FindBitMapSize.c)
 *     fs_GetGlyphIDs @ 0x1C02B1B4C (fs_GetGlyphIDs.c)
 *     fs_NewGlyph @ 0x1C02B1C74 (fs_NewGlyph.c)
 *     fs_NewSfnt @ 0x1C02B1E24 (fs_NewSfnt.c)
 *     fs_WinNTGetGlyphIDs @ 0x1C02B2004 (fs_WinNTGetGlyphIDs.c)
 *     fs__Contour @ 0x1C02B207C (fs__Contour.c)
 *     fs__NewTransformation @ 0x1C02B27B0 (fs__NewTransformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fs_SetUpKey(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
  {
    *a3 = 4097;
    return 0LL;
  }
  *(_QWORD *)(v3 + 232) = a1 + 8;
  if ( a1 == -8 )
  {
    *a3 = 4099;
    return 0LL;
  }
  v5 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v3 + 8) = v5;
  if ( !v5 )
  {
    *a3 = 4104;
    return 0LL;
  }
  v6 = *(_DWORD *)(a1 + 92);
  if ( !v6 )
    v6 = 2;
  *(_DWORD *)(v3 + 12) = v6;
  if ( (a2 & *(_DWORD *)(v3 + 420)) != a2 )
  {
    *a3 = 4101;
    return 0LL;
  }
  v7 = *(_QWORD *)(a1 + 96);
  result = v3;
  *a3 = 0;
  *(_QWORD *)v3 = v7;
  return result;
}
