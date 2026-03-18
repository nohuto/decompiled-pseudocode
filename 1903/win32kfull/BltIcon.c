/*
 * XREFs of BltIcon @ 0x1C002D3A4
 * Callers:
 *     _DrawIconEx @ 0x1C002CFB4 (_DrawIconEx.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243DB8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 * Callees:
 *     GreSetStretchBltMode @ 0x1C002D5B0 (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 */

__int64 __fastcall BltIcon(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        HDC a6,
        __int64 a7,
        int a8,
        int a9)
{
  int v9; // esi
  int v15; // [rsp+E8h] [rbp+40h]

  v9 = 0;
  if ( a8 != 1 && a8 != 3 && !*(_QWORD *)(a7 + 96) )
    v9 = *(_DWORD *)(a7 + 144) >> 1;
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  GreSetStretchBltMode(a1);
  GreSelectBitmap(a6);
  if ( a8 == 3 )
  {
    LOBYTE(v15) = 0;
    HIWORD(v15) = 511;
    BYTE1(v15) = a9 < 0 ? 0 : 0x80;
    NtGdiAlphaBlend(a1, a2, a3, a4, a5, a6, 0, v9, *(_DWORD *)(a7 + 140), *(_DWORD *)(a7 + 144) >> 1, v15, 0LL);
  }
  else
  {
    GreStretchBltInternal(a1, a2, a3, a5, a6, 0, v9, *(_DWORD *)(a7 + 140), *(_DWORD *)(a7 + 144) >> 1, a9, -1, 0);
  }
  GreSetStretchBltMode(a1);
  GreSetTextColor(a1);
  GreSetBkColor(a1);
  GreSelectBitmap(a6);
  return 1LL;
}
