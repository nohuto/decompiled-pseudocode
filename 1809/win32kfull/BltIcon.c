/*
 * XREFs of BltIcon @ 0x1C006DB60
 * Callers:
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022AD88 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 * Callees:
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreSetStretchBltMode @ 0x1C006DD70 (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 */

__int64 __fastcall BltIcon(XLATEOBJ *a1, int a2, int a3, int a4, int a5, HDC a6, __int64 a7, int a8, int a9)
{
  int v9; // esi
  __int64 v14; // rdi
  __int64 v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+E8h] [rbp+40h]

  v9 = 0;
  if ( a8 == 1 )
    goto LABEL_2;
  if ( a8 == 3 )
  {
    v14 = *(_QWORD *)(a7 + 128);
  }
  else
  {
    v14 = *(_QWORD *)(a7 + 96);
    if ( !v14 )
    {
      v9 = *(_DWORD *)(a7 + 144) >> 1;
LABEL_2:
      v14 = *(_QWORD *)(a7 + 88);
    }
  }
  GreSetBkColor((HDC)a1);
  GreSetTextColor((HDC)a1);
  GreSetStretchBltMode((HDC)a1);
  v16 = GreSelectBitmap(a6, v14);
  if ( a8 == 3 )
  {
    LOBYTE(v17) = 0;
    HIWORD(v17) = 511;
    BYTE1(v17) = a9 < 0 ? 0 : 0x80;
    NtGdiAlphaBlend(a1, a2, a3, a4, a5, (POINTL)a6, 0, v9, *(_DWORD *)(a7 + 140), *(_DWORD *)(a7 + 144) >> 1, v17);
  }
  else
  {
    GreStretchBltInternal(
      (HDC)a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      0,
      v9,
      *(_DWORD *)(a7 + 140),
      *(_DWORD *)(a7 + 144) >> 1,
      a9,
      -1,
      0);
  }
  GreSetStretchBltMode((HDC)a1);
  GreSetTextColor((HDC)a1);
  GreSetBkColor((HDC)a1);
  GreSelectBitmap(a6, v16);
  return 1LL;
}
