/*
 * XREFs of ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F7668
 * Callers:
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F77F0 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C004D798 (GreGetBitmapBitsSize.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C0054774 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     xxxRealizePalette @ 0x1C0098390 (xxxRealizePalette.c)
 *     _SelectPalette @ 0x1C00FE484 (_SelectPalette.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01F732C (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     GreSetDIBits @ 0x1C02A2B04 (GreSetDIBits.c)
 */

HSURF __fastcall xxxDIBtoBMP(const struct tagBITMAPINFO *a1, __int64 a2, unsigned int a3)
{
  DWORD biSize; // edi
  unsigned int BitmapBitsSize; // eax
  __int64 v8; // r8
  __int64 v9; // r11
  unsigned int v10; // ecx
  unsigned int biWidth_low; // r14d
  unsigned int biWidth_high; // ebp
  WORD biHeight_high; // r15
  char *v14; // r12
  HSURF v15; // rsi
  HDC CompatibleDC; // rdi
  HSURF ScreenBitmap; // rax
  __int64 v18; // r14
  __int64 v19; // r15

  biSize = a1->bmiHeader.biSize;
  if ( !(unsigned int)GreGetBitmapSizeInternal(a1, 0, a1->bmiHeader.biSize) )
    return 0LL;
  BitmapBitsSize = GreGetBitmapBitsSize((__int64)a1);
  if ( !BitmapBitsSize )
    return 0LL;
  v10 = BitmapBitsSize + v9;
  if ( BitmapBitsSize + (unsigned int)v9 < BitmapBitsSize || a3 < v10 )
    return 0LL;
  if ( biSize != 40 )
  {
    if ( biSize == 12 )
    {
      biWidth_low = LOWORD(a1->bmiHeader.biWidth);
      biWidth_high = HIWORD(a1->bmiHeader.biWidth);
      biHeight_high = HIWORD(a1->bmiHeader.biHeight);
      goto LABEL_9;
    }
    return 0LL;
  }
  biWidth_low = a1->bmiHeader.biWidth;
  biWidth_high = a1->bmiHeader.biHeight;
  biHeight_high = a1->bmiHeader.biBitCount;
LABEL_9:
  v14 = (char *)a1 + v9;
  v15 = 0LL;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), v10, v8);
  if ( CompatibleDC )
  {
    ScreenBitmap = CreateScreenBitmap(biWidth_low, biWidth_high, biHeight_high);
    v15 = ScreenBitmap;
    if ( ScreenBitmap )
    {
      v18 = 0LL;
      v19 = GreSelectBitmap(CompatibleDC, ScreenBitmap);
      if ( a2 )
      {
        v18 = SelectPalette((__int64)CompatibleDC, a2, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSetDIBits(CompatibleDC, v15, (__int64)v14, (__int64)a1);
      if ( v18 )
      {
        SelectPalette((__int64)CompatibleDC, v18, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSelectBitmap(CompatibleDC, v19);
    }
    GreDeleteDC(CompatibleDC);
  }
  return v15;
}
